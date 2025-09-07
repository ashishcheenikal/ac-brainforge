#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int numberOfTimesNamePrinted = 0;
void PrintName(string name) {
  if (numberOfTimesNamePrinted < 5) {
    cout << name << ' ' << endl;
    numberOfTimesNamePrinted++;
    PrintName(name);
  }
  return;
}

void Print1ToN(int i, int n) {
  if (i > n)
    return;
  cout << i << ' ' << endl;
  i++;
  Print1ToN(i, n);
}
void PrintNTo1(int n) {
  if (n < 1)
    return;
  cout << n << ' ' << endl;
  n--;
  PrintNTo1(n);
}

void SumofNnumbers(int n, int sum = 0) {
  if (n < 1)
    return;
  sum += n;
  cout << sum << ' ' << endl;
  SumofNnumbers(n - 1, sum);
}

void FactorialOfNnumbers(int n, int factorial = 1) {
  if (n < 1) {
    cout << factorial << ' ' << endl;
    return;
  }
  factorial *= n;
  FactorialOfNnumbers(n - 1, factorial);
}

int FactorialOfNnumbersViaRecursiveFun(int n) {
  if (n == 1) {
    return 1;
  }
  return n * FactorialOfNnumbersViaRecursiveFun(n - 1);
}

void ReverseArray(vector<int> arr) {
  int i = 0;
  int j = arr.size() - 1;
  while (i < j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
  for (auto element : arr) {
    std::cout << element << " ";
  }
}
void ReverseArrayViaRecursion(vector<int> arr) {
  int i = 0;
  int j = arr.size() - 1;
  while (i < j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
  for (auto element : arr) {
    std::cout << element << " ";
  }
}

int ReverseNumber(int n, int digit = 0){
  if(n%10 == n) {
    return digit * 10 + (n % 10);
  }
  digit = digit * 10 + (n % 10);
  n = n / 10;
 return ReverseNumber(n,digit);
}

bool Palindrome(int n){
  return n == ReverseNumber(n);
}

int main() {
  // PrintName("Ashish");
  // Print1ToN(1,10);
  // PrintNTo1(10);
  // SumofNnumbers(10);
  // FactorialOfNnumbers(5);
  
  // int factorial = FactorialOfNnumbersViaRecursiveFun(3);
  // cout << factorial << endl;

  // vector<int> inputArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // ReverseArray(inputArr);
  // ReverseArrayViaRecursion(inputArr);
  // int reverseNumber = ReverseNumber(12345);
  // cout<< reverseNumber ;
  bool palindrome = Palindrome(123321);
  cout<< palindrome ;
}