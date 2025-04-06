#include <iostream>
#include <algorithm>
using namespace std;

void lcs(string X, string Y) {
    int m = X.length(), n = Y.length();
    int L[m+1][n+1];

    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i == 0 || j == 0) L[i][j] = 0;
            else if(X[i-1] == Y[j-1]) L[i][j] = L[i-1][j-1] + 1;
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    int index = L[m][n];
    char lcs[index+1];
    lcs[index] = '\0';

    int i = m, j = n;
    while(i > 0 && j > 0) {
        if(X[i-1] == Y[j-1]) {
            lcs[--index] = X[i-1];
            i--; j--;
        }
        else if(L[i-1][j] > L[i][j-1]) i--;
        else j--;
    }

    cout << "LCS: " << lcs << endl;
}

int main() {
    cout << "<<Lab-4: Longest Common Subsequence>>\n\nCompiled By Suman Bisunkhe\n\n";
    string X = "AGGTAB", Y = "GXTXAYB";
    lcs(X, Y);
    cout<<endl;
    return 0;
}
