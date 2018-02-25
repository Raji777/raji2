#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter interval 1 and 2";
cin>>a>>b;
for(int i=a;i<b;i++)
{
if(i%2!=0)
{
cout<<i<<endl;
}
}
return 0;
}
