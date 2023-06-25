#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,column;
int choice=1;
bool draw;
bool gameover();


void display_board()
{
	system("cls");
	cout<<"\n\n   Tick Tac Toe Game"<<endl;
    cout<<"\tPlayer1 [x] \n\tPlayer2 [0]\n\n";
    cout<<"\t\t       |       |       \n";
    cout<<"\t\t  "<<board[0][0]<<"    |  "<<board[0][1]<<"    |   "<<board[0][2]<<"   \n";
    cout<<"\t\t_______|_______|_______\n";
    cout<<"\t\t       |       |       \n";
    cout<<"\t\t   "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<"   \n";
    cout<<"\t\t_______|_______|_______\n";
    cout<<"\t\t       |       |       \n";
    cout<<"\t\t   "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<"   \n";
    cout<<"\t\t       |       |       \n";
}
void player_turn(){
	
	cout<<"Please enter the choice between remaning number from above box only\n ";
    cout<<"Number are from 1 to 9";
	
	if(turn=='X')
	cout<<"\n\tPlayer1 [X] 	turn:";
	
	if(turn=='O')
	cout<<"\n\tPlayer2 [X]  turn:";

    
    cin>>choice;
	if(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 ||choice == 5 ||choice == 6 ||choice == 7 ||choice == 8 ||choice == 9)
   { 
	switch(choice){
  	case 1:row=0;column=0;break;
  	case 2:row=0;column=1;break;
  	case 3:row=0;column=2;break;
	case 4:row=1;column=0;break;
	case 5:row=1;column=1;break;
	case 6:row=1;column=2;break;
	case 7:row=2;column=0;break;
	case 8:row=2;column=1;break;
	case 9:row=2;column=2;break;
	default:
     	cout<<"Invalid choice please enter remaning number from above box only\n";
        break;
}      
 if(turn=='X' && board[row][column]!='X' && board[row][column]!='O')
   {
   	board[row][column]='X';
   	turn='O';
   }
   else  if(turn=='O'&& board[row][column]!='X' && board[row][column]!='O')
   {
   	board[row][column]='O';
   	turn='X';
   }
   else
   {
   	cout<<"Box already filled!\n Please try again!! \n\n";
   	 player_turn();
   }
   }
   else{
	cout<<"You entered invalid number re run the program to play again \n";
	gameover();
   }
	display_board();
}    
  bool gameover(){
  	//check win
	if(choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 ||choice == 5 ||choice == 6 ||choice == 7 ||choice == 8 ||choice == 9)
    {
  	for(int i=0;i<3;i++){
  	if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i])
  	return false;
	}
  	
  	if(board[0][0]==board[1][1] && board[0][0]== board[2][2] || board[0][2]==board[1][1] &&board[0][0]==board[2][0])
  	return false;
  	
  	//if there is any box not filled
  	for(int i=0;i<3;i++)
    for(int j=0;j<3;j++) 
    if(board[i][j]!='X' && board[i][j]!='O')
    return true;
	 	
	 	//draw
	 	draw=true;
	 	return false;
}else{
	choice=10;
	return false;
}
  }