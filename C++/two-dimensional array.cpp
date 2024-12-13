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
//a
	cout<<"The first row and first column element "<<endl;		 
    for (int r=0;r<=0;r++){
    cout<<endl;
	    for(int c=0 ;c<4;c++){
	   cout<<array[r][c]<<" ";
   }
}  
   for (int r=1;r<3;r++){
    cout<<endl;
	    for(int c=0 ;c<=0;c++){
	   cout<<array[r][c]<<" ";
   }
}
    cout<<endl;
//b
 cout<<"The first row and last column element "<< endl;
 for (int r=0;r<=0;r++){
    cout<<endl;
	    for(int c=0 ;c<4;c++){
	   cout<<array[r][c]<<" ";
   }
}  
   for (int r=1;r<3;r++){
    cout<<endl;
      
	    for(int c=3 ;c<=3;c++){
	   cout<<"       "<<array[r][c]<<" ";
   }
}
    cout<<endl;
//c
	cout<<"The last row and first column element "<<endl;		 
   
   for (int r=0;r<3;r++){
    cout<<endl;
	    for(int c=0 ;c<=0;c++){
	   cout<<array[r][c]<<" ";
   }
}  for (int r=2;r<=2;r++){ 
	
	    for(int c=1 ;c<4;c++){
	   cout<<array[r][c]<<" ";
   }
} 
   cout<<endl;   
//d
 cout<<"The last  row and last column element "<< endl;

  for (int r=0;r<2;r++){
    cout<<endl;
      
	    for(int c=3 ;c<=3;c++){
	   cout<<"          "<<array[r][c]<<" ";
   } 
} cout<<endl;
   for (int r=2;r<=2;r++){ 
	
	    for(int c=0 ;c<4;c++){
	   cout<<array[r][c]<<" ";
   }
}  
    cout<<endl;

    
	return 0;
}

