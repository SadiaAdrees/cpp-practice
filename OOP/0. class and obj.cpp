// class , obj , encapsulation , this pointer , consturctor , dectructor , type of copy (shallow and deep copy )
#include <iostream>
#include <string>
using namespace std;
// concept of classes and obj 
class student{
	private: // by default private 
		int marks; 
	public:
	// Properties / attributes 
	string name;
	string subject;
	int id;
	int age;
	int fee;
	char section;
	string std_class;
	public:
	//   memeber funstions / methods
	void changeclass(string new_std_class){
	std_class = new_std_class;
	}
//     access the private things indirectly by setter and getter
	void set_marks(int setmarks){
		marks = setmarks;
	}
	void get_marks(){
		cout<<"marks: "<< marks <<endl;
	}
};
// encapsulation:
class Account{
	private:  // private for data hiding
		string accountid;
		string password;
		string balance;
	public:
		string name;
		void debit(){
			//all the debit information
		}
		
};

// concept of constructor 
class teacher {
	public: 
	string name; 
	int id;
	double salary;
	void check (){
		cout<<"name : "<<name <<endl;  // empty string as : string is also a class which has its own constructor which say s to create the empty string 
		cout<<"Id : "<<id <<endl;  // garbage value 
		cout<<"Salary : "<<salary <<endl;
	}
};

// copy type 
// shalow copy and deep copy 

class car {
	private:
		int id;
		string name; 
		string model ;
		int year ;
		string color;
		double *expireptr ;
		int price;
	public:
//		user made constructor
		car(int id , string name , string model, int year, string color, int price, int expire){
//			this is a pointer that point the data members of this class 
			this->id = id ;
			this->name = name;
			this->model = model ;
			this->year= year;
			this->color= color;
			this->price= price;	
			expireptr = new double;
			*expireptr= expire;		
		}

////		user made constructor with shallow copy 
//		car(car &obj){
////			this is a pointer that point the data members of this class 
//			this->id = obj.id ;
//			this->name = obj.name;
//			this->model = obj.model ;
//			this->year= obj.year;
//			this->color= obj.color;
//			this->price= obj.price;	
//			this->expireptr= obj.expireptr;		
//		}
		
//		user made constructor with deep copy 
		car(car &obj){
//			this is a pointer that point the data members of this class 
			this->id = obj.id ;
			this->name = obj.name;
			this->model = obj.model ;
			this->year= obj.year;
			this->color= obj.color;
			this->price= obj.price;	
//			 here in the copy construtor we have to create the new location and 1st had to store the same exact value there
			expireptr = new double;
			*expireptr= *obj.expireptr;		
		}

		void check(){
			cout<<"The name of the car is: " <<name<<endl;
			cout<<"The id  of the car is: " <<id<<endl;	
			cout<<"The model  of the car is: " <<model<<endl;	
			cout<<"The year  of the car is: " <<year<<endl;	
			cout<<"The color  of the car is: " <<color<<endl;
			cout<<"The price  of the car is: " <<price<<endl;	
			cout<<"The expiry  of the car is: " <<*expireptr<<endl;	
		}
		void changeexpiry(){
			*expireptr= 2025;
			cout<<"the expire date change "<<endl;	
		}
		~car(){
			cout<<"I am destructor.\n";
			delete expireptr;
//			only memory free >> if we don't do (issues >> memory leak (program bnd ho gaya but memory free nhi hue  ))
		}
};
int main() {
	cout << " Concept of classes and obj "<<endl;
	student s1; 
	s1.name= " Sadia";
	s1.changeclass("ninth");
	cout<<"Name is : " << s1.name<<endl;
	cout <<"concept of getter and setter "<<endl;
	s1.set_marks(20);
	s1.get_marks();
	
	cout << " 1. Encapsulation "<< endl;
	cout << " 2. CONSTRUCTOR: " << endl;
	teacher t1;
	t1.check(); // it automatically gengerate the empty string 
	
//	 copy types(deep and shallow copy)
	cout <<"concept of user constructor + copy types(deep and shallow copy) "<<endl;
//	car c1(2,"audi","502A", 2019, "black", 122200,,2021);
//	c1.check();
//	 shallow copy as c2 will be the ecat copy of c1 (copy all its value )
	car c1(2,"audi","502A", 2019, "black", 122200,2021);
	c1.check();
	cout <<"*** concept of shallow copy ***"<<endl;
 	car c2(c1);
 	c2.check();
 	cout<<endl<<endl<<"change the expiry date of CAR 2"<<endl;
 	c2.changeexpiry();
 	c2.check();
 	cout<<endl<<endl<<"checking the expiry date of CAR 1"<<endl;
 	c1.check(); // value change but all we want is to chnage the expiry date of the 2nd car but also change the expire date of the 1st car too it happened as both objs pointers are pointing toward the same address. 
// 	 to chnage that we have deep copy 

// concept of deep copy >> chnage the pointer address as in shallow copy the addreess will be the same 
	cout <<endl<<endl<<endl<<"*** concept of Deep copy ****"<<endl;
 	c2.check();
 	cout<<endl<<endl<<"change the expiry date of CAR 2"<<endl;
 	c2.changeexpiry();
 	c2.check();
 	cout<<endl<<endl<<"checking the expiry date of CAR 1"<<endl;
 	c1.check(); 
 	
 	
// 	 dectructor 
//  it delete the allocated memory shallow copy delete by compiler but deep copy should be delete by user (new will b del by delete word )
//	it run automatically 
	
	
	
	return 0;
}
