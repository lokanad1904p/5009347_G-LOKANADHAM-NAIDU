#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int fromfront = p/2;
    int fromback = (n/2) - (p/2);
    if(fromfront<fromback){
        printf("%d",fromfront);
    }
    else{
        printf("%d",fromback);
    }
    return 0;
}