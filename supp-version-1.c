#include <stdio.h>
int main (){
    int T[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int a,b,c,j,i;
    b=0;

    for(j=0;j<12;j++){
        printf("%d\t",T[j]);
    }

    do{

    printf("\nEntrez la valeur à supprimer : ");
    scanf("%d",&a);

    for(i=0;i<12;i++){
        if(T[i]==a){
            b++;
            for(j=i;j<12-b;j++){
                T[j]=T[j+1];
            }
        }
    }

    printf("\nb\n");

    for(j=0;j<12-b;j++){
        printf("%d\t",T[j]);
    }
    }while(1<2);

    return 0;
}