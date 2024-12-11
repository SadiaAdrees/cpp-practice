#include <iostream>
#include <string>
using namespace std;

// FORWARD DECLARATION :
/*
	CONPILER ASK WHERE IS THE COMPLEX CLASSS BECAUSE  compiler line by line read karay ga code so no gurantty k agy ho gi complex class k nhi 
	so declare it 1st 
*/
class Complex;
class Calculate{
	public: 
	int sum (int a , int b){
		return a+b;
	}
//	int sumreal(Complex o1, Complex o2){
//		return (o1.a+o2.a);  // can not access the private members of the class 
//} // STILL THSI FUN DO NOT WORK AS the compiler don;t know k coomplex class k pas a ya b member hain k nhi 
// so only declare the function here 
	int sumreal(Complex, Complex);
	int sumcom (Complex, Complex);
}; 

class Complex{
	private:
		int a;
		int b;
		// if i have more functon that are the frnd of the caculate class the we can't ell comiler all the time that this class has this frnd funstion so make the class friend
//		friend int Calculate:: sumreal(Complex , Complex );
//		friend int Calculate:: sumcom(Complex , Complex );
//		
//		// so alter is to make the whole class friend 
		friend class Calculate;
	public: 
	void setNum(int n , int m ){
		a= n;
		b = m;
	}
	void printnum(){
		cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
	}
	
};
 // funstion defination here  
	int Calculate:: sumreal(Complex o1, Complex o2){
		return (o1.a+o2.a);  
}
	int Calculate:: sumcom(Complex o1, Complex o2){
		return (o1.b+o2.b);  
}
int main(){
	Complex o1,o2;
	o1.setNum(1,4);
	o2.setNum(5,7);
	Calculate cal; 
	int resr = cal.sumreal(o1,o2);
	int resc = cal.sumcom(o1,o2);
	cout<<"The real number sum : "<<resr<<endl<<"The complex number sum : "<<resc;
	
	return 0;
}
