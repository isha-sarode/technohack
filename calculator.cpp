# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter first number: ";
  cin >> num1;
  cout<<"Enter second number:";
  cin>> num2;

  switch(op) {

    case '+':
      cout << "result:"<< num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;

    case '-':
      cout << "result:"<< num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;

    case '*':
      cout << "result:"<< num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;

    case '/':
      cout << "result:" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;

    default:
     
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
