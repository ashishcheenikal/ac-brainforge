// 1.Two Sum - https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> arr, int target) {

  map<int, int> mpp;
  for (int i = 0; i < arr.size(); i++) {
    int current_value = arr[i];
    int balance = target - arr[i];
    if (mpp.find(balance) != mpp.end()) {
      return {mpp[balance], i};
    } else {
      mpp[current_value] = i;
    }
  }
  return {};
}

int main() {
  vector<int> input_arr = {2, 3, 4, 5, 6, 8};
  int target = 6;
  vector<int> arr_index = TwoSum(input_arr, target);
  cout << "Indices of value result of target sum: " << endl;
  for (int num : arr_index) {
    cout << num << " " << endl;
  }
}

// Two sum problem, map data structure is used. There's alternative method in
// which the two pointer can be used over a sorted array.
// 1. Sort and array
// 2. Check the left and right pointer (Initially it will be the first and last
// element).
// 3. If the sum of 2 pointer is less than target then the left pointer needs to
// be incremented (because the value is in ascending order, of left pointer
// increment will leads to the increment in the sum and get closer to the
// target).
// 4. If the sum of 2 pointer is greater than target then right pointer needs to
// be decremented (by decrementing the largest of array will make the sum closer
// to target)