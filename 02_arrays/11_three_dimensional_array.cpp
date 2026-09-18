// 11 - Three-dimensional array
//
// Stores 8 letters in a 2 x 2 x 2 array of strings and prints them with
// three nested loops.
//
// Concepts: multi-dimensional arrays, nested for loops

#include <iostream>
#include <string>
using namespace std;

int main() {
 string letters[2][2][2] = {  // 2 blocks, each with 2 rows of 2 columns
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";  // i picks the block, j the row, k the column
    }
  }
}
}