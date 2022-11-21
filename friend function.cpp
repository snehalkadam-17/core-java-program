#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
		public:
			void setvalue(int p,int q)
			{
				a=p;
				b=q;
			}
			friend float mean(sample s);
};
float mean (sample s)
{
	return (s.a+s.b)/2.0;
}
main()
{
	sample s;
	s.setvalue(10,20);
	cout<<"\n mean value="<<mean(s);
}

