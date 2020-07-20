#include<iostream>
#define max_size 5
using namespace std;
int q[5],front=-1,rear=-1,q_size=0;

void enqueue() {
	int x;
	if (rear< max_size-1) {
		cout<<"Enter the number:";
		cin>>x;
		rear++;
		q[rear]=x;
		q_size++;
		if(front==-1)
			front++;
	}
	else
		cout<<"Queue is full!";		
}
void dequeue() {
	int x;
	if (q_size>0) {
		x=q[front];
		front++;
		q_size--;
		cout<<"\n"<<x<<"  is removed from the queue.\n";
	}
	else
		cout<<"Queue is empty";
}
void display() {
	int i;
	if (q_size>0) {
		cout<<"\n Element in the queue:";
		for(i=front;i<=rear;i++) {
			cout<<q[i]<<" ";
		}
	}
	else
		cout<<"The queue is empty";
}

int main() {
	int ch=1;
    do{
	    cout<<"\n\n 1.Insert element";
		cout<<"\n 2.Delete element";
		cout<<"\n 3.Display";
		cout<<"\n 0:Exit\n";
		cout<<"\n Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: enqueue();	break;
			case 2:	dequeue();	break;
			case 3: display();	break;
			case 4:	exit(0);
		}
	}while(ch!=0);
}


