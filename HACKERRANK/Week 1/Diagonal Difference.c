#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    scanf("%d",&size);
    int matrix[size][size];
    for(int row=0;row<size;row++){
        for(int col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
    }
    int sumMain=0,sumAnti=0;
    for(int i=0;i<size;i++){
        sumMain+=matrix[i][i]; // Main diagonal
        sumAnti+=matrix[i][size-1-i]; // Anti-diagonal
    }
    int result=abs(sumMain-sumAnti);
    printf("%d\n",result);
    return 0;
}