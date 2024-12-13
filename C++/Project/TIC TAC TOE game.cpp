/*GAME TIC TAC TOE:    Project by: Sadia Adrees  */
#include <iostream>
using namespace std;
	string name1;
	string name2;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice,row,column;
bool draw = false; 	
char turn= 'X', again;
void display(){
	system ("cls");
	cout<<"\t==============================================="<<endl;
	cout<<"\t||\t\t\t\t\t     ||\t\t\t\t    << Final Project >>"<<endl;
	cout<<"\t|| <<<< T I C   T A C   T O E   G A M E >>>> ||\t\t\t\tBy: Sadia Adrees"<<endl;
	cout<<"\t||\t\t\t\t\t     ||"<<endl;
	cout<<"\t==============================================="<<endl<<endl;
	cout<<"\t\t    "<<name1 <<"[X] "<<endl<<"\t\t    "<<name2 <<"[O]"<<endl;
    cout<<"\t\t\t\t        ||        ||        "<<endl;
    cout<<"\t\t\t\t    "<<arr[0][0]<<"   ||   "<<arr[0][1]<<"    ||   "<<arr[0][2]<<"     "<<endl;
    cout<<"\t\t\t\t========||========||========"<<endl;
    cout<<"\t\t\t\t        ||        ||        "<<endl;
    cout<<"\t\t\t\t    "<<arr[1][0]<<"   ||   "<<arr[1][1]<<"    ||   "<<arr[1][2]<<"     "<<endl;
    cout<<"\t\t\t\t========||========||========"<<endl;
    cout<<"\t\t\t\t        ||        ||        "<<endl;
    cout<<"\t\t\t\t    "<<arr[2][0]<<"   ||   "<<arr[2][1]<<"    ||   "<<arr[2][2]<<"     "<<endl;
    cout<<"\t\t\t\t        ||        ||        "<<endl;
}
void player_turn() {
	if(turn=='X'){
       cout<<endl<<"\t\t "<<name1 <<"'s [X] turn: ";
    }
	if(turn=='O'){
       cout<<endl<<"\t\t "<<name2 <<"'s [O] turn: ";}
  cin>>choice;	
    switch (choice){
    case 1: row=0;column=0;break;
	case 2: row=0;column=1;break;
	case 3: row=0;column=2;break;
	case 4: row=1;column=0;break;
    case 5: row=1;column=1;break;
    case 6: row=1;column=2;break;
    case 7: row=2;column=0;break;
    case 8: row=2;column=1;break;
    case 9: row=2;column=2;break;
    default: cout<<" Invalid input"; break;
	}
if(turn == 'X'&& arr[row][column]!= 'X' && arr[row][column]!= 'O' ){
	arr[row][column]= 'X';
	turn='O';
}else if(turn== 'O'&& arr[row][column]!= 'X' && arr[row][column]!= 'O'){
	arr[row][column]='O';
	turn='X';
}else{

 cout<< "\t \tTHIS BOX IS ALREADY FILLED!!"<<endl<< "\t \tPLEASE CHOOSE ANY OTHER BOX!!";
 player_turn();
}
  display();
} 
bool gameover(){ 
    
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
        return false;
    }
    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]) {
        return false;
    }
 
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        if (arr[i][j] != 'X' && arr[i][j] != 'O') {
            return true;
        } 
    draw = true; 
    return false;	
}


int  main (){
	agains: 
	system ("cls");
	cout<<"Enter Player[X] Name: ";
	cin>>name1;
	cout<<"Enter Player[O] Name: ";
	cin>>name2;
	char c='1';
 for(int i=0;i<3;i++){
 	for(int j=0;j<3;j++){
 		arr[i][j]= c;    
 		c++;
	 }
 }

  while (gameover())
{
  display();
  player_turn();
  gameover();
  
}

cout<<endl<<"\t==============================================="<<endl;

  if (turn=='X'&& draw == false){
	cout<<"\t\t "<<endl <<"\t\t\t "<<name2<<" [O] Wins\n \t\t\t'CONGRATULATIONS'\n  ";
} else if (turn=='O' && draw == false){
	cout<<"\t\t "<<endl <<"\t\t\t "<<name1<<" [X] Wins\n \t\t\t'CONGRATULATIONS'\n  ";
} else {
cout<<"\n\t\t\t THE GAME IS  DRAW"<<endl;
}
cout<<endl<<"\t==============================================="<<endl<<endl;
cout<<"Do  You Want to Play Again?"<<endl<<"Choose Y for play again or choose N for exit the Game:  ";
cin>>again;
if(again=='Y'|| again=='y'){
	goto agains;
}else if(again=='N'||again=='n'){
	exit (0);
}

	return 0;
}
