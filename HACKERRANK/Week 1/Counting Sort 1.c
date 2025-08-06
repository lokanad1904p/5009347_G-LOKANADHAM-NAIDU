#include <stdio.h>

void countingSort(int arr[],int n){
    int freq[100]={0}; // Array to store frequency counts, size 100 initialized to 0

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        printf("%d ",freq[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    countingSort(arr,n);
    return 0;
}
