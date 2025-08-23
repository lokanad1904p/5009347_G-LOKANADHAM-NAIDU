#include<stdio.h>

void printUniqueElements(int numbers[],int size) {
    int frequency[101]={0};

    for(int i=0;i<size;i++)
    {
        frequency[numbers[i]]++;
    }
    for(int i=0;i<101;i++)
    {
        if(frequency[i]==1)
        {
            printf("%d",i);
        }
    }
}

int main(){
    int count;
    scanf("%d",&count);
    int values[count];
    for (int i=0;i<count;i++)
    {
        scanf("%d",&values[i]);
    }
    printUniqueElements(values,count);
    return 0;
}
