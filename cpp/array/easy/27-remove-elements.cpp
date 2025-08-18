//27. Remove Element
//https://leetcode.com/problems/remove-element/
// Explanation video - https://youtu.be/Pcd1ii9P9ZI?si=2NsP2ODNRbPEURGL

#include <iostream>
#include <vector>
using namespace std;

vector<int> RemoveElement(vector<int> arr, int val) {
  int j = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != val) {
      arr[j] = arr[i];
      j++;
    }
  }
  return arr;
}

int main() {

  vector<int> sample_input_arr = {0, 10, 2, 3, 4, 5, 6, 2, 4, 2, 5, 2, 5, 2};
  int val = 2;
  vector<int> result_arr = RemoveElement(sample_input_arr, val);

  for (int it : result_arr) {
    cout << it;
  }
}