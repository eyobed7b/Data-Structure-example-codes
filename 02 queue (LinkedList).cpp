#include<iostream>
using namespace std;
struct node {
    int data;
    node *nxt;
};
struct node *front = NULL,*rear = NULL;

void enqueue(int x) {
	struct node *temp;
	temp = new node;
    temp->data = x;
   // temp->nxt = NULL;
    if(front == NULL) {
        front = rear = temp;
        rear->nxt = NULL;
    }
    else {
        rear->nxt = temp;
        rear = temp;
        rear->nxt = NULL;
    }
}

void dequeue() {
	struct node *temp;
    int x;
    if(front == NULL)
        cout<<"Queue is empty!\n";
    else
    {
        temp = front;
        x = temp->data;
        front = front->nxt;
        delete temp;
    }
}

void dis(){
	struct node *temp;
	if(front == NULL)
        cout<<"Queue is empty!\n";
    else
    {
        temp = front;
		while(temp!=NULL)	   {
 			cout<<temp->data<<" ";
	        temp = temp->nxt;
	       
		}
    }
}

int main() {

    int choice=1,x;
    while(choice!=0)   {
        cout<<endl<<"1:Insert\n"
			        "2:Delete\n"
			        "3:Display\n"
			        "0:EXIT\n"
        	        "Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
				cout<<"Enter the number : ";
				cin>>x; 
				enqueue(x);
				break;
            case 2:  dequeue();  break;
            case 3:  dis();  break;
        }
    }
	

}

