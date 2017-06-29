#include<iostream.h>
using namespace std;
void main()
{
char c;
cout<<"Enter a character";
cin>>c;
if((c>='a' && c>='z') ||(c>='A' && c>='Z'))
cout<<"c is character"<<c;
else
cout<<"c is not an character"<<c;
return 0;
}
