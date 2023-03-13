#include<iostream>
using namespace std;
struct node{
    char c;
    int a;
    char b;
};
struct test{
    int a;
    char b,c;
};
struct super{
    char c;
    double d;
    int s;
};
int main(){
    cout<<"size of int: "<<sizeof(int)<<endl;
    cout<<"size of char: "<<sizeof(char)<<endl;
    cout<<"size of node: "<<sizeof(struct node)<<endl;
    cout<<"size of test: "<<sizeof(struct test)<<endl;
    cout<<"size of super: "<<sizeof(struct super)<<endl;
    return 0;
}