#include<iostream>
#include<string>
using namespace std;
void fun(){
//	int x = 0; // when we write this it will allocate the emeory in the stack 
	static int x = 0;  //now in the lifetime of this programe x will be allocated and will be destory at the end of the program 
	cout<<"x : " <<x<<endl;
	x++;
}

//static variable in the class
class A {
	public:
		static int n;
		void increse(){
			n++;
			cout<<"n : "<<n<<endl;
		}
};

// Initialize the static member variable
int A::n = 99;

//static obj >> destory at the end of the program means after main function end then it's memory will destory 
class Person{
	public:
		Person(){
			cout<<endl<<"Constructor."<<endl;
		}
		~Person(){
			cout<<endl<<"Destructor."<<endl;
		}
};

int main(){
	fun();
	fun();
	fun();
//	static in class
	A n1,n2;
//	n1.n= 99;
//	n2.n = 199;
//	n1.increse();
//	n2.increse();
// that was how normal things work without static keyword know with static
	n1.increse();
	n2.increse(); 
	
	
//	 static object  : it has end where the condition end in the bpundary pof the if else but when we use static obj it destroy after th main funstion ends 
    if (true){
    	Person p1 ;	
	}
    cout<<endl<<"main function after using normal object. "<<endl;
    // use static keyword 
    if (true){
    	static Person p2 ;	
	}
    cout<<endl<<"main function signoff."<<endl;
	return 0;
}
