#include<iostream>
using namespace std;
int main()
{
	int second,hour;
	float  result,min;
	cout<<"Enter the  seconds: ";
	cin>>second;
	
	hour = second / 3600;
	result = second % 3600;
	min = (int)result / 60;
	second = (int)result % 60;
	
	cout<<"Your hours is: "<<hour<<endl;
	cout<<"Your minutes are: "<<min<<endl;
	cout<<"Your seconds are : "<<second<<endl;
}
