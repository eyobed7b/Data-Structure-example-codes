//Circular Array Queue
#include<iostream> 
#include<process.h>  

# define MAX_SIZE 5
 using namespace std;

	int front =-1,rear=-1;
      	
		int queue[MAX_SIZE];
		int QueueSize=0;
		void display();
 
void insert_rear(int item) {
	if(QueueSize<MAX_SIZE)    {
		
		if(rear == MAX_SIZE) {
			rear=0;
			queue[rear]=item;
			QueueSize++;
		}
		else if(rear<MAX_SIZE) {
			rear++;
			queue[rear]=item;
			QueueSize++;
			if(front == -1)
				front++;
		}
}
	else
	{
	
		cout<<"Queue Overflow";
		}
	}

 
void delete_front()
{
	int x;
	if(QueueSize>0)   
	{
		x=queue[front];
		front++;
		if(front == MAX_SIZE)
		{
		
			front = 0;
		}
		QueueSize--;
		cout<<x<<" is deleted\n";
		display();
		}
	else
		cout<<"Queue Underflow";
} 
void display()
{
	int ptr;
	if((front==-1 && rear==-1)||(QueueSize==0))
	{
		cout<<"Queue is empty\n";
	}
  else if(front<=MAX_SIZE && front<=rear)
	{
	cout<<"\nThe queue is\n";

			for(ptr=front;ptr<=rear;ptr++)
	
					cout<<queue[ptr]<<"   ";
				
}
else if(front<=MAX_SIZE && rear<=front)
 {
 cout<<"\nThe queue is\n";

			for(ptr=front;ptr<=MAX_SIZE-1;ptr++)
	             {
				 
					cout<<queue[ptr]<<"   ";
				}
					if(ptr==MAX_SIZE)
			{
				
				for(ptr=0;ptr<=rear;ptr++)
				{
					cout<<queue[ptr]<<"  ";
				}
			}	
 }
}

 
 
int main()
{
	int data,i,element,choice;

	while(1)
	{
		cout<<"\n1: Insert an item.\n2: Delete an item.";
		cout<<"\n3: Display elements\n4: Exit";
		cout<<"\nEnter your choice: \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter  Element: \n";
			
					cin>>data;
					insert_rear(data);
			
				    display();
				break;
			case 2:
				delete_front();
			//	display();
			
				break;
			case 3:
				display();
				
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Please re-enter your choice.\n";
			
				break;
		 }
}
	return(0);
}
