#include<stdio.h>
void search(int *x,int brr[],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(*x==brr[i]){
            printf("%d",i);
            flag=0;
            break;
        }
        else flag=1;
    }
    if(flag){
        printf("-1\n");
    }


}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f;
    scanf("%d",&f);
    search(&f,arr[n], n);
    






    return 0;
}