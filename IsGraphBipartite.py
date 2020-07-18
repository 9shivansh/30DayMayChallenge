class Solution:
    def isBipartite(self, graph):
        colors = {}
        def dfs(u, color):
            if u in colors:
                return colors[u] == color
            colors[u] = color
            return all(dfs(v, 1-color) for v in graph[u])

        return all(dfs(u, 0) for u in range(len(graph)) if u not in colors)    