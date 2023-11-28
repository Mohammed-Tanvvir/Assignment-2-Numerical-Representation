/*==========================================================

 Title:       Assignment 2 - Numerical Representation
 Course:      CIS 2252
 Author:      <mohammed tanvvir>
 Date:        < 6/ 18/23 >
 Description: This program ....

 ==========================================================
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <vector>

  
  string convert(int number) {
      switch (number) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5: 
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default: 
            return "";
      }
  }  
  
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
for (int i = num1; i <= num2; i++) {
    if (i >= 1 && i <= 9) {
        cout << convert(i) << endl;
    } else if (i % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}

  return 0;
}





