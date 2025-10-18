#include <stdio.h> 
int main(){
    int som;
    int i,j,k,l,c;
    int M[50][50];

    printf("entrez le nombre des lignes de la matrice : ");
    scanf("%d",&l);
    printf("entrez le nombre des colonnes de la matrice : ");
    scanf("%d",&c);

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            M[i][j]=1;
        }
    }

    printf("Matrice :\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d\t",M[i][j]);
        }printf("\n");
    }

    for(k=0;k<l;k++){
        for(i=k,som=0,j=0;j<c;j++){
            som=som+M[i][j];
        }
        printf("La somme de la colonne %d est :%d\n",i,som);
    }

    for(k=0;k<l;k++){
        for(i=0,som=0,j=k;i<l;i++){
            som=som+M[i][j];
        }
        printf("La somme de la ligne %d est :%d\n",j,som);
    }
    
    return 0;

}

