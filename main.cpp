#include <iostream>
#include <stdlib.h>
using namespace std;
#define ROW_COUNT 3;
int row,column;
char turn = 'X';
bool draw = false;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool gameover(){
       for(int row=0; row<ROW_COUNT ; row++)
        //checking the win for Simple Rows and Simple Column
          if( board[row][0]==board[row][1] && board[row][0]==board[row][2]  || board[0][row]==board[1][row] && board[0][row]==board[2][row])
               return false;
       //checking the win for both diagonal
          else if (board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] == board[0][2]==board[2][0] ) 
            return false; 

       for(int row=0; row<ROW_COUNT ; row++)    
          for(int column=0; column<ROW_COUNT ; column++)
             if(board[row][column]!='X' && board[row][column]!='O')
               return true ;
        draw=true;
        return false;
       
  }
void display_board(){

    //Rander Game Board LAYOUT

    cout<<"PLAYER - 1 [X]t PLAYER - 2 [O]nn";
    cout<<"tt     |     |     n";
    cout<<"tt  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" n";
    cout<<"tt_____|_____|_____n";
    cout<<"tt     |     |     n";
    cout<<"tt  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" n";
    cout<<"tt_____|_____|_____n";
    cout<<"tt     |     |     n";
    cout<<"tt  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" n";
    cout<<"tt     |     |     n";
}
int main()
{
 

    return 0;
}
