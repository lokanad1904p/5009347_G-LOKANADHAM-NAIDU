#include <stdio.h>

unsigned int flipping(unsigned int n){
    return n^0xFFFFFFFF;//Flip all 32 bits
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned int n;
        scanf("%u",&n);//use %u for unsigned int
        printf("%u\n",flipping(n));
    }
    return 0;
}
