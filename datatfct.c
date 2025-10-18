#include <stdio.h>

void fctdata(char nom[50],char prenom[50],char cne[50],float M1,float M2,float M3,float M4,float M5, float M6,float M7,float M8,float M9, float M10, float M11,float M12){
    printf("Nom de l'étudiant : %s\n",nom);
    printf("Prénom de l'étudiant : %s\n",prenom);
    printf("CNE de l'étudiant : %s\n",cne);
    printf("Note du module numéro 01 : %.3f\n",M1);
    printf("Note du module numéro 02 : %.3f\n",M2);
    printf("Note du module numéro 03 : %.3f\n",M3);
    printf("Note du module numéro 04 : %.2f\n",M4);
    printf("Note du module numéro 05 : %.2f\n",M5);
    printf("Note du module numéro 06 : %.2f\n",M6);
    printf("Note du module numéro 07 : %.2f\n",M7);
    printf("Note du module numéro 08 : %.3f\n",M8);
    printf("Note du module numéro 09 : %.3f\n",M9);
    printf("Note du module numéro 10 : %.3f\n",M10);
    printf("Note du module numéro 11 : %.3f\n",M11);
    printf("Note du module numéro 12 : %.3f\n",M12);
    printf("La moyenne est : %.3f",(M1+M2+M3+M4+M5+M6+M7+M8+M9+M10+M11+M12)/12);
}

int main(){
    printf("hiii ahmed \n");

    

    fctdata("MORO","AHMED", "IE81977",18,18,18,18,10,18,18,18,17,15,17,19);

    return 0;
}