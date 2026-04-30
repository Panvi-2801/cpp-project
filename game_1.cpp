#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class TicTacToe {
private:
    char board[3][3];
    char player;
    char computer;

public:
    
    TicTacToe() {
        char count = '1';
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = count++;
            }
        }
        player = 'X';
        computer = 'O';
        srand(time(0)); 
    }

    
    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
            if (i < 2) cout << "---|---|---" << endl;
        }
        cout << "\n";
    }

    
    bool checkWin(char mark) {
        for (int i = 0; i < 3; i++) {
            
            if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark) return true;
            if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark) return true;
        }
        
        if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) return true;
        if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark) return true;
        return false;
    }

    
    bool checkDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') return false;
            }
        }
        return true;
    }

    
    void playerMove() {
        int choice;
        cout << "Enter position (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        
        if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
        } else {
            cout << "Invalid move! Please try again.\n";
            playerMove(); 
        }
    }

    
    void computerMove() {
        if (tryMove(computer)) return; 
        if (tryMove(player)) return;   

        
        while (true) {
            int r = rand() % 3;
            int c = rand() % 3;
            if (board[r][c] != 'X' && board[r][c] != 'O') {
                board[r][c] = computer;
                break;
            }
        }
    }

    
    bool tryMove(char mark) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') {
                    char temp = board[i][j];
                    board[i][j] = mark;
                    if (checkWin(mark)) {
                        board[i][j] = computer; 
                        return true;
                    }
                    board[i][j] = temp; 
                }
            }
        }
        return false;
    }

    
    void play() {
        cout << "--- TIC TAC TOE (OOP) ---\n";
        while (true) {
            displayBoard();
            playerMove();
            if (checkWin(player)) { displayBoard(); cout << "YOU WIN!\n"; break; }
            if (checkDraw()) { displayBoard(); cout << "GAME DRAW!\n"; break; }

            computerMove();
            if (checkWin(computer)) { displayBoard(); cout << "COMPUTER WINS!\n"; break; }
            if (checkDraw()) { displayBoard(); cout << "GAME DRAW!\n"; break; }
        }
    }
};

int main() {
    TicTacToe game; 
    game.play();    
    return 0;
}