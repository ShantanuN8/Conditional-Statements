#include <iostream>
using namespace std;
int main(){

  char op;
  float num1, num2;

  cout << "Enter Mathematical Operation: 1.Add, 2.Subtract, 3.Multiply, 4.Divide: ";
  cin >> op;

  cout << "\nEnter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '1':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '2':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '3':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '4':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! Invalid Choice";
      break;
  }

  return 0;

}
/*OUTPUT
Enter Mathematical Operation: 1.Add, 2.Subtract, 3.Multiply, 4.Divide: 1
Enter two operands: 24 
56
24 + 56 = 80

Enter Mathematical Operation: 1.Add, 2.Subtract, 3.Multiply, 4.Divide: 2
Enter two operands: 78
32
78 - 32 = 46

Enter Mathematical Operation: 1.Add, 2.Subtract, 3.Multiply, 4.Divide: 3
Enter two operands: 4
8
4 * 8 = 32

Enter Mathematical Operation: 1.Add, 2.Subtract, 3.Multiply, 4.Divide: 4
Enter two operands: 36
12
36 / 12 = 3
*/
