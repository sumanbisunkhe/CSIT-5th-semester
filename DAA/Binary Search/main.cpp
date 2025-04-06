#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    cout << "<<Lab-1: Binary Search>>\n\nCompiled By Suman Bisunkhe\n\n";
    int arr[] = {10, 14, 19, 26, 31, 42, 44};
    int x = 31;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, x);

    if(result == -1) cout << "Element not found";
    else cout << "Element found at index " << result<<endl;
    return 0;
}
