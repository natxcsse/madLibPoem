#include <iostream>

using namespace std;


int main(){

    int num1,num2;
    char opSign;
    int result;

    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter operator sign: ";
    cin >> opSign;
    cout << "Please enter second number: ";
    cin >> num2;

    if(opSign == '+'){
        result = num1+num2;
    } else if (opSign == '-'){
        result = num1-num2;
    } else if (opSign == '/'){
        result = num1/num2;
    } else if (opSign == '*'){
        result = num1*num2;
    } else {
        cout << "Invalid sign used";
    }
    cout << result;

    return 0;
}
