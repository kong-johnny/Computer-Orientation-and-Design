#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0x0a0b0c0d;
    // cout<<a<<endl;
    char* p = (char*)&a;
    // cout<<setbase(16)<<(int)*p<<endl;
    if((int)*p == 0x0d){
        cout<<"Big endian"<<endl;
    }
    else{
        cout<<"Little endian"<<endl;
    }
    return 0;
}