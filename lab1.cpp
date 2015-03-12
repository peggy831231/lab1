#include<iostream>
using namespace std;
int main()
{
int a,n=1;
cout<<"Enter a number"<<endl;
cin>>a;

while(n!=0)
{
cout<<a<<" " ;	
if(a==1)
n=0;
else if((a%2)==1)

a=3*a+1;

else 
a=a/2;

}

return 0;
}
