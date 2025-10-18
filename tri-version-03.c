#include <stdio.h>
int main(){
    //programme de tri croissant version 2

    int T[10]={10,9,8,7,6,5,4,3,2,1};
    int *P;
    int i;
    int temp;
    int j;
    int min;

    P=T;

    
    printf("Tableau avant tri :");
    for(i=0;i<10;i++){
        printf("%d\t",*(P+i));
    }


    for(i=0;i<10;i++){
        min=*(P+i);
        for(j=i;j<10;j++){
            if(*(P+j)<=min){
            temp=*(P+j);
            *(P+j)=*(P+i);
            *(P+i)=temp;
            }
        }
    }

    printf("\n");

    printf("Tableau après tri :");
    for(i=0;i<10;i++){
        printf("%d\t",*(P+i));
    }
}