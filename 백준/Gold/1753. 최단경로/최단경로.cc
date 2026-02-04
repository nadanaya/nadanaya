#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int V, E, K;
    cin >> V >> E >> K;

    vector<vector<pair<int,int>>> g(V+1);
    vector<int> dist(V+1, INF);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    dist[K] = 0;
    pq.push({0, K});

    while (!pq.empty()) {
        auto [cost, now] = pq.top();
        pq.pop();

        if (cost > dist[now]) continue;

        for (auto [next, w] : g[now]) {
            if (dist[next] > cost + w) {
                dist[next] = cost + w;
                pq.push({dist[next], next});
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << '\n';
    }
}
