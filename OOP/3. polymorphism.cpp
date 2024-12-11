#include <iostream>
#include <string>
using namespace std;
class Student{
	public:
		string name ;
		int number; 
//		CONSTUCTOR OVERLOADING 
		Student (){
			cout<<"non parameterise."<<endl;
		}
		Student (string name, int number){
			this->name = name;
			this->number = number; 
			cout<<"Parameterise."<<endl<<"NAME: "<<name<<endl;
			cout <<"Marks:  "<<number<<endl; 
		}
		void checkinfo(){
			cout<<"Check infor function\n"<<"NAME: "<<name<<endl;
			cout <<"Marks:  "<<number<<endl;
		}
};

/*      operator overloading     */
class Data{
	public: 
	int num; 
	Data (int n){
		this->num = n;
	}
	Data operator++(){
		num = ++num;
		return  num;
	}
	Data operator-(){
		num = -num;
		return  num;
	}
	Data operator+(Data t2){  // write the 2nd operand obj
		Data t3(0);
		t3.num = num+ t2.num;
		return t3.num;
	}
	Data operator*(Data t2){  // write the 2nd operand obj
		Data t3(0);
		t3.num = num * t2.num;
		return t3.num;
	}
	
};
// function overriding 
class Parent{
	public:
		void check(){
			cout<<endl<<"Parent Class "<<endl;
		}
		virtual void virtual_fun(){
			cout<<"Hi I am virtual fun from parent."<<endl;
		}
};
class Child:public Parent{
	public:
		void check(){
			cout<<endl<<"Child Class "<<endl;
		}
	 	void virtual_fun(){
			cout<<"Hi I am virtual fun from child."<<endl;
		}
};
int main(){
//	 compile time plymorphism >> construcor overloading , function overloading , operator overloading
	cout<<"\t*****Compile time polymorphism*****" <<endl<<"****Constructor overloading*****"<<endl;
	Student s1;
	Student s2("sadia", 98);
//	 operator overloading 
	cout<<endl<<endl<<endl;
	cout <<"****operator overloading ****"<<endl;
	Data n1(23), result(0);
//	practise on unary operator  >> having one operand 
	cout<<"the number is : "<<n1.num<<endl;
	result = ++n1; // there is the error because this data type is user define  not pre define so we have to overload teh operator so we have to make the funnction to overload this operator
	cout<<"the result is : "<<result.num<<endl;
	cout<<endl<<"the number is : "<<n1.num<<endl;
	result = -n1;	
	cout<<"the result is : "<<result.num<<endl;
 // pratice on binary operator    >> 2 oprands
 	Data t1(30) , t2(20) , res(0);
 	res = t1+t2;
 	cout<<endl<<"the result of t1 + t2 = "<<res.num<<endl;
    res = t1*t2;
 	cout<<endl<<"the result of t1 * t2 = "<<res.num<<endl;
   
   
   
   //	run time polymorphism function over riding
  	cout<<endl<<endl<<"\t*****Run Time polymorphism*****" <<endl<<"****Function over riding*****"<<endl;
  	Parent p;
  	Child c ; 
  	p.check();
  	c.check();
  	p.virtual_fun();
  	c.virtual_fun();
  
   
    
	return 0;
}
