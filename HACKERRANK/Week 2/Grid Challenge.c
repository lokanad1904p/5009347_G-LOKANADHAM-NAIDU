#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmpchar(const void *a,const void *b){
    return (*(const char*)a-*(const char*)b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char grid[n][105];
        for(int i=0;i<n;i++){
            scanf("%s",grid[i]);
            qsort(grid[i], strlen(grid[i]), sizeof(char),cmpchar);
        }
        int sorted =1;
        for(int col=0;col<n&&sorted;col++){
            for(int row =0;row<n-1;row++){
                if(grid[row][col]>grid[row+1][col]){
                    sorted=0;
                    break;
                }
            }
        }
        
        if(sorted){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}