#include<iostream>
using namespace std;
void func(char *str,int& num)
{
	cout<<"Inside Function:"<<str<<" "<<num<<endl;
}
void takefuncptr(void(*funcptr)(char *,int&))
{
	cout<<"Inside takefuncion pointer"<<endl;
}
void returnfuncptr(char *,int&)
{
	cout<<"Inside return function pointer"<<endl;
}
int main()
{
	int n=5,char c='x';
	func(&c,n);
	void(*funcptr)(char *,int&);
	funcptr=func;
	takefuncptr(funcptr);
	void(*ptr)(char *,int&);
	ptr=returnfuncptr;
	return 0;
}


