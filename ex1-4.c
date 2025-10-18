#include <stdio.h>
int main (){
     int a,temp,max,m;
    int *A,*B,*C;
    int T[50];
    A=T;
    B=T;
    C=T;
    printf("entrez la longueur du tableau : ");
    scanf("%d",&a);

    for(A=T;A<T+a;A++){
        printf("\nLa valeur de T[%d] est : ",A-T);
        scanf("%d",A);
    }



    //afficher le tableau avant le tri
     for(int j=0;j<a;j++){
        printf("%d\t",*(T+j));  
    }



    return 0;
}