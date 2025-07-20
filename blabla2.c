#include <stdio.h>



int main() {
    FILE*fp;

    fp=fopen("blablawow3.txt","w");
    fputs("hello mother fukcer how are you doing",fp);
    fclose(fp);

    fp=fopen("blablawow3.txt","r");
    char read[39999];
     fgets(read,1000,fp);
     printf("%s",read);

    return 0;
}
