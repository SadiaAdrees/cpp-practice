#include<iostream>
#include <string>
using namespace std;
string reversestring(string a,int size){
	if (size==0){
		return "";
	} else {
	size = size-1;
	return string(1, a[size])+reversestring(a,size);
}
}

int main(){
	string str= "hello";
	int size = str.size();
//	cout<<size;
	cout<<endl<< "Actual string is: "<<str<<endl; 
// via loop reverse 
	cout << "Reversed string via loop: ";
	for (int i=size-1 ;i>=0 ;i--){
//		cout<<"i=" <<i;
		cout<<str[i];
	}
// via recursive function
	cout<<endl<<"string in reverse order :  "<<reversestring(str,size);	
	return 0;
}
