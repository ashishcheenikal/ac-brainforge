// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//  Explanation video - https://youtu.be/DEJAZBq0FDA?si=5lZAyeRT4wprkk2U

#include <iostream>
#include <vector>
using namespace std;
int RemoveDuplicateElementsFromSortedArray(vector<int> arr) {
  int left_pointer =
      1; // since first element will alway kept as unique (already sorted and
         // next occurrence can be considered as duplicate)
  for (int right_pointer = 1; right_pointer < arr.size(); right_pointer++) {
    if (arr[right_pointer] !=
        arr[right_pointer - 1]) // if the previous element is not the same as of
                                // current element then its unique (generally by
                                // this condition we skip the duplicate)
    {
      arr[left_pointer] = arr[right_pointer];
      left_pointer++;
    }
  }
  return left_pointer;
}

int main() {
  vector<int> sample_input_array = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  // vector<int> sample_input_array = {1,1,2};

  int no_of_unique_elements =
      RemoveDuplicateElementsFromSortedArray(sample_input_array);
  cout << "No of Unique elements after the removal of duplicates from a sorted "
          "array: "
       << no_of_unique_elements << endl;
}
