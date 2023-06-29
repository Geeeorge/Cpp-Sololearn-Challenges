#include <iostream>
#include <string>

using namespace std;

class Painting {
    public:
        //define the constructor
       Painting(string name){
           cout << name;
       }

       void setPainting(string x){
           name = x;
       }

       string getPainting(){
           return name;
       } 
       private:
       string name;    

};

int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}