#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_idx = i;
        for (int j=i+1; j<n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int arr[] = {7, 4, 10, 8, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "<<Lab-2: Selection Sort>>\n\nCompiled By Suman Bisunkhe\n\n";
    cout << "Sorted array: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    return 0;
}
