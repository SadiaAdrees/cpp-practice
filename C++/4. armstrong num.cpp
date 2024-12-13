/*4.	Write a program to print out all Armstrong numbers between 1 and 1000. If sum of cubes of each digit 
of the number is equal to the number itself, then the number is called an Armstrong number.For example,
 370 = ( 3 * 3 * 3 ) + ( 7 * 7 * 7 ) + ( 0 * 0 * 0 )*/
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   int num, copynum , rem , sum=0;
   cout<< " Enter  the number: ";
   cin>> num; // 370
   copynum = num;
   while (num!=0){
   	rem=num%10; // 0 , 7 , 3
   	sum=sum+pow(rem,3);// 0+0^3=0,0+7^3= 343 , 343+ 3^3= 370
   	num=num/10;//37 , 3,0
   }
   if (copynum == sum){
   	cout<< " This is an Armstrong number.";
   }else {
   	cout<< " This is not an Armstrong number.";
   }
return 0;
}

