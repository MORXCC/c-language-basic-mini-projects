#include <stdio.h>
int main (){
    int T[5][5];
    int temp;
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            T[i][j]=i+1;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            temp=T[i][j];
            T[i][j]=T[j][i];
            T[j][i]=temp;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    return 0;
}
