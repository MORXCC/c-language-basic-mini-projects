#include <stdio.h>
int main(){
    //programme de tri croissant version 2

    int T[10]={9,9,8,7,6,5,4,3,2,1};
    int *P;
    int *A,*B;
    int i;
    int temp;
    int j;
    int min;

    P=T;

    
    printf("Tableau avant tri :");
    for(A=P;A-P<10;A++){
        printf("%d\t",*A);
    }


    for(B=P;B-P<10;B++){
        min=*B;
        for(A=B;A-B<10;A++){
            if(*A<=min){
            temp=*A;
            *A=*B;
            *B=temp;
            }
        }
    }

    printf("\n");

    printf("Tableau après tri :");
    for(i=0;i<10;i++){
        printf("%d\t",*(P+i));
    }
}