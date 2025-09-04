#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> SelectionSort(vector<int> arr) {
  int n = arr.size();
  for (int i = 0; i <= n - 2; i++) {
    int min = i;
    for (int j = i + 1; j < n - 1; j++) {
      if (arr[j] < arr[min])
        min = j;
    }
    swap(arr[i], arr[min]);
    // int temp = arr[i];
    // arr[i] = arr[min];
    // arr[min] = temp;
  }
  return arr;
}

int main() {
  vector<int> inputArr = {23, 4, 54, 6, 765, 3, 7, 7, 3453, 6, 1, 9999};
  vector<int> sortedArr = SelectionSort(inputArr);
  for (auto it : sortedArr) {
    cout << it << ' ';
  }
  return 0;
}