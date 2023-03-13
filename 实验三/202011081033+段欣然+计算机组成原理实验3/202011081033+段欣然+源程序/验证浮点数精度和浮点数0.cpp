#include<bits/stdc++.h>

using namespace std;
int main(){
    float fpi = acos(-1);
    double dpi = acos(-1);
    cout << "float : " << setprecision(15) << fpi << endl;
    cout << "double : " << setprecision(15) << dpi << endl;
    cout << "double : " << setprecision(20) << dpi << endl;
    float a = -8.0;
    float b = 0.0;
    float c = -4.0;
    cout<< "float: " << a / b << " " << sqrt(c) << endl;
    double aa = -8.0, bb = 0, cc = -4.0;
    cout<< "double: " << aa / bb << " " << sqrt(cc) << endl;
    return 0;
}