#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"enter c";
cin>>c;
if(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
cout<<"it is alphabet";
}
else
{
cout<<"it is number";
}
return 0;
}
