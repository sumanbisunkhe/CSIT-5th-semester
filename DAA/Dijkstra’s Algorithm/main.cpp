#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF INT_MAX

void dijkstra(vector<pair<int,int>> adj[], int V, int src) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INF);
    pq.push({0, src});
    dist[src] = 0;

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for(auto &[v, weight] : adj[u]) {
            if(dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for(int i=0; i<V; i++)
        cout << i << "\t" << dist[i] << endl;
}

int main() {
    int V = 5;
    cout << "<<Lab-4: Dijkstra's Algorithm>>\n\nCompiled By Suman Bisunkhe\n\n";
    vector<pair<int,int>> adj[V];
    adj[0].emplace_back(1, 2);
    adj[0].emplace_back(3, 1);
    adj[1].emplace_back(2, 3);
    adj[1].emplace_back(4, 5);
    adj[3].emplace_back(2, 1);
    adj[3].emplace_back(4, 2);
    dijkstra(adj, V, 0);
    cout<<endl;
    return 0;
}
