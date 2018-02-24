#include<iostream>
using namespace std;
int main()
{
int n,num,s=0,rem;
cout<<"enter n";
cin>>n;
n=num;
while(num!=0)
{
rem=num%10;
s=s*10+rem;
num=num/10;
}
if(n==s)
{
cout<<"palindrome";
}
else
{
cout<<"not a palindrome";
}
return 0;
}
