#include <iostream>
using namespace std;

int** graph;
bool* visited;
int n, m;

void bfs(int start) {

}

void dfs(int start) {
	if(visited[start]){
		
	}
}

int main() {
	int v;
	cin >> n >> m >> v;

	graph = new int*[n + 1];
	visited = new bool[n + 1];

	for (int i = 0; i < n + 1; i++) {
		graph[n][i] = 0;
		visited[i] = false;
	}

	for (int i = 0; i < m; i++) {
		int t1, t2;
		cin >> t1 >> t2;
		graph[t1][t2] = 1;
	}

	dfs(v);
	bfs(v);

	return 0;
}