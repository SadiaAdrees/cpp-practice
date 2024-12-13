/*Define a two-dimensional array named temp of three rows and four columns of type int such that
 the first row is initialized to 6, 8, 12, 9; the second row is initialized to 17, 5, 10, 6; and 
 the third row is initialized to 14, 13, 16, 20. Write C++ statements to accomplish the following:
a. Output the contents of the first row and first column element of temp. 
b. Output the contents of the first row and last column element of temp. 
c. Output the contents of the last row and first column element of temp. 
d. Output the contents of the last row and last column element of temp*/
#include<iostream>
using namespace std;
int main(){
	int array[3][4]= {{6,8,12,9}, 
	                 {17,5,10,6},
					 {14,13,16,20}};
	for(int r=0;r<3;r++){
		cout<<endl;
	    for(int c=0;c<4;c++){
		cout<<array[r][c]<<" ";		
	}				 
}	cout<<endl;	
    cout<<endl;		 
	cout<<"The contents of the first row and first column element of temp. "<<endl;				 
	cout<<"array[0][0]= "<<array[0][0]<<endl;
	cout<<"The contents of the first row and Last column element of temp. "<<endl;	
	cout<<"array[0][3]= "<<array[0][3]<<endl;
    cout<<"The contents of the Last row and first column element of temp. "<<endl;
	cout<<"array[2][0]= "<<array[2][0]<<endl;
	cout<<"The contents of the Last row and Last column element of temp. "<<endl;
	cout<<"array[2][3]= "<<array[2][3]<<endl;
	return 0;
}

