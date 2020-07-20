#include <iostream>
#include<conio.h>
using namespace std;
struct student{  
	int id; 
	char name[20];          
	student *next;
};
student *top = NULL;
void push(){  
	student *temp;
	temp=new student;
	cout<<"Enter the name: ";
	cin>>temp->name;
	cout<<"Enter the id: ";
	cin>>temp->id;
	
	temp->next = top;
	top = temp;            
}

void pop()
{
	if (top == NULL)
		cout << "The stack is empty!" << endl;
	else
	{	
		student *temp;
		temp = top;
		top = top->next;
		delete temp;
	}
}
void dis()
{
	student *temp;
	temp = top;
	if (temp == NULL)
		cout << "The Stack is empty!" << endl;
	else
	{
		while (temp != NULL){  
			cout << "Name : " << temp->name << " ";
			cout << "ID : " << temp->id << " ";
			cout << endl;
			temp = temp->next;
		}
	}
}
int main()
{    
	int ch;
	do
	{
		cout << endl;
		cout << "\nPlease select an option : " << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "8. Display" << endl;
		cout << "0. Exit the program." << endl;
		cout << endl << " >> ";
		cin >> ch;
		switch (ch)
		{
			case 1 : push(); break;
			case 2 : pop(); break;
			case 8 : dis(); break;
		}
	}while (ch != 0);
}

