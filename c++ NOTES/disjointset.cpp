#include <bits/stdc++.h>
using namespace std;

int parent[10000];
int rank[10000];

void makeSet()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}
int findParent(int node)
{
    if (node == parent[node])
    {
        return node;
    }
    return parent[node] = findParent(parent[node]);
}
void union(int u, int v)
{
    u = findParent(u);
    v = findParent(v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    makeSet();
    int m;
    cin >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        union(u, v);
    }
    if (findParent(2) != findParent(3))
    {
        cout << "Different Component";
    }
    else
    {
        cout << "Same component";
    }
}