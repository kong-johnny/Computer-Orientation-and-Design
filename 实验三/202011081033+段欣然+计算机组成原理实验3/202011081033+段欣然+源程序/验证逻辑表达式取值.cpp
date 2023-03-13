#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    float a, b = 1.0/3;
    a = 100 + b;
    a -= 100;
    cout << setprecision(15) << a << " " << b << endl;
    cout << (a == b) << endl;
    a = (100 + 1.0/3) - 100;
    cout << setprecision(15) << a << " " << b << endl;
    cout << (a == b) << endl;
    return 0;
}