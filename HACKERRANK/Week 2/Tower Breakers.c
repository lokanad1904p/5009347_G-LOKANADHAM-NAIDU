#include <stdio.h>
int tower(int n,int m){
    if(m==1) return 2;
    if (n%2==0) return 2;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);
        printf("%d\n",tower( n,  m));
    }
}