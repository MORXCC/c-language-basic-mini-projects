#include <stdio.h>
int main (){
    // créer un programme de tri décroissant
    // cette fois j'ai remplacé T[i] par *(T+i) et &T[i] par T+i
    // cette fois je vais remplacer les indices des boucles par des pointeurs 

    //déclaration des variables
    int a,temp,max,m;
    int *A,*B,*C;
    int T[50];
    A=T;
    B=T;
    C=T;

    //lire la longueur max du tableau
    printf("entrez l'indice maximal du tableau : ");
    scanf("%d",&a);

    //remplir le tableau
    for(A=T;A<T+a;A++){
        printf("\nLa valeur de T[%d] est : ",A-T);
        scanf("%d",A);
    }

    //afficher le tableau avant le tri
    for(A=T;A<T+a;A++){
        printf("%d\t",*A);  
    }

    //faire le tri
    for(A=T;A<T+a;A++){
         max=*A;
        for(B=A;B<T+a;B++){
            if(*B>=max){
                max=*B;
                m=B-A;
            }
        }
        temp=*(T+h);
        *(T+h)=*(T+m);
        *(T+m)=temp;
        
    }

    //affichage du tableau après tri
    printf("\n");// pour bien séparer l'avant et après du tableau
    for(int g=0;g<a;g++){
        printf("%d\t",*(T+g));  
    }

    
    return 0;
}