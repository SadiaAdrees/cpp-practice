#include<iostream>
using namespace std;
int main() {
	int q1,q2,q3,quiz, mid ,finals , total;
	cout<<"Results: =======Quizzes=============== \n";
	cout<<"Enter the score of the first quiz:";
	cin>> q1 ;
    cout<<"\n";
    cout<<"Enter the score of the second quiz:";
    cin>> q2;
    cout<<"\n";
    cout<<"Enter the score of the third quiz:";
    cin>> q3;
    cout<<"\n";
	cout<<"=======Mid-term==============  \n";
	cout<<"Enter the score of the mid-term: ";
	cin>> mid ;
	cout<<"=======Final================= \n";
	cout<<"Enter the score of the final: ";
	cin>> finals ;
	quiz= q1 +q2+q3;
	cout<<"\nQuiz Total:      " <<quiz ;
	cout<<"\nMid-term :       "<<mid ;
	cout<<"\nFinal        :   "<< finals;
	cout<<"\n........................";
	total= quiz+mid+finals;
	cout<<"\ntotal:            "<< total;               
	
}
