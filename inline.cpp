#include<iostream>
using namespace std;
inline int max(int x,int y)
{
	return (x>y)?x:y;
}
//main function for the program 
int main()
{
	cout<<"max(20,10):"<<max(20,10)<<endl;
	cout<<"max(0,200):"<<max(0,200)<<endl;
	cout<<"max(100,1010):"<<max(100,1010)<<endl;
	return 0;
}
