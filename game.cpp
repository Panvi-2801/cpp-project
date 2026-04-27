#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char board[3][3] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'}
};

char player = 'X';
char computer = 'O';

void displayBoard(){
cout<<"\n";
cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
cout<<"---|---|---"<<endl;
cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
cout<<"---|---|---"<<endl;
cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
cout<<"\n";
}

bool checkWin(char mark){

for(int i=0;i<3;i++){
if(board[i][0]==mark && board[i][1]==mark && board[i][2]==mark)
return true;

if(board[0][i]==mark && board[1][i]==mark && board[2][i]==mark)
return true;
}

if(board[0][0]==mark && board[1][1]==mark && board[2][2]==mark)
return true;

if(board[0][2]==mark && board[1][1]==mark && board[2][0]==mark)
return true;

return false;
}

bool checkDraw(){

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if(board[i][j]!='X' && board[i][j]!='O')
return false;
}
}
return true;
}

void playerMove(){
int choice;
cout<<"Enter position(1-9): ";
cin>>choice;

int row=(choice-1)/3;
int col=(choice-1)%3;

if(board[row][col]!='X' && board[row][col]!='O')
board[row][col]=player;
else{
cout<<"Invalid move\n";
playerMove();
}
}


void computerMove(){


for(int i=0;i<3;i++){
for(int j=0;j<3;j++){

if(board[i][j]!='X' && board[i][j]!='O'){
char temp=board[i][j];
board[i][j]=computer;

if(checkWin(computer))
return;

board[i][j]=temp;
}
}
}


for(int i=0;i<3;i++){
for(int j=0;j<3;j++){

if(board[i][j]!='X' && board[i][j]!='O'){
char temp=board[i][j];
board[i][j]=player;

if(checkWin(player)){
board[i][j]=computer;
return;
}

board[i][j]=temp;
}
}
}


while(true){
int row=rand()%3;
int col=rand()%3;

if(board[row][col]!='X' && board[row][col]!='O'){
board[row][col]=computer;
break;
}
}
}

int main(){

srand(time(0));

cout<<"TIC TAC TOE\n";

while(true){

displayBoard();

playerMove();

if(checkWin(player)){
displayBoard();
cout<<"You Win "<<endl;
break;
}

if(checkDraw()){
displayBoard();
cout<<"Draw "<<endl;
break;
}

computerMove();

if(checkWin(computer)){
displayBoard();
cout<<"Computer Wins "<<endl;
break;
}

if(checkDraw()){
displayBoard();
cout<<"Draw "<<endl;
break;
}

}

return 0;
}