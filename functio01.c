#include <stdio.h>

int sum(int x, int y){
    return x+y;
}

int sump(int x){
    int sum=0;
    for(int i=0;i<=x;i=i+2){
        sum=sum+i;
    }
    return sum;
}


int main(void){
    printf("hi ahmed\n");
    for(int j=0;j<10;j++){
        printf("sump(%d) = %d\n",j,sump(j));
    }
    return 0;
}