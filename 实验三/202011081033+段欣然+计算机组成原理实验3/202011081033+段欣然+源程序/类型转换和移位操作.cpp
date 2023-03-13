#include<bits/stdc++.h>
using namespace std;
int main(){
    short a = -12345;
    cout << setbase(10) << a << " " << (int)a << " " << (unsigned short)a << " " << (unsigned int)(unsigned short)a << " " << (float)a <<endl;
    cout << setbase(16) << a << " " << (int)a << " " << (unsigned short)a << " " << (unsigned int)(unsigned short)a << " " << (float)a <<endl;
    int b = 2147483647;
    cout << setbase(10) << b << " " << (short)b << " " << (unsigned short)(unsigned int)b << " " << (unsigned int)b << " " << (float)b <<endl;
    cout << setbase(16) << b << " " << (short)b << " " << (unsigned short)(unsigned int)b << " " << (unsigned int)b << " " << (float)b <<endl;
    float c = 123456.789e5;
    cout << setbase(10) << c << " " << (double)c << endl;
    cout << setbase(16) << c << " " << (double)c << endl;
    double d = 123456.789e5;
    cout << setbase(10) << d << " " << (float)d << endl;
    cout << setbase(16) << d << " " << (float)d << endl;
    cout << setbase(10) << (a<<2) << " " << ((unsigned short)a<<2) << endl;
    cout << setbase(16) << (a<<2) << " " << ((unsigned short)a<<2) << endl;
    cout << setbase(10) << (a>>2) << " " << ((unsigned short)a>>2) << endl;
    cout << setbase(16) << (a>>2) << " " << ((unsigned short)a>>2) << endl;
    return 0;
}