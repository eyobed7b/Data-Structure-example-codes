#include <iostream>
#include<conio.h>
using namespace std;
struct student{  
	int id; 
	char name[20];          
	student *next;
};
student *start_ptr = NULL;
void b_add(){  
	student *temp,*temp2;
	temp=new student;
	cout<<"Enter the name: ";
	cin>>temp->name;
	cout<<"Enter the id: ";
	cin>>temp->id;
	
	if(start_ptr==NULL){  
		start_ptr=temp;
		start_ptr->next = NULL;
	}
	else{
		temp2=start_ptr;
		start_ptr=temp;
		temp->next=temp2;  
	}                
}
void e_add(){
	student *temp, *temp2; 
	temp = new student;
	cout << "Enter the name : ";
	cin >> temp->name;
	cout << "Enter the id : ";
	cin >> temp->id;
	temp->next = NULL;
	if (start_ptr == NULL)
	{ 
		start_ptr = temp;
	}
	else 
	{ 
		temp2 = start_ptr;
		while (temp2->next != NULL)
		{ 
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
}

void b_del()
{
	student *temp;
	temp = start_ptr;
	start_ptr = start_ptr->next;
	delete temp;
}
void e_del()
{ 
	student *temp1, *temp2;
	if (start_ptr == NULL)
		cout << "The list is empty!" << endl;
	else
	{
		temp1 = start_ptr;
		if (temp1->next == NULL)
		{
			delete temp1;
			start_ptr = NULL;
		}
		else
		{
			while (temp1->next != NULL)
			{
				temp2 = temp1;
				temp1 = temp1->next;
			}
			delete temp1;
			temp2->next = NULL;
		}
	}
}
void m_add()
{
	student* temp2, *temp;
	temp2=start_ptr;
	temp = new student;
	int c;
	cout<<"pos: ";
	cin>>c;
	cout << "Enter the name: ";
	cin >> temp->name;
	cout << "Enter the id: ";
	cin >> temp->id;
	for(int i=1;i<c; i++)
		temp2=temp2->next;
	temp->next=temp2->next;
	temp2->next=temp;
	cout<<"student inserted successfully";
}
void m_del()
{
	student* temp=start_ptr;
	int c,i;
	bool flag=true;
	cout<<"pos: ";
	cin>>c;
	for(i=1;i<c-1; i++)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			flag=false;
			cout<<"\n student not found\n";  
			break;
		}      
	}
	if(flag==true){
		student* temp2=temp->next;                  
		temp->next=temp2->next;
		delete temp2;
		cout<<"Deleted Successfully";
	}
}

void search()
{
	int value;
	int pos = 0;
	bool flag = false;
	if (start_ptr == NULL)
	{
	cout<<"List is empty"<<endl;
	return;
	}
	cout<<"Enter the id to be searched: ";
	cin>>value;
	student *s;
	s = start_ptr;
	while (s != NULL)
	{
	pos++;
	if (s->id == value)
	{
	flag = true;
	cout<<"Element "<<value<<" is found at position "<<pos<<endl;
	cout<<"Name ="<<s->name;
	}
	s = s->next;
	}
	if (!flag)
	cout<<"Element "<<value<<" not found in the list"<<endl;
}
void dis()
{
	student *temp;
	temp = start_ptr;
	cout << endl;
	if (temp == NULL)
		cout << "The list is empty!" << endl;
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
	start_ptr = NULL;
	do
	{
		cout << endl;
		cout << "Please select an option : " << endl;
		cout << "1. Add a student to the beginning of the list." << endl;
		cout << "2. Add a student to the end of the list." << endl;
		cout << "3. Delete the start student from the list." << endl;
		cout << "4. Delete the end student from the list." << endl;
		cout << "5. Add a student in middle of the list" << endl;
		cout << "6. Delete a student in middle of the list" << endl;
		cout << "7. Search" << endl;
		cout << "8. Display" << endl;
		cout << "0. Exit the program." << endl;
		cout << endl << " >> ";
		cin >> ch;
		switch (ch)
		{
			case 1 : b_add(); break;
			case 2 : e_add(); break;
			case 3 : b_del(); break;
			case 4 : e_del(); break;
			case 5 : m_add(); break;
			case 6 : m_del(); break;
			case 7 : search(); break;
			case 8 : dis(); break;
		}
	}while (ch != 0);
}

