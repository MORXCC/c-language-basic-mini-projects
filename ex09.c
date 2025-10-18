#include <stdio.h>
int main (){
    int M[15][15];
    int i,j,k,l,S;
    S=0;
    int *P;
    P=&M[0][0];

    for(i=0;i<15*15;i++){
         *(P+i)=i%4;
        
    }

    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            S=S+M[i][j];
        }
    }

    printf("la somme de toutes les lignes de M la matrice est : %d",S);
    


    return 0;
}