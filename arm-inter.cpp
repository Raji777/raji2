#include<iostream>
using namespae std;
int main()
{
int a,b,n,sum,digit;
cout<<"enter interval";
cin>>a>>b;
for(int i=a;i<=b;i++)
{
sum=0;
n=i;
for(;n>0;n=n/10)
{
digit=n%10;
sum=sum+digit*digit*digit;
}
if(sum==i)
{
cout<<i<<endl;
}
}
return 0;
}

