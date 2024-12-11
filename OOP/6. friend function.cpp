#include<iostream>
#include<string>
using namespace std;
class Complex{
	private:
		int a;
		int b;
	public: 
	void setNum(int n , int m ){
		a= n;
		b = m;
	}
	void printnum(){
		cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
	}
	friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2){
	Complex o3;
	o3.setNum(o1.a + o2.a , o1.b+o2.b);  // can not access the private data of that class  to prove the friendship  with  class the class shoulld declare the function in it ; 
	return o3;
}
int main (){
	Complex c1,c2, sum;
	c1.setNum(1,4);
	c2.setNum(5,8);
	c1.printnum();
	c2.printnum();
	sum = sumComplex(c1,c2);
	sum.printnum();
	
	
	return 0;
} 
