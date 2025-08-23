#include<stdio.h>
int main(){
    int rank;
    scanf("%d",&rank);
    switch(rank){
        case 1: printf("Gold Medal"); break;
        case 2: printf("Silver Medal"); break;
        case 3: printf("Bronze Medal"); break;
        default: printf("No medal");
    }
    return 0;
}