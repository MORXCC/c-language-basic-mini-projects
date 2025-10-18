#include <stdio.h>
int main(){
    //programme de tri croissant version 2

    int T[10]={10,9,8,7,6,5,4,3,2,1};
    int i;
    int temp;
    int j;
    int min;

    
    printf("Tableau avant tri :");
    for(i=0;i<10;i++){
        printf("%d\t",*(T+i));
    }


    for(i=0;i<10;i++){
        min=*(T+i);
        for(j=i;j<10;j++){
            if(*(T+j)<=min){
            temp=T[j];
            *(T+j)=*(T+i);
            *(T+i)=temp;
            }
        }
    }

    printf("\n");

    printf("Tableau après tri :");
    for(i=0;i<10;i++){
        printf("%d\t",*(T+i));
    }
}