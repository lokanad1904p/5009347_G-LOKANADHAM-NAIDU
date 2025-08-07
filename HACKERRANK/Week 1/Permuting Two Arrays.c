#include <stdio.h>
#include <stdlib.h>

int compareAsc(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}

int compareDesc(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}

void twoArrays(int k,int A[],int B[],int n){
    qsort(A,n,sizeof(int),compareAsc);
    qsort(B,n,sizeof(int),compareDesc);

    for (int i=0;i<n;i++){
        if (A[i]+B[i]<k){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf("%d %d",&n,&k);
        int A[n],B[n];
        for(int i=0;i<n;i++)
            scanf("%d",&A[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&B[i]);
        twoArrays(k,A,B,n);
    }
    return 0;
}
