#include<iostream>
using namespace std;
int main()
{
int a,b,p;
cout<<"enter interval 1&2";
cin>>a,b;
while(a<b)
{
p=0;
for(int i=2;i<a/2;i++)
{
if(a%i==0)
{
p=1;
break;
}
}
if(p==0)
cout<<a<<"";
++a;
}
return 0;
}
