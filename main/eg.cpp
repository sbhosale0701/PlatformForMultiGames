#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<ctime>
#include"seg.h"
#include"ticeg.h"
#include"hangmaneg.h"
#include<vector>
using namespace std;
int main()
{
	system("color 6C");
    int row, col;
    bool isHorizontal;
    char currentPlayer = 'A';
    int choice;
    data:
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t**************************PLATFORM FOR MULTI GAMES****************************";
    cout<<"\n\n\t\t\t\t\t\t\t\tCHOOSE THE GAME YOU WANT TO PLAY!!";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t1.Snake\n\t\t\t\t\t\t\t\t\t2.Tic Tac Toe \n\t\t\t\t\t\t\t\t\t3.Hangman";
    cin>>choice;
    switch(choice){
        case 1: snake();
        goto data;
        break;
        case 2: while(gameover())
        {
        display_board();
        player_turn();
        gameover();
        }
        if(choice !=10 && turn=='X' && draw==false)
        cout<<"Player1 [X] Wins!! Congratulations\n";
        else if(turn=='O' && draw==false)
        cout<<"Player2 [X] Wins!! Congratulations\n";
        else if(choice ==10 && turn=='X' && draw==false)
        {

        }
        else
        cout<<"GAME DRAW!!\n";
        goto data;
        break;
    case 3: 
   		srand(time(0));
    	cout << "Welcome to Hangman!\n";
   		 play();
        goto data;
        break;
    default:
    cout<<"You entered wrong choice!! \nPlease re-enter write one!";
    break;
    }
        return 0;
}