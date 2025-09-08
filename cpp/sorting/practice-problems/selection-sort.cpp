#include <iostream>
#include <utility>
#include <vector>
using namespace std;


// Find the min element in the array and swap with starting index onwards
vector<int> SelectionSortMin(vector<int> arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    int min = i; //selecting every element from the start for next iteration
    for (int j = i + 1; j < n ; j++) {
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

// Find the max element in the array and swap with last index onwards
vector<int> SelectionSortMax(vector<int> arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    int last = n - 1 - i;
    int maxIndex = 0; //Always selection the index = 0 as max, because we are sorting arr from back.
    for (int j = 0 ; j <= last;j++){
      if(arr[j] > arr[maxIndex] )
      {
        maxIndex = j;
      }
    }
    // swap(arr[last], arr[maxIndex]);
    int temp = arr[last];
    arr[last] = arr[maxIndex];
    arr[maxIndex] = temp;
  }
  return arr;
}

int main() {
  vector<int> inputArr = {9,8,7,6,5,4,3,2,1};
  vector<int> sortedArr = SelectionSortMin(inputArr);
  // vector<int> sortedArr = SelectionSortMax(inputArr);
  for (auto it : sortedArr) {
    cout << it << ' ';
  }
  return 0;
}