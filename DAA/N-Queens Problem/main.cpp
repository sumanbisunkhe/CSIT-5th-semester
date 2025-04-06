#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int N) {
    for(int i=0; i<col; i++)
        if(board[row][i]) return false;

    for(int i=row, j=col; i>=0 && j>=0; i--, j--)
        if(board[i][j]) return false;

    for(int i=row, j=col; i<N && j>=0; i++, j--)
        if(board[i][j]) return false;

    return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col, int N) {
    if(col >= N) return true;

    for(int i=0; i<N; i++) {
        if(isSafe(board, i, col, N)) {
            board[i][col] = 1;
            if(solveNQUtil(board, col+1, N)) return true;
            board[i][col] = 0;
        }
    }
    return false;
}

void printSolution(vector<vector<int>> board, int N) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
}

int main() {
    cout << "<<Lab-5: N-Queens Problem>>\n\nCompiled By Suman Bisunkhe\n\n";
    int N = 4;
    vector<vector<int>> board(N, vector<int>(N, 0));
    if(solveNQUtil(board, 0, N))
        printSolution(board, N);
    else
        cout << "Solution doesn't exist";
    cout<<endl;
    return 0;
}
