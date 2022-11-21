#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
	    void setvalue(int i)
		{
			a=i;
			}	
		friend void max (A p,B q);	
};
class B
{
	 private:
	 	int b;
	 	public :
	 		void setvalue(int j)
	 		{
	 			b=j;
			 }
			friend void max(A p,B q);
};
void max(A p,B q)
{
	if(p.a=q.b)
	{
		cout<<p.a;
	}
	else
	{
		cout<<q.b;
	}
};
main()
{
	A p;
	B q;
	p.setvalue(10);
	q.setvalue(20);
	max(p,q);
}

