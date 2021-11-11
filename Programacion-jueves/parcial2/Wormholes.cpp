#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    int n, m;
    cin >> tc;
    while (cin >> n >> m) {

        map<int, vector<pair<int, int>>> conn;
        vector<int> distancia;
        vector<int> alcanzable;
        queue<int> q;
        map<int, bool> elegir;

        int from, to, dist;
        for (int i = 0; i < m; i++) {
            cin >> from >> to >> dist;
            conn[from].push_back({to, dist});
        }

        q.push(0);
        while (q.size()) {
            auto top = q.front();
            q.pop();

            alcanzable.push_back(top);
            
            for (auto i : conn[top]) {
                if (!elegir[i.first]) {
                    elegir[i.first] = true;
                    q.push(i.first);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            distancia.push_back(1000000000);
        }

        distancia[0] = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                for (auto k : conn[j]) {
                    if (distancia[k.first] > distancia[j] + k.second) {
                        distancia[k.first] = distancia[j] + k.second;
                    }
                }
            }
        }

        bool imagen = false;
        for (int j = 0; j < n; j++) {
            for (auto k : conn[j]) {
                if (distancia[k.first] > distancia[j] + k.second) {
                    distancia[k.first] = distancia[j] + k.second;
                    if (find(alcanzable.begin(), alcanzable.end(), k.first) != alcanzable.end()) {
                        imagen = true;
                        break;
                    }
                }
            }
            if (imagen) {
                break;
            }
        }
        cout << (imagen ? "possible" : "not possible")<< endl;
    }
}
