#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"enter n";
cin>>n;
while(n>0)
{
n=n/10;
count++;
}
cout<<"no of digits in a num is"<<count;
return 0;
}
