#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> add(vector<vector<int>> A, vector<vector<int>> B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

vector<vector<int>> subtract(vector<vector<int>> A, vector<vector<int>> B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

vector<vector<int>> strassen(vector<vector<int>> A, vector<vector<int>> B) {
    int n = A.size();
    if(n == 1) {
        return {{A[0][0] * B[0][0]}};
    }

    int half = n/2;
    vector<vector<int>> a(half, vector<int>(half)), b(half, vector<int>(half)),
                      c(half, vector<int>(half)), d(half, vector<int>(half)),
                      e(half, vector<int>(half)), f(half, vector<int>(half)),
                      g(half, vector<int>(half)), h(half, vector<int>(half));

    for(int i=0; i<half; i++) {
        for(int j=0; j<half; j++) {
            a[i][j] = A[i][j];
            b[i][j] = A[i][j+half];
            c[i][j] = A[i+half][j];
            d[i][j] = A[i+half][j+half];

            e[i][j] = B[i][j];
            f[i][j] = B[i][j+half];
            g[i][j] = B[i+half][j];
            h[i][j] = B[i+half][j+half];
        }
    }

    auto p1 = strassen(a, subtract(f, h));
    auto p2 = strassen(add(a, b), h);
    auto p3 = strassen(add(c, d), e);
    auto p4 = strassen(d, subtract(g, e));
    auto p5 = strassen(add(a, d), add(e, h));
    auto p6 = strassen(subtract(b, d), add(g, h));
    auto p7 = strassen(subtract(a, c), add(e, f));

    auto c11 = add(subtract(add(p5, p4), p2), p6);
    auto c12 = add(p1, p2);
    auto c21 = add(p3, p4);
    auto c22 = subtract(subtract(add(p1, p5), p3), p7);

    vector<vector<int>> C(n, vector<int>(n));
    for(int i=0; i<half; i++) {
        for(int j=0; j<half; j++) {
            C[i][j] = c11[i][j];
            C[i][j+half] = c12[i][j];
            C[i+half][j] = c21[i][j];
            C[i+half][j+half] = c22[i][j];
        }
    }
    return C;
}

int main() {
    vector<vector<int>> A = {{1,2}, {3,4}};
    vector<vector<int>> B = {{5,6}, {7,8}};
    auto C = strassen(A, B);
    cout << "<<Lab-2: Strassen's Matrix Multiplication>>\n\nCompiled By Suman Bisunkhe\n\n";
    cout << "Result matrix:\n";
    for(auto row : C) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}
