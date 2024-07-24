#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

void getDistanceFromSource(
    std::vector<int> adj[],
    int source,
    std::vector<bool> &visited,
    std::vector<int> &distance
) {
    distance[source] = 0;
    visited[source] = true;
    std::queue<int> q;
    q.push(source);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                distance[v] = distance[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void getDistance(
    std::vector<int> adj[],
    int v
) {
    std::vector<bool> visited(v, false);
    std::vector<int> distance(v, std::numeric_limits<int>::max());
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            getDistanceFromSource(
                adj,
                i,
                visited,
                distance
            );
        }
    }
    for (int i = 0; i < distance.size(); i++) {
        std::cout << distance[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int v = 5; 
    std::vector<int> adj[v];
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);
    getDistance(adj, v);
    return 0;
}
