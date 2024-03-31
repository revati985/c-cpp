#include <iostream>
#include<bool.h>
#include<limits.h>
using namespace std;             //using adjacency matrix

// Number of vertices in the graph
#define n 5

int minKey(int key[], bool mst[])
{
	int min = INT_MAX, min_index;    //INT_MAX= INFINITY

	for (int i = 0; i< n; i++)
		if (mst[i] == false && key[i] < min)
			min = key[i], min_index = i;

	return min_index;
}

// A utility function to print the constructed MST stored in parent[]
void printMST(int parent[], int graph[V][V])
{
	cout << "Edge \tWeight\n";
	for (int i = 1; i < n; i++)
		cout << parent[i] << " - " << i << " \t"
			<< graph[i][parent[i]] << " \n";
}

void primMST(int graph[n][n])
{
	int parent[n];
	int key[n];
	bool mst[n];

	for (int i = 0; i < n; i++)
		key[i] = INT_MAX, mst[i] = false;

	key[0] = 0;
	parent[0] = -1;

	for (int count = 0; count < n - 1; count++) {
		
		// Pick the minimum key vertex from the
		// set of vertices not yet included in MST
		int u = minKey(key, mst);

		// Add the picked vertex to the MST Set
		mst[u] = true;

		// Update key value and parent index of
		// the adjacent vertices of the picked vertex.
		// Consider only those vertices which are not
		// yet included in MST
		for (int v = 0; v < V; v++)

			// graph[u][v] is non zero only for adjacent
			// vertices of m mstSet[v] is false for vertices
			// not yet included in MST Update the key only
			// if graph[u][v] is smaller than key[v]
			if (graph[u][v] && mstSet[v] == false
				&& graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
	}
	printMST(parent, graph);
}

int main()
{
	int graph[V][V] = { { 0, 2, 0, 6, 0 },
						{ 2, 0, 3, 8, 5 },
						{ 0, 3, 0, 0, 7 },
						{ 6, 8, 0, 0, 9 },
						{ 0, 5, 7, 9, 0 } };

	primMST(graph);

	return 0;
}