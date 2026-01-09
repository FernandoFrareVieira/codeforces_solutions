#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3*10005;

vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int u) {
    visited[u] = true;

    for(int v : adj[u]) {
        if(!visited[v]) dfs(v);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n >> t;

    for(int i = 1; i <= n-1; i++) {
        int a; cin >> a;
        adj[i].push_back(i+a);
    }

    dfs(1);

    if(visited[t]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}