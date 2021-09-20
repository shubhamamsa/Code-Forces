#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int flag = 0;
int nodeI;


int dfs(vector<int>graph[], int node, int visited[])    {
    visited[node] = 1;
    if(graph[node].size() == 0)
        return 1;
    int maxx = 0;
    for(int i=0;i<graph[node].size();i++)   {
        if(!visited[graph[node][i]]) {
            maxx = max(maxx, dfs(graph, graph[node][i], visited));
        }
        if(graph[node][i] == nodeI) {
            flag = 1;
            return -1;
        }
    }
    return maxx+1;
}

int dfss(vector<int>graph[], int node, int n)  {
    int visited[n+1] = {0};
    return dfs(graph, node, visited);
}

void subMain()	{
    int n;
    cin >> n;
    vector<int>graph[n+1];
    for(int i=1;i<=n;i++)   {
        int k, x;
        cin >> k;
        while(k--)  {
            cin >> x;
            graph[i].push_back(x);
        }
    }
    int maxx = 0;
    for(int i=1;i<=n;i++)   {
        flag = 0;
        nodeI = i;
        maxx = max(maxx, dfss(graph, i, n));
        if(flag == 1)   {
            cout << -1;
            return;
        }
    }
    cout << maxx;
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	{
        subMain();
        cout << "\n";
    }
    return 0;
}