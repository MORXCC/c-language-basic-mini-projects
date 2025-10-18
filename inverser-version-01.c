#include <stdio.h>
int main (){
    //inverser un tableau 
   int T[10]={1,2,3,4,5,6,7,8,9,10};

    int i,j,k,l;
    int temp;
    for(int j=0;j<10;j++){
        printf("%d\t",T[j]);
    }

    for(int i=0;i<5;i++){
        temp=T[i];
        T[i]=T[9-i];
        T[9-i]=temp;
    }

    printf("\n");

    for(int j=0;j<10;j++){
        printf("%d\t",T[j]);
    }
    return 0;
}