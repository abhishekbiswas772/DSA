#include <iostream>
#include <vector>

using namespace std;

bool dfsCycleDetection(
    const vector<vector<int>> &adj,
    int source,
    vector<bool> &visited,
    int parent)
{
    visited[source] = true;
    for (int u : adj[source])
    {
        if (!visited[u])
        {
            if (dfsCycleDetection(adj, u, visited, source))
            {
                return true;
            }
        }
        else if (u != parent)
        {
            return true;
        }
    }
    return false;
}

bool isCycleInGraph(
    const vector<vector<int>> &adj,
    int v)
{
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            if (dfsCycleDetection(adj, i, visited, -1))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int v = 5;
    vector<vector<int>> adj(v);
    
    // Sample graph edges
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);
    adj[4].push_back(1); 
    adj[1].push_back(4);

    if (isCycleInGraph(adj, v))
    {
        cout << "Graph contains a cycle." << endl;
    }
    else
    {
        cout << "Graph does not contain a cycle." << endl;
    }

    return 0;
}
