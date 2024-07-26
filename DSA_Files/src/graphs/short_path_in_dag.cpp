#include <iostream>
#include <limits>
#include <vector>
#include <stack>

using namespace std;

void get_dfs_for_topological_search(
    std::vector<int> adj[],
    int source,
    std::vector<bool> &visited,
    std::stack<int> &stk
) {
    visited[source] = true;
    for (int it : adj[source]) {
        if (!visited[it]) {
            get_dfs_for_topological_search(adj, it, visited, stk);
        }
    }
    stk.push(source);
}

void get_shortest_path_of_dag(
    std::vector<int> adj[],
    int v,
    std::vector<int> weight[],
    int source
) {
    std::vector<bool> visited(v, false);
    std::stack<int> stk;
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            get_dfs_for_topological_search(adj, i, visited, stk);
        }
    }
    std::vector<int> distance(v, std::numeric_limits<int>::max());
    distance[source] = 0;
    while (!stk.empty()) {
        int u = stk.top();
        stk.pop();
        if (distance[u] != std::numeric_limits<int>::max()) {
            for (size_t i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i];
                if (distance[v] > distance[u] + weight[u][i]) {
                    distance[v] = distance[u] + weight[u][i];
                }
            }
        }
    }

    cout << "Vertex   Distance from Source" << endl;
    for (int i = 0; i < v; i++) {
        if (distance[i] == std::numeric_limits<int>::max()) {
            cout << i << " \t\t " << "INF" << endl;
        } else {
            cout << i << " \t\t " << distance[i] << endl;
        }
    }
}

int main() {
    int V = 6;
    vector<int> adj[V];
    vector<int> weight[V];
    adj[0].push_back(1); weight[0].push_back(5);
    adj[0].push_back(2); weight[0].push_back(3);
    adj[1].push_back(3); weight[1].push_back(6);
    adj[1].push_back(2); weight[1].push_back(2);
    adj[2].push_back(4); weight[2].push_back(4);
    adj[2].push_back(5); weight[2].push_back(2);
    adj[2].push_back(3); weight[2].push_back(7);
    adj[3].push_back(5); weight[3].push_back(1);
    adj[3].push_back(4); weight[3].push_back(1);
    adj[4].push_back(5); weight[4].push_back(3);
    int start = 0;
    get_shortest_path_of_dag(adj, V, weight, start);
    return 0;
}
