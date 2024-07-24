#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs_graph(std::vector<int> arr[], std::vector<bool> visited, int source, std::vector<int> res){
    visited[source] = true;
    std::queue<int> q;
    q.push(source);
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        res.push_back(u);
        for(auto v : arr[u]){
            if (visited[v] == false){
                q.push(v);
            }
        }
    }
}

std::vector<int> bfsOfGraph(int V, std::vector<int> adj[]) {
    std::vector<bool> visited(V + 1);
    std::vector<int> result;
    for(int i = 0; i < V; i++){
        visited[i] = false;
    }
    for(int i = 0; i < V; i++){
        if(visited[i] == false){
            bfs_graph(adj, visited, i, result);
        }
    }
    return result;
}


int main() {
    int V = 5;
    std::vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    
    std::vector<int> result = bfsOfGraph(V, adj);
    for (int v : result) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}