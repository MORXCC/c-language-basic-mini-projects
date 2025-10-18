#include <stdio.h> 
int main(){
    int som;
    int i,j,k,l,c;
    int M[50][50];
    int *P;
    P=&M[0][0];

    printf("entrez le nombre des lignes de la matrice : ");
    scanf("%d",&l);
    printf("entrez le nombre des colonnes de la matrice : ");
    scanf("%d",&c);


    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            *(P+i*c+j)=1;
        }
    }

    printf("Matrice :\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d\t",*(P+i*c+j));
        }printf("\n");
    }

    for(k=0;k<l;k++){
        for(i=k,som=0,j=0;j<c;j++){
            som=som+*(P+i*c+j);//M[i][j]=*(P+i*c+j)
        }
        printf("La somme de la ligne %d est :%d\n",i+1,som);
    }

    for(k=0;k<c;k++){
        for(i=0,som=0,j=k;i<l;i++){
            som=som+*(P+i*c+j);
        }
        printf("La somme de la colonne %d est :%d\n",j+1,som);
    }

    
    

    return 0;
}