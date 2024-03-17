#include <stdio.h>
#include <math.h>
int main(){
    char a[]="10001111";
    int add1=0,add2=0,k=7,i=0;
    
    for(int j=0;j<8;j++){
        if(a[j]-'0'==1){
            add1=pow(2,k);
            add2=add2+add1;
        }
        k--;
    }
    printf("%X",add2);    
    return 0;
}
