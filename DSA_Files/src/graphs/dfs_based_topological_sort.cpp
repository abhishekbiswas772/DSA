#include <iostream>
#include <vector>
#include <stack>


using namespace std;


void getDFS(std::vector<int> adj[], int source, std::vector<bool> &visted, std::stack<int> &stk)
{
    visted[source] = true;
    for(int u : adj[source])
    {
        if(!visted[u])
        {
            getDFS(adj, u, visted, stk);
        }
    }
    stk.push(source);
}


std::vector<int> dfs_based_topological_sort(std::vector<int> adj[], int v)
{
    std::vector<bool> visted(v, false);
    std::stack<int> stk;
    for(int i = 0; i < v; i++)
    {
        if(!visted[i])
        {
            getDFS(adj, i, visted, stk);
        }
    }
    std::vector<int> result;
    while(!stk.empty())
    {
        result.push_back(stk.top());
        stk.pop();
    }
    return result;
}


int main() {
    int v = 6; 
    std::vector<int> adj[v];
    // add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);

    std::vector<int> result = dfs_based_topological_sort(adj, v);
    std::cout << "Topological sort: ";
    for (int node : result) {
        std::cout << node << " ";
    }
    std::cout << std::endl;
    return 0;
}