#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int x[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    int first_diagonal=0,second_diagonal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                first_diagonal+=x[i][j];
            }
            if(i+j==n-1){
                
                
                second_diagonal+=x[i][j];
            }
        }
    }

    int absum=(first_diagonal-second_diagonal);
    if(absum<0){
        absum=absum*(-1);
    }
    printf("%d",absum);
    

    

    return 0;
}