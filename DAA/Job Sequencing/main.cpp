#include <iostream>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline, profit;
};

bool comparison(Job a, Job b) {
    return a.profit > b.profit;
}

void jobSequencing(Job arr[], int n) {
    sort(arr, arr+n, comparison);
    int result[n];
    bool slot[n] = {false};

    for(int i=0; i<n; i++) {
        for(int j=min(n, arr[i].deadline)-1; j>=0; j--) {
            if(!slot[j]) {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    cout << "Job Sequence: ";
    for(int i=0; i<n; i++)
        if(slot[i]) cout << arr[result[i]].id << " ";
}

int main() {
    cout << "<<Lab-5: Job Sequencing>>\n\nCompiled By Suman Bisunkhe\n\n";
    Job arr[] = {{'a',2,100}, {'b',1,19}, {'c',2,27}, {'d',1,25}, {'e',3,15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    jobSequencing(arr, n);
    cout<<endl;
    return 0;
}
