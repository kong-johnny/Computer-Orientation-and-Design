#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N],ans[N];
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d", &x);
            a[x]=i;
        }
        for(int i=n;i>0;i--){
            ans[i]=a[i]%i;
            for(int j=i;j>0;j--){
                a[j]=(a[j]-ans[i]+i)%i;
            }
        }
        for(int i =1 ;i<=n;i++) printf("%d ", ans[i]);
    }
    return 0;
}