#include<stdio.h>

#define MAXR 205
#define MAXC 205

int R,C;
long long N;
char A[MAXR][MAXC+1];
int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};

void fill_whole_grid(char out[MAXR][MAXC+1]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) {
            out[i][j]='O';
            out[i][C]='\0';
        }
    }
}
void explode_once(char in[MAXR][MAXC+1],char out[MAXR][MAXC+1]){
    fill_whole_grid(out);
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(in[i][j]=='O'){
                out[i][j]='.';
                for(int k=0;k<4;k++){
                    int ni=i+dr[k],nj=j+dc[k];
                    if(ni>=0&& ni<R && nj>=0&&nj<C){
                        out[ni][nj]='.';
                    }
                }
            }
        }
    }
}
void printgrid(char g[MAXR][MAXC+1]){
    for(int i=0;i<R;i++) puts(g[i]);
}
int main(){
    scanf("%d %d %lld",&R,&C,&N);
    for(int i=0;i<R;i++) scanf("%s",A[i]);
    if(N==1){
        printgrid(A);
        return 0;
    }
    if(N%2==0){
        char fill[MAXR][MAXC+1];
        fill_whole_grid(fill);
        printgrid(fill);
        return 0;
    }
    char after3[MAXR][MAXC+1];
    char after5[MAXR][MAXC+1];
    explode_once(A, after3);
    explode_once(after3, after5);
    if(N%4==3){
        printgrid(after3);
    }
    else {
    printgrid(after5);
    }
    return 0;
}