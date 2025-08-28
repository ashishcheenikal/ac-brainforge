// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
// PatternProblems

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
void RightAngleTriangleNumberPattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

// 1
// 22
// 333
// 4444
// 55555
void RightAngleTriangleNumberPattern1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

// *****
// ****
// ***
// **
// *
void InvertedRightAngleTrianglePattern(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << '*';
    }
    cout << endl;
  }
};

// 12345
// 1234
// 123
// 12
// 1
void InvertedRightAngleTriangleNumberPattern(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
};

// - - - - *                   // (2 * i +1)
// - - - * * *                 // (n - i)
// - - * * * * *
// - * * * * * * *
// * * * * * * * * *
void HalfDiamondPattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - i - 1); j++) {
      cout << ' ' << ' ';
    }
    for (int j = 1; j <= (2 * i + 1); j++) {
      cout << '*' << ' ';
    }
    cout << endl;
  }
}

// * * * * * * * * *
// - * * * * * * *
// - - * * * * *
// - - - * * *
// - - - - *
void InvertedHalfDiamondPattern(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = 1; j < (n - i + 1); j++) {
      cout << ' ' << ' ';
    }
    for (int j = 1; j <= (2 * i - 1); j++) {
      cout << '*' << ' ';
    }
    cout << endl;
  }
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void DiamondPattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < (n - i); j++) {
      cout << ' ' << ' ';
    }
    for (int j = 1; j <= (2 * i + 1); j++) {
      cout << '*' << ' ';
    }
    cout << endl;
  }
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < (n - i); j++) {
      cout << ' ' << ' ';
    }
    for (int j = 0; j < (2 * i - 1); j++) {
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
// * * * *
// * * *
// * *
// *
void VerticalHalfDiamondPattern(int n) {
  for (int i = 0; i < (2 * n); i++) {
    if (i < n) {
      for (int j = 0; j < i; j++) {
        cout << '*' << ' ';
      }
      cout << endl;
    } else {
      for (int j = 0; j < (2 * n - i); j++) {
        cout << '*' << ' ';
      }
      cout << endl;
    }
  }
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// KEY start = 1 - start (which will helps toggle between 1 and 0. to find the
// start use modulus op to find whether its odd or even)
void Pattern11(int n) {
  int start = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++) {
      cout << start << ' ';
      start = 1 - start;
    }
    cout << endl;
  }
}

// 1 - - - - - - - - 1
// 1 2 - - - - - - 2 1
// 1 2 3 - - - - 3 2 1
// 1 2 3 4 - - 4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
void Pattern12(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << ' ';
    }
    for (int j = 1; j < 2 * (n - i) + 1; j++) {
      cout << '-' << ' ';
    }
    for (int j = i; j >= 1; j--) {
      cout << j << ' ';
    }
    cout << endl;
  }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// KEY - Set counter initial value as 1, then increment it in each loop.
void Pattern13(int n) {
  int count = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << count << ' ';
      count++;
    }
    cout << endl;
  }
}

// A
// A B
// A B C
// A B C D
// A B C D E
// KEY - Take ASCII value then static_cast<char> static cast into char and
// increment the ASCII code by 1.
void Pattern14(int n) {
  for (int i = 0; i < n; i++) {
    char val = 'A';
    int asciiCode = int(val);
    for (int j = 0; j <= i; j++) {
      cout << static_cast<char>(asciiCode) << ' ';
      asciiCode++;
    }
    cout << endl;
  }
}

// A B C D E
// A B C D
// A B C
// A B
// A
void Pattern15(int n) {
  for (int i = n; i > 0; i--) {
    char val = 'A';
    int asciiCode = int(val);
    for (int j = 0; j < i; j++) {
      cout << static_cast<char>(asciiCode) << ' ';
      asciiCode++;
    }
    cout << endl;
  }
}

// A
// B B
// C C C
// D D D D
// E E E E E
void Pattern16(int n) {
  char val = 'A';
  int asciiCode = int(val);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << static_cast<char>(asciiCode) << ' ';
    }
    asciiCode++;
    cout << endl;
  }
}

// - - - - A
// - - - A B A
// - - A B C B A
// - A B C D C B A
// A B C D E D C B A
void Pattern17(int n) {
  for (int i = 0; i < n; i++) {
    int asciiCode = 'A';
    for (int j = 0; j < n - i - 1; j++) {
      cout << '-' << ' ';
    }
    for (int k = 0; k < (2 * i + 1); k++) {
      cout << static_cast<char>(asciiCode) << ' ';
      if (k < i) {
        asciiCode++;
      } else {
        asciiCode--;
      }
    }
    cout << endl;
  }
}

// E
// D E
// C D E
// B C D E
// A B C D E
// LOGIC---------------
// 64 65 66 67 68
// start = 64 + (n -1)
// 68 (s -0)(++)
// 67 68 (s-1 )(++)
// 66 67 68 (s-2 )(++)
// 65 66 67 68 (s-3 )(++)
// 64 65 66 67 68 (s-4 )(++)

void Pattern18(int n) {
  int startAsciiCode = 'A' + (n - 1);
  for (int i = 0; i < n; i++) {
    int printAsciiVal = (startAsciiCode - i);
    for (int j = 0; j <= i; j++) {
      cout << static_cast<char>(printAsciiVal) << ' ';
      printAsciiVal++;
    }
    cout << endl;
  }
}


// * * * * * * * * * * 
// * * * * - - * * * * 
// * * * - - - - * * * 
// * * - - - - - - * * 
// * - - - - - - - - * 
// * - - - - - - - - * 
// * * - - - - - - * * 
// * * * - - - - * * * 
// * * * * - - * * * * 
// * * * * * * * * * * 
// LOGIC --------------
// 8 8 8 8 8 8 8 8 8 8  => i = 0 | 8 = 5  - = 2 * 0 = 0
// 8 8 8 8 - - 8 8 8 8  => i = 1 | 8 = 4  - = 2 * 1 = 2
// 8 8 8 - - - - 8 8 8  => i = 2 | 8 = 3  - = 2 * 2 = 4
// 8 8 - - - - - - 8 8  => i = 3 | 8 = 2  - = 2 * 3 = 6
// 8 - - - - - - - - 8  => i = 4 | 8 = 1  - = 2 * 4 = 8
// 8 - - - - - - - - 8  => i = 5 | 8 = 1  - = 2 * 4 = 8 => 4 * 2 => (5 - (2 * (5-5) + 1) * 2)
// 8 8 - - - - - - 8 8  => i = 6 | 8 = 2  - = 2 * 3 = 6 => 3 * 2 => (6 - (2 * (6-5) + 1) * 2)
// 8 8 8 - - - - 8 8 8  => i = 7 | 8 = 3  - = 2 * 2 = 4 => 2 * 2 => (7 - (2 * (7-5) + 1) * 2)
// 8 8 8 8 - - 8 8 8 8  => i = 8 | 8 = 4  - = 2 * 1 = 2 => 1 * 2 => (8 - (2 * (8-5) + 1) * 2)
// 8 8 8 8 8 8 8 8 8 8  => i = 9 | 8 = 5  - = 2 * 0 = 0 => 0 * 2 => (9 - (2 * (9-5) + 1) * 2)
void Pattern19(int n) {
  for (int i = 0; i < (2 * n); i++) {
    if (i < n) { // i = (0 - 4)
      for (int j = 0; j < (n - i); j++) {
        cout << '*' << ' ';
      }
      for (int j = 0; j < (2 * i); j++) {
        cout << '-' << ' ';
      }
      for (int j = 0; j < (n - i); j++) {
        cout << '*' << ' ';
      }
    } else { // i = (5 - 9)
      for (int j = 0; j <= (i - n); j++) {
        cout << '*' << ' ';
      }
      for (int j = 0; j < ((i - (2 * (i -n) + 1)) * 2); j++) {
        cout << '-' << ' ';
      }
      for (int j = 0; j <= (i - n); j++) {
        cout << '*' << ' ';
      }
    }
    cout << endl;
  }
}

int main() {
  //  SquarePattern(5);
  //  RightAngleTrianglePattern(5);
  // RightAngleTriangleNumberPattern(5);
  // RightAngleTriangleNumberPattern1(5);
  // InvertedRightAngleTrianglePattern(5);
  // // InvertedRightAngleTriangleNumberPattern(5);
  // HalfDiamondPattern(5);
  // InvertedHalfDiamondPattern(5);
  // DiamondPattern(5);
  // VerticalHalfDiamondPattern(5);
  // Pattern11(5);
  // Pattern12(5);
  // Pattern13(5);
  // Pattern14(5);
  // Pattern15(5);
  // Pattern16(5);
  // Pattern17(5);
  // Pattern18(5);
  Pattern19(5);
}