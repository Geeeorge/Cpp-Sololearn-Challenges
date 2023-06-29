#include <iostream>
using namespace std;

//change the function
template <class T, class X>
T myMax(T a, X b) {
    return (T)(a > b ? a : b);
}

int main () {
    double x;
    int y;
    cin>>x>>y;
    cout << myMax(x, y) << endl;
}