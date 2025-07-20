#include<stdio.h>
int main(){

int n,m;
scanf("%d%d",&n,&m);
    char x[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&x[i][j]);
        }
    }
int r,c;
scanf("%d%d",&r,&c);
r--;c--;

if(x[r-1][c-1]!='.' && x[r-1][c+1]!='.' &&
    x[r][c-1]!='.' && x[r][c+1]!='.' &&
    x[r+1][c-1]!='.' && x[r+1][c+1]!='.' &&
    x[r-1][c]!='.' && x[r-1][c]!='.'
){
    printf("yes\n");
}
else printf("no\n");


    return 0;
}