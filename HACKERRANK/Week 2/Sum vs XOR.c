#include <stdio.h>
long long sumvsxor(long long n){
    if(n==0) return 1;
    int count=0;
    while (n>0) {
        if((n & 1)==0){
             count++;
        }
        n>>=1;
    
    }
    long long result = 1ll<<count;
    return result;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",sumvsxor(n));
    return 0;
}
