#include <stdio.h>
#include <string.h>


int main(){
    
    FILE*fp = fopen("main.c","r");
    int c,line;
    int currentline=1;
    
    printf("請輸入行數");
    scanf("%d",&line);

    while ((c = getc(fp)) != EOF) {
        if (currentline == line) {
            putchar(c);
        }
        if (c == '\n') {
            currentline++;
        }
    }
    fclose(fp);
 
    
    return 0;
}
