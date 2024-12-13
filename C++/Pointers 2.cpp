#include <iostream>
using namespace std;
int main()
{
	int x,y;
	x=3;
    y = 161;
	int *ptr;
	ptr = &x;
	cout << x     <<endl;
	cout << ptr   <<endl;
	cout << &x    <<endl;
	cout << *ptr  <<endl;
	cout << &ptr  <<endl;
	cout <<" \n--------------------------------"<<endl;
	ptr = &y;
	*ptr = 178;
	cout << ptr  <<endl;
	cout << &y   <<endl;
	cout << *ptr <<endl;
	cout << y    <<endl;
	cout << &ptr <<endl;

	return 0;
}
