#include <iostream>
#include <vector>
using namespace std;

void vertexCover(vector<pair<int,int>> edges, int V) {
    vector<bool> visited(V, false);
    for(auto &[u, v] : edges) {
        if(!visited[u] && !visited[v]) {
            visited[u] = true;
            visited[v] = true;
        }
    }

    cout << "Vertex Cover: ";
    for(int i=0; i<V; i++)
        if(visited[i]) cout << i << " ";
}

int main() {
    cout << "<<Lab-5: Vertex Cover Problem>>\n\nCompiled By Suman Bisunkhe\n\n";
    vector<pair<int,int>> edges = {{0,1}, {0,2}, {1,3}, {3,4}, {4,5}, {2,5}};
    vertexCover(edges, 6);
    cout<<endl;
    return 0;
}
