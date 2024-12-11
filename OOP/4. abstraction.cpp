#include<iostream>
#include<string>
using namespace std;
class shape{
	public:
	virtual void draw ()= 0; // pure virtual function 
	// as this class has the pure virtual function so it automatically become the abstract class
};
class circle : public shape{
	public:
	void draw(){
		cout<<"i am drawing a circle"<<endl;
	}
};

int main(){
//	shape s; // can note make the obj a it become abstract class as soon as we write the pure virtual function in it
    circle c;
    c.draw();
	return 0;
}
