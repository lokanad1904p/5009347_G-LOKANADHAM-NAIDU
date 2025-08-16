#include<stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
} 
void minmax(int k,int arr[],int n){
    qsort(arr, n, sizeof(int),compare);
    int unfair = arr[k-1] - arr[0];
    for(int i=1;i<=n-k;i++){
        int unfairnes = arr[i+k-1] -arr[i];
        if(unfairnes<unfair){
            unfair=unfairnes;
        }
    }
    printf("%d",unfair);
    
}
int main(){
    int k,i,n;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    minmax(k,arr,n);
}