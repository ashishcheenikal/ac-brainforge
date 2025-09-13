#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> CyclicSort(vector<int> arr) {
  int index = 0;
  int n = arr.size();
  while (index < n) {
    int correctIndex = arr[index] - 1;
    if (arr[index] != arr[correctIndex]) {
      swap(arr[index], arr[correctIndex]);
      // int temp = arr[correctIndex];
      // arr[correctIndex] = arr[index];
      // arr[index] = temp;
    } else {
      index++;
    }
  }
  return arr;
}

int main() {
  vector<int> sortedArr = CyclicSort({9, 8, 7, 6, 5, 4, 3, 2, 1});
  for (auto it : sortedArr) {
    cout << it << "  ";
  }
}