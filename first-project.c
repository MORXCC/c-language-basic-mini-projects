#include <stdio.h>
int main (){
    //multiplication par un float 
    float M[5][5];
    int i,j,k;
    float a;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            M[i][j]=i+j-5;
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%f\t",M[i][j]);
        }printf("\n");
    }

    printf("Entrez la valeur du réel à multiplier par toute la matrice : ");
    scanf("%f",&a);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            M[i][j]=a*M[i][j];
        }
    }

    printf("Matrice après multiplication : \n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%f\t",M[i][j]);
        }printf("\n");
    }

    return 0;
}