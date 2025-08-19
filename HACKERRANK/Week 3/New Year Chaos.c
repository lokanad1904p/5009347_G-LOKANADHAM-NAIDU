#include<stdio.h>

void minbribes(int q[],int n){
    int bribe =0;
    for(int i=0;i<n;i++){
        if(q[i] -(i+1)>2){
            printf("Too chaotic\n");
            return;
        }
        for(int j=(q[i]-2>0 ? q[i]-2 : 0);j<i;j++){
            if(q[j]>q[i]){
                bribe++;
            }
        }
    }
    printf("%d\n",bribe);
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--) {
        int n;
    scanf("%d",&n);
    int q[n];
    for(int i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    minbribes(q,n);
    
    }
    return 0;
    
}
