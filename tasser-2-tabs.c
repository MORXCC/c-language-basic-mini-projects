#include <stdio.h>
int main (){

    int T1[20],T2[20],T[40];
    int i,j,k,a;

    for(int i=0;i<5;i++){
        T1[i]=i+(-1)^i+5;
    }

    for(int i=0;i<5;i++){
        T2[i]=i+3;
    }

    printf("Premier Tableau : \n");
    for(i=0;i<5;i++){
        printf("%d\t",T1[i]);
    }

    printf("\n");

    printf("Deuxième Tableau : \n");
    for(i=0;i<5;i++){
        printf("%d\t",T2[i]);
    }

    i=0;
    j=0;

    for(int k=0;k<10;k++){
        if(j==5){
            for(a=k;a<10;a++){
            T[a]=T1[i];
            i++;
            }
            break;
        }
        if(i==5){
            for(a=k;a<10;a++){
            T[a]=T2[j];
            j++;
            }
            break;
        }

        if(T1[i]<=T2[j]){
            T[k]=T1[i];
            i++;
        }
        else{
            T[k]=T2[j];
            j++;
        }
    }

    printf("\n");

    printf(" \nTableau final : \n");
    for(i=0;i<10;i++){
        printf("%d\t",T[i]);
    }
    return 0;
}