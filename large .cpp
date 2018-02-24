#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"enter numbers";
cin>>x>>y>>z;
if((x>y)&&(x>z))
{
cout<<"x is large";
}
else if(y>z)
{
cout<<"y is large";
}
else
{
cout<<"z is large";
}
return 0;
}
