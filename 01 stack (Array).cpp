#include<iostream.h>
#define max 10
int stack[max],top=-1;

void push(int x){
	if(top >=  max-1)
		cout <<"Stack overflow\n";
	else {
		++top;
		stack[top]=x;
		cout <<"Item inserted : " <<x;
	}
}

void pop(){
	if(top == -1 )
		cout <<"Stack underflow\n";
	else
		cout<<stack[top]<<"is deleted successfully!\n";
		top--;
}

void dis(){
	if(top<0)
		cout <<"Stack is Empty";
	else {
		cout<<"Stack element : \n";
		for(int i=top;i>=0;i--)
		cout <<stack[i] <<" ";
	}
}
                	
                		
 
int main()
{
    int choice=1,x;
    while(choice!=0)   {
        cout<<endl<<"1:PUSH\n"
			        "2:POP\n"
			        "3:DISPLAY STACK\n"
			        "0:EXIT\n"
        	        "Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
				cout<<"Enter the number : ";
				cin>>x; 
				push(x);
				break;
            case 2:  pop();  break;
            case 3:  dis();  break;
        }
    }
}


