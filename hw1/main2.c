#include <stdio.h>

int main(){
    char a[]="A4B1C3f3";
    int num,i=0;
    
    while(a[i]!='\0'){
        printf("%c",a[i]);
        num=(int)a[i+1]-'0';
        
        for(int k=num;k>1;k--){
            printf("%c",a[i]);
        }
        i+=2;
    }
    return 0;
    }
    
