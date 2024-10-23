class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int dt) {
        vector<vector<int>> graph(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < n; ++i) {
            graph[i][i] = 0; 
        }

        for (auto& e : edges) {
            graph[e[0]][e[1]] = min(graph[e[0]][e[1]], e[2]);
            graph[e[1]][e[0]] = min(graph[e[1]][e[0]], e[2]); 
        }

        // Floyd-Warshall 
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (graph[i][k] == INT_MAX || graph[k][j] == INT_MAX) continue;
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }

        int m = INT_MAX;
        int res = -1; 
        for (int i = 0; i < n; i++) {
            int cm = 0;
            for (int j = 0; j < n; j++) {
                if (graph[i][j] <= dt) {
                    cm++;
                }
            }
            if (cm < m || (cm == m && i > res)) {
                m = cm;
                res = i;
            }
        }
        return res;
    }
};
