#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool khan_algo_bfs_for_topological_sorting(
    std::vector<int> adj[],
    int v,
    std::vector<int>& result)
{
    std::vector<int> indegree(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }
    std::queue<int> q;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int node  = q.front();
        q.pop();
        result.push_back(node);
        for(auto it  : adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
    return result.size() == v;
}

int main()
{
    int v = 5;
    std::vector<int> adj[v];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[2].push_back(4);

    std::vector<int> result;
    if(khan_algo_bfs_for_topological_sorting(adj, v, result)) {
        std::cout << "Topological sorting: ";
        for(auto it : result) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Cycle detected. Topological sorting not possible." << std::endl;
    }
    return 0;
}