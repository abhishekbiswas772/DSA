#include <iostream>
#include <vector>

using namespace std;

void getDFS(vector<int> adj[], int source, vector<bool> &visited, vector<int> &result) {
        visited[source] = true;
        result.push_back(source);
        for (auto u : adj[source]) {
            if (!visited[u]) {
                getDFS(adj, u, visited, result);
            }
        }
    }
    
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> result;
    vector<bool> visited(V, false);
    getDFS(adj, 0, visited, result);
    return result;
}



int main(){

}
