#include <iostream>
using namespace std;

class Ratio{
    private: 
        int num, den;
    public:
        Ratio() {cout << "OBJECT IS BORN\n"; }
        ~Ratio() {cout << "OBJECT DIES.\n"; }
};

int main(){
    {
        Ratio x;
        cout << "Now x is alive.\n";
    }
    cout << "now between blocks.\n";
    {
        Ratio y;
        cout << "Now y is alive. \n";
    }
}