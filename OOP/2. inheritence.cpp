#include <iostream>
#include <string >
using namespace std;
class person{
	public:
		string name;
		int age;
		person(string name , int age){
			this->name= name ;
			this->age= age;
		}
		person(){
			cout<<"i am parent constructor"<<endl;
		}
		~person(){
			cout<<"i am parent destructor"<<endl;
		}
};
class student : public person{
	public:
		int rol_no;
		student (string name, int age, int rolno): person(name , age){
			this->rol_no = rolno;
		}
		student(){
			cout<<"i am child constructor"<<endl;
		}
		void getinfo(){
			cout<<"name: " << name<<endl;
			cout<<"age: " <<age<<endl;
			cout<<"rol_no: "<<rol_no <<endl;
		}
		~student(){
			cout<<"i am child destructor"<<endl;
		}
};

int main(){
//	student s1;
//	s1.name = "ali ";
//	s1.age = 20;
//	s1.rol_no = 23;
//	s1.getinfo();

// now if it is user written constructor 
	student s1("sadia", 21, 24);
	s1.getinfo();
	return 0;
}
