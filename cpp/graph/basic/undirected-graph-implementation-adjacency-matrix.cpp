#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void displayGraph(vector<vector<int>> graph) {
  cout << "Adjacency List from Matrix:" << endl;
  for (int row = 0; row < graph.size(); row++) {
    for (int col = 0; col < graph[row].size(); col++) {
      // if (graph[row][col] == 1) { // print only existing edges
      //     cout << row << " " << col << endl;
      // }
      cout << graph[row][col] << " " ;
    }
    cout << endl;
  }
}

int main() {
  vector<vector<int>> edgeList = {
      {1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3},
  };

  int numNodes = 5; // ✅ assume nodes 1–4, so we need 4x4 adjacency matrix

  // ✅ Initialize adjacency matrix with 0s
  vector<vector<int>> graphAdjacencyMatrix(numNodes, vector<int>(numNodes, 0));
  for (auto edge : edgeList) {
    graphAdjacencyMatrix[edge[0]][edge[1]] = 1;
    graphAdjacencyMatrix[edge[1]][edge[0]] = 1;
  }

  displayGraph(graphAdjacencyMatrix);
}