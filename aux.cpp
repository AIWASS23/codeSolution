#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int> > g;
vector<int>vi, fa, comp, descTo;

void bfs() {
    queue<int>q;
    vector<int>dist(vi.size(), 0);
    q.push(0);
    fa.push_back(0);
    descTo.push_back(0);
    dist[0] = 0;

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        if(!vi[v]) {
            fa.push_back(0);
            descTo.push_back(0);
            vi[v] = 1;
        }

        for (int i = 0; i < g[v].size(); i++) {
            if(!vi[g[v][i]]) {
                dist[g[v][i]] = dist[v] + 1;
                descTo[dist[g[v][i]]]++;
                fa[dist[g[v][i]]] += comp[g[v][i]] ? 1 : 0;
                q.push(g[v][i]);
            }
        }
    }
}

int main()
{
    int n, m, v;

    cin >> n >> m;

    g.assign(n + 1, vector<int>());
    vi.assign(n + 1, 0);

    comp.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> v;
        g[v].push_back(i);
    }

    for (int i = 0; i < m; i++) {
        cin >> v;
        comp[v] = 1; 
    }

    bfs();

    int space = 0;
    for (int i = 0; i < (int)descTo.size(); i++) {
        if (descTo[i] != 0) {
            if (space != 0) {
                cout << " ";
            }
            space = 1;
            cout.precision(2);
            cout.setf(ios::fixed);
            cout << ((float)fa[i] / descTo[i]) * 100;
        }
    }
    cout << endl;
    return 0;
}