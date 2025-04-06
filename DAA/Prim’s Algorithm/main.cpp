#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF INT_MAX

void primMST(vector<pair<int,int>> adj[], int V) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> key(V, INF);
    vector<bool> inMST(V, false);

    pq.push({0, 0});
    key[0] = 0;

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;

        for(auto &[v, weight] : adj[u]) {
            if(!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    cout << "Edge \tWeight\n";
    for(int v=1; v<V; v++)
        cout << "0 - " << v << "\t" << key[v] << endl;
}

int main() {
    int V = 4;
    cout << "<<Lab-4: Prim's Algorithm>>\n\nCompiled By Suman Bisunkhe\n\n";
    vector<pair<int,int>> adj[V];
    adj[0].emplace_back(1, 10);
    adj[0].emplace_back(2, 6);
    adj[0].emplace_back(3, 5);
    adj[1].emplace_back(3, 15);
    adj[2].emplace_back(3, 4);
    primMST(adj, V);
    cout<<endl;
    return 0;
}
