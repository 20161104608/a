#include"iostream"

using namespace std;
struct student
{ 
	char name[50];
	char num[12];
	int age;
	struct student *next; 	
}; 
int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"1or2?\n",cin>>s,s==1)
	{
		p=new student;
		cin>>p->name;
		cin>>p->num;
		cin>>p->age;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;
	}	
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}
	while(q);
} 
