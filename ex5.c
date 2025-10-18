#include <stdio.h>
int main (){
    int T[10][10];
    int *p;
    int Lmax,Cmax;
    p=(int*)T;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            T[i][j]=(i*j)%3+i+2;
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }

    // T[i][j]=*(p+i*Cmax+j);
    // &T[i][j]=p+i*Cmax+j;

    /*  for(i=0;i<L;i++){
           for(j=0;j<c;j++){
               printf("T[%d][%d]= ",i,j);
               scanf("%f",p+i*Cmax+j);
            }
        }
    */


    return 0;
}