#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};

bool cmp(Item a, Item b) {
    return (double)a.value/a.weight > (double)b.value/b.weight;
}

void fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);
    double totalValue = 0.0;

    for(Item &item : items) {
        if(W >= item.weight) {
            totalValue += item.value;
            W -= item.weight;
        } else {
            totalValue += item.value * ((double)W / item.weight);
            break;
        }
    }

    cout << "Maximum value: " << totalValue << endl;
}

int main() {
    cout << "<<Lab-5: Fractional Knapsack>>\n\nCompiled By Suman Bisunkhe\n\n";
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    int W = 50;
    fractionalKnapsack(W, items);
    cout<<endl;
    return 0;
}
