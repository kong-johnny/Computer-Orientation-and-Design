#include<iostream>
#include<windows.h>

using namespace std;
const int M = 1000, N = 1000;
int i, j;
void Assign_array_rows(){
    int (*a)[N] = new int [M][N];
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            a[i][j] = i + j;
    delete[] a;
}
void Assign_array_cols(){
    int (*a)[N] = new int [M][N];
    for(j = 0; j < N; j++)
        for(i = 0; i < M; i++)
            a[i][j] = i + j;
    delete[] a;
}
int main(){
    double time = 0;
	double counts = 0;
	LARGE_INTEGER nFreq;
	LARGE_INTEGER nBeginTime;
	LARGE_INTEGER nEndTime;
	QueryPerformanceFrequency(&nFreq);
	QueryPerformanceCounter(&nBeginTime);
    cout<<"Assign-array-rows running"<<endl;
    for(int _ = 0;_<1000;_++)
        Assign_array_rows();
    QueryPerformanceCounter(&nEndTime);
    time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;
	cout << "Assign-array-rows spends: " << time << "ms" << endl;
    QueryPerformanceFrequency(&nFreq);
	QueryPerformanceCounter(&nBeginTime);
    cout<<"Assign-array-cols running"<<endl;
    for(int _ = 0;_<1000;_++)
        Assign_array_cols();
    QueryPerformanceCounter(&nEndTime);
    time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;
	cout << "Assign-array-cols spends: " << time << "ms" << endl;
    return 0;
}