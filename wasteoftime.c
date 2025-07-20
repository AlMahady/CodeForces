#include<stdio.h>
int main(){

int n,m;
scanf("%d%d",&n,&m);
    int x[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&x[i][j]);
        }
    }
    int find;
    scanf("%d",&find);
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(find==x[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(!flag){
        printf("will take number\n");

    }
    else printf("will not take number\n");


    return 0;
}