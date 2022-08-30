#include<iostream>
using namespace std;
enum dow{mon,tue,wed,thus,fri,sat,sun};
int main(void)
{
	dow d1,d2;
	d1=wed;
	d2=tue;
	int different=d1-d2;
	cout<<"Day between mon through the are"<<different<<endl;
	if(d1<d2)
	cout<<"different comes before tue";
}

