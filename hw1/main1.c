#include <stdio.h>

int main(){
    char a[]="AABBBCCCCddd";
    int count[4]={1,1,1,1},i=0,k=0;
    char now,last;
    while(a[i]!='\0'){
        now=a[i+1];
        last=a[i];
        if(last!=now){
            printf("%c",last);
            printf("%d",count[k]);
            k++;
        }
        if(last==now){
            count[k]++;
        }
       i++; 
    }
    
