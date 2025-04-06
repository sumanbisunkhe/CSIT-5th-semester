#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << "Min: " << min << "\nMax: " << max<<endl;

}

int main() {
    cout << "<<Lab-2: Min-Max Algorithm>>\n\nCompiled By Suman Bisunkhe\n\n";
    int arr[] = {5, 7, 3, 4, 9, 12, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
