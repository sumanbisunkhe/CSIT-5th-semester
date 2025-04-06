#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    cout << "\n<<Lab-1: Euclid's GCD Algorithm>>\n\nCompiled By Suman Bisunkhe\n\n";
    cout << "GCD of " << a << " & " << b << ": " << gcd(a, b) << endl;
    return 0;
}
