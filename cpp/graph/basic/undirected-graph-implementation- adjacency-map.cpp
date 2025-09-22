#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void displayGraphAdjacencyList(unordered_map<int, vector<int>> graph) {
  for (auto node : graph) {
    cout << "Node: " << node.first << " " << endl;
    for (auto nbr : node.second) {
      cout << nbr << " ";
    }
    cout << endl;
  }
}

int main() {
  vector<vector<int>> edgeList = {
      {1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 3},
  };
  unordered_map<int, vector<int>> graphAdjacencyList;
  for (int i = 0; i < edgeList.size(); i++) {
    int a = edgeList[i][0], b = edgeList[i][1];
    graphAdjacencyList[a].push_back(b);
    graphAdjacencyList[b].push_back(a);
  }

  displayGraphAdjacencyList(graphAdjacencyList);
}