#include <stdio.h>

const char* countergame(unsigned long long n){
    int turns =0;
    while(n>1){
        if((n & (n-1))==0){
            n/=2;
        }
        else{
            unsigned long long p=1;
            while (p*2<n) {
                p=p*2;
            
            }
            n=n-p;
            
        }
        turns++;
    }
    if(turns%2 == 1)
    return "Louise";
    else 
    return "Richard";
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long n;
        scanf("%llu",&n);
        printf("%s\n",countergame(n));
    }
    return 0;
}