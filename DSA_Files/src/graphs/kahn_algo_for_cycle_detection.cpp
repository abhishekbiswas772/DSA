#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool find_cycle_using_kahn_algo(
    std::vector<int> adj[],
    int v
){
    std::vector<int> indegree(v, 0);
    for(int i = 0; i < v; i++)
    {
        for(auto it : adj[i])
        {
            if(it >= 0 && it < v) {
                indegree[it]++;
            } else {
                std::cerr << "Invalid edge: " << i << " -> " << it << std::endl;
                return true; 
            }
        }
    }
    std::queue<int> q;
    for(int i = 0; i < v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    int count = 0;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;
        for(int it : adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
    return count != v;
}

int main(){
    int v = 5;
    std::vector<int> adj[v];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);

    if(find_cycle_using_kahn_algo(adj, v)) {
        std::cout << "Cycle detected" << std::endl;
    } else {
        std::cout << "No cycle detected" << std::endl;
    }
    return 0;
}