// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:

// Input: nums = [2,2,1]

// Output: 1

// Example 2:

// Input: nums = [4,1,2,1,2]

// Output: 4

// Example 3:

// Input: nums = [1]

// Output: 1
// =================================================================================
#include <iostream>
#include <vector>
using namespace std;

int SingleNumber(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {

  vector<int> num = {4, 2, 4, 1, 2, 1, 9};

  int single_number = SingleNumber(num);

  cout << "Single number in the array is: " << single_number << endl;
}