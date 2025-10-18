#include <stdio.h>
int main (){
    //créer un programme de tri décroissant
    // cette fois j'ai remplacé T[i] par *(T+i) et &T[i] par T+i

    //déclaration des variables
    int a,temp,max,m;
    int T[50];

    //lire la longueur max du tableau
    printf("entrez l'indice maximal du tableau : ");
    scanf("%d",&a);

    //remplir le tableau
    for(int i=0;i<a;i++){
        printf("\nLa valeur de T[%d] est : ",i);
        scanf("%d",T+i);
    }

    //afficher le tableau avant le tri
     for(int j=0;j<a;j++){
        printf("%d\t",*(T+j));  
    }

    //faire le tri
    for(int h=0;h<a;h++){
         max=*(T+h);
        for(int k=h;k<a;k++){
            if(*(T+k)>=max){
                max=*(T+k);
                m=k;
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
