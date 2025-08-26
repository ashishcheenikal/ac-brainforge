#include <iostream>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
void SquarePattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << '*' << ' ';
    }
    cout << endl;
  }
}


// *  
// * *  
// * * *  
// * * * *  
// * * * * * 
void RightAngleTrianglePattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << '*' << ' ';
    }
    cout << endl;
  }
}


// 1
// 12
// 123
// 1234
// 12345
void RightAngleTriangleNumberPattern(int n){
    for (int i =1; i <= n; i++){
        for (int j = 1; j<= i; j++){
            cout<< j;
        }
        cout << endl;
    }
}

// 1
// 22
// 333
// 4444
// 55555
void RightAngleTriangleNumberPattern1(int n){
    for (int i =1; i <= n; i++){
        for (int j = 1; j<= i; j++){
            cout<< i;
        }
        cout << endl;
    }
} 

// *****
// ****
// ***
// **
// *
void InvertedRightAngleTrianglePattern(int n){
    for (int i =n; i > 0; i--){
        for (int j = i; j > 0; j--){
            cout<< '*';
        }
        cout << endl;
      }
};


// 12345
// 1234
// 123
// 12
// 1
void InvertedRightAngleTriangleNumberPattern(int n){
    for (int i =n; i > 0; i--){
        for (int j = 1; j <= i; j++){
            cout<< j;
        }
        cout << endl;
      }
};



int main() {
    //  SquarePattern(5);
    //  RightAngleTrianglePattern(5);
    // RightAngleTriangleNumberPattern(5);
    // RightAngleTriangleNumberPattern1(5);
    // InvertedRightAngleTrianglePattern(5);
    InvertedRightAngleTriangleNumberPattern(5);
  }