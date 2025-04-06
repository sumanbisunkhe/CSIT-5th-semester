#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {25, 57, 48, 37, 12, 92, 86, 33};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "<<Lab-1: Insertion Sort>>\n\nCompiled By Suman Bisunkhe\n\n";
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;
    return 0;
}
