#include <stdio.h>
int solve(int n){
int newnumber=0;
    while(n>0){
        int temp=n%10;
        newnumber=newnumber*10+temp;
        n/=10;
    }
    return newnumber;
    
}


int main() {
    
    
    int n;
    scanf("%d",&n);
    int x=solve(n);

    
    printf("%d",x);
    

    return 0;
    
}

