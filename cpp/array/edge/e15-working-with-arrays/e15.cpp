#include <iostream>
using namespace std;
void swap(int a, int b, int arr[]) {
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}
int main() {
  int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  //   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = size(arr);
  cout << n << " test " << endl;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n / 2; i++) {
    cout << arr[i] << " - " << arr[n - i - 1] << endl;
    swap(i, (n - i - 1), arr);
    // int temp = arr[i];
    // arr[i] = arr[n - i - 1];
    // arr[n - i - 1] = temp;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; 
  }
  return 0;
}