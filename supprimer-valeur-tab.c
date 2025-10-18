#include <stdio.h>
int main(){
    // dans cce programme je vais rechercher une valeur dans un tableau et je vais la retirer

    int a,b,c,d,e,f,valsup;
    int T[50];int n;

    do{
    printf("Entrez la valeur de la longueur du tableau : ");
    scanf("%d",&n);
    }while(n>50 && n<1);

    for(int i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }

    
    printf("\nentrez la valeur à supprimer : ");
    scanf("%d",&valsup);

    printf("\nTableau avant : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",T[i]);
    }

    for(int i=0;i<n;i++){
        if(T[i]==valsup){
            for(int j=i;j<n-1;j++){
            T[j]=T[j+1];
            }
            n--;
        }
    }

    printf("\nTableau après : \n");
    for(int i=0;i<n;i++){
        printf("%d\t",T[i]);
    }
    
    

    return 0;
}
