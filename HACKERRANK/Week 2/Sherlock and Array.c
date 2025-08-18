#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char* balancedsum(int arr[],int n){
    int total =0;
    for(int i=0;i<n;i++){
        total += arr[i];
    }
    int leftsum =0;
    for(int i=0;i<n;i++){
        int rightsum = total-leftsum-arr[i];
        if(leftsum==rightsum){
            return "YES";
        }
        leftsum+=arr[i];
    }
    return "NO";
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
         printf("%s\n", balancedsum(arr,n));
    }
    return 0;
}