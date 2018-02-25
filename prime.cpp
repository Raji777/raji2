#include<iostream>
using namespace std;
int main()
{
int n,p=0;
cout<<"enter n";
cin>>n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
p++;
}
}
if(p==2)
{
cout<<"prime";
}
else
{
cout<<"not a prime";
}
return 0;
}
