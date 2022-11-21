#include<iostream>
using namespace std;
class student
{
	private:
	       int rollno;
		   string name[20];
		   float marks;
	public:
	void accept()
	{
		cout<<"\n enter the rollno=";
		cin>>rollno;
		cout<<"\n enter the name=";
		cin>>name;
		cout<<"\n enter the marks=";
		cin>>marks;
			   }
			   void display()
			   {
			   	cout<<"\n rollno"<<rollno;
			   	cout<<"\n name="<<name;
				cout<<"\n marks="<<marks;  
				   						  }	   	
};
main()
{
	student s1;
	s1.accept();
	s1.display();
}
