#include <iostream>
using namespace std;

int main(){
char op;
float num1,num2;

cout << "Enter your operator: + or - or * or / : ";
cin >> op;

cout << "Enter two numbers: ";
cin >> num1 >> num2;

switch(op){
    case '+':
    cout << num1+num2;
    break;

    case '-':
    cout << num1-num2;
    break;

    case '*':
    cout << num1*num2;
    break;

    case '/':
    cout << num1/num2;
    break;

    //If error or wrong operator is used.
    default:
    cout << "Error, enter the correct operator.";
    break;
}

    return 0;
}