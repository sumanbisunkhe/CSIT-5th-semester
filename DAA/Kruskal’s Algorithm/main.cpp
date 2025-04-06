#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest, weight;
};

struct DisjointSet {
    int *parent, *rank;
    DisjointSet(int n) {
        parent = new int[n];
        rank = new int[n];
        for(int i=0; i<n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int find(int u) {
        if(parent[u] != u) parent[u] = find(parent[u]);
        return parent[u];
    }

    void Union(int x, int y) {
        int xroot = find(x);
        int yroot = find(y);

        if(rank[xroot] < rank[yroot]) parent[xroot] = yroot;
        else if(rank[xroot] > rank[yroot]) parent[yroot] = xroot;
        else {
            parent[yroot] = xroot;
            rank[xroot]++;
        }
    }
};

bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}

void kruskalMST(vector<Edge>& edges, int V) {
    sort(edges.begin(), edges.end(), compareEdges);
    DisjointSet ds(V);
    vector<Edge> result;

    for(Edge e : edges) {
        int x = ds.find(e.src);
        int y = ds.find(e.dest);

        if(x != y) {
            result.push_back(e);
            ds.Union(x, y);
        }
    }

    cout << "Edges in MST:\n";
    for(Edge e : result)
        cout << e.src << " - " << e.dest << " : " << e.weight << endl;
}

int main() {
    int V = 4;
    cout << "<<Lab-4: Kruskal's Algorithm>>\n\nCompiled By Suman Bisunkhe\n\n";
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}
    };
    kruskalMST(edges, V);
    cout<<endl;
    return 0;
}
