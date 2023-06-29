#include <iostream>
using namespace std;

class TV {
    public:
        TV(int h, int w): height(h), width(w) {};
        void area() {
            cout <<height*width;
        }
    private:
        int height;
        int width;
};

int main() {
   //your code goes here

   int x, y;
   cin >> x >> y;
   TV o(x, y);
   o.area();


   
}
