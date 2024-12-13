//1.Write a program to print the table using a while loop.
#include<iostream> 
using namespace std;
 int main()
{
int i=1 ,n;
cout<<"\n Enter number:"; 
 cin>>n;
while (i<11) {

 cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
 i++;
}
return 0;
}
