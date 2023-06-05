class Solution {
public:
    bool isBipartite(std::vector<std::vector<int>>& graph) {
        int len = graph.size();
        std::vector<int> colors(len, 0);

        for (int i = 0; i < len; i++) {
            if (colors[i] == 1 || colors[i] == -1) continue;
            std::queue<int> queue;
            queue.push(i);
            colors[i] = 1;

            while (!queue.empty()) {
                int cur = queue.front();
                queue.pop();
                for (int next : graph[cur]) {
                    if (colors[next] == 0) {
                        colors[next] = -colors[cur];
                        queue.push(next);
                    }

                    if (colors[next] == colors[cur]) return false;
                }
            }
        }

        return true;
    }
};
