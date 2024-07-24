#include <iostream>
#include <vector>

using namespace std;

bool getDFS(
    vector<int> adj[],
    int source,
    vector<bool> &visited,
    vector<bool> &recursionStack
) {
    recursionStack[source] = true;
    visited[source] = true;

    for (int v : adj[source]) {
        if (!visited[v] && getDFS(adj, v, visited, recursionStack)) {
            return true;
        } else if (recursionStack[v]) {
            return true;
        }
    }

    recursionStack[source] = false;
    return false;
}

bool getDetectCycle(
    vector<int> adj[],
    int v
) {
    vector<bool> visited(v, false);
    vector<bool> recursionStack(v, false);

    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            if (getDFS(adj, i, visited, recursionStack)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int V = 4;
    vector<int> adj[V];

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1); 
    if (getDetectCycle(adj, V)) {
        cout << "Graph contains a cycle" << endl;
    } else {
        cout << "Graph does not contain a cycle" << endl;
    }
    return 0;
}
