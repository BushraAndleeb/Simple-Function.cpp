#include<iostream>
using namespace std;
int Add(int a,int b);
int main()
{
	int a;
	int b;
	cout<<"The int onenumber is";
	cin>>a;
    cout<<"The int twonumber is";
    cin>>b;
    Add(a,b);
}
    	int Add(int a,int b)
	{
		cout<< a+b;
		return 0;
	}
    
