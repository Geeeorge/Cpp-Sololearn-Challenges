#include <iostream>
using namespace std;

int max(int num1, int num2) {
    //complete the function
    if (num1 > num2) {
        cout << num1;

    } else if (num1 == num2) {
        cout << num1;

    } else {
        cout << num2;
    }
}

int main() {
    //getting inputs
    int first;
    cin >> first;
    int second;
    cin >> second;
    
    //call the function and print result
    max(first, second);
    
    return 0;
}