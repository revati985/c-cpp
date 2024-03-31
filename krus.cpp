#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int src, dest, weight;
};

class Graph {
public:
    int V, E;
    vector<Edge> edges;

    Graph(int V, int E) {
        this->V = V;
        this->E = E;
    }

    void addEdge(int src, int dest, int weight) {
        Edge edge;
        edge.src = src;
        edge.dest = dest;
        edge.weight = weight;
        edges.push_back(edge);
    }

    int find(vector<int> parent, int i) {
        if (parent[i] == -1)
            return i;
        return find(parent, parent[i]);
    }

    void Union(vector<int> &parent, int x, int y) {
        parent[x] = y;
    }

    void KruskalMST() {
        vector<Edge> result(V);
        int e = 0;
        int i = 0;
        sort(edges.begin(), edges.end(), [](Edge const &a, Edge const &b) {
            return a.weight < b.weight;
        });

        vector<int> parent(V, -1);

        while (e < V - 1 && i < E) {
            Edge next_edge = edges[i++];
            int x = find(parent, next_edge.src);
            int y = find(parent, next_edge.dest);

            if (x != y) {
                result[e++] = next_edge;
                Union(parent, x, y);
            }
        }

        cout << "Edges in the constructed MST:" << endl;

        int minimumCost = 0;
        for (i = 0; i < V - 1; ++i) {
            cout << result[i].src << " -- " << result[i].dest << " == " << result[i].weight << endl;
            minimumCost += result[i].weight;
        }

        cout << "Minimum Cost Spanning Tree: " << minimumCost << endl;
    }
};

int main() {
    int V = 4; // Number of vertices
    int E = 5; // Number of edges

    Graph graph(V, E);

    // Add edges
    graph.addEdge(0, 1, 14);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 2, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    // Find Minimum Spanning Tree
    graph.KruskalMST();

    return 0;
}
