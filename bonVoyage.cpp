#include <iostream>
using namespace std;

int main()
{
    int distance = 0;
    for(int hours = 0; hours <= 4; hours++){
        distance += 40;
        cout << distance << endl;
    }    
    return 0;
}