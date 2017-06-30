#include<iostream.h>
using namespace std;
void main()
{
int n,a=0;
cout<<"Enter any number";
cin>>n;
while(n>=0)
{
n=n/10;
a++;
}
cout<<"The number of digits of an integer"<<a;
getch();
}
