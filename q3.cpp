#include<iostream>
using namespace std;
int callcount=0;//Declaring Global variable callcount
//using this global variable
void displaycallcount()
{
	callcount++;
	cout<<"I have been called "<<callcount<<"times"<<endl;
}
void displaycallcount1()
{
	static int callcount1=0;
	callcount++;
	cout<<"I have been called "<<callcount<<"times"<<endl;
}
int main()
{
	for(int i=0;i<10;i++)
	{
		displaycallcount();
	}
	for(int i=0;i<10;i++)
        {
                displaycallcount1();
        }

	return 0;

}
