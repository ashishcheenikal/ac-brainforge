#include <iostream>
#include <vector>
using namespace std;


vector<int> BubbleSort(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      bool swapped = false;
      for (int j = 1; j < n - i; j++) {
        if (arr[j - 1] > arr[j]) {
          swap(arr[j], arr[j - 1]);
         swapped = true;
        }
      }
      cout<<swapped << "->" << endl;
      if(!swapped){
        break;
      }
    }
    return arr;
}

int main(){
    // vector<int> unsortedArr ={2,3,8,7,4,5,7,6};
    // vector<int> unsortedArr ={9,8,7,6,5,4,3,2,1};
    vector<int> unsortedArr ={1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> sortedArr = BubbleSort(unsortedArr);
    for(auto it:sortedArr){
      cout << it << ", ";
    }
}