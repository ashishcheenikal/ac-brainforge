#include <iostream>
#include <vector>
using namespace std;

vector<int> InsertionSort(vector<int> arr){
    int n = arr.size();
    for(int i =0;i < n-1; i++){
        for(int j = i+1;j> 0;j--){
          if (arr[j] < arr[j - 1]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
          } else {
            cout<< "-<"<<endl;
            break;
          }
        }
    }
    return arr;
}

int main(){
    // vector<int> sortedArr = InsertionSort({9,8,7,6,5,4,3,2,1});
    // vector<int> sortedArr = InsertionSort({5,4,3,2,1,9,8,7,6});
    vector<int> sortedArr = InsertionSort({1,2,3,4,5,6,7});
    for(auto it:sortedArr){
        cout << it << "  ";
    }
}