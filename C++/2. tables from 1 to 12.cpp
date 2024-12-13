/*2.	Nested loops Table 12 *12 Write a program in C++ that prints a tables  Starting from*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,c;
    for(i=1; i<=12; i++){ // i=1(true) 
        for(j=1; j<=12; j++) // 1.j=1 (true) j=2(t) j=3(t)
        {
          c=i*j; //c=1 , c= 2 , c=3
          cout<<" "<<c ; //1 2 3
        }
        cout<< endl;
    }
  return 0;
}

