#include <stdio.h>
#include <stdlib.h>
int main()
{
int a, b;
int choose, i ;
int multi;
int som;
int sous;
int divi;
int modulo;
printf("********************************MA CALCULATRICE EN LANGAGE C***************************\n""\n");
printf("********************************Bienvenue sur le Menu**********************************\n""\n");
printf("********************************choix1: Addition(+)************************************\n");
printf("********************************choix2: Soustraction (-)*******************************\n");
printf("********************************choix3 Multiplication(*)*******************************\n");
printf("********************************choix4 Division (/)************************************\n");
printf("********************************choix5: Modulo(mod)************************************\n");
printf("\n");
printf("\n");
printf("Faite votre choix:\n");
scanf("%d", &choose);
while (choose !=  1 && choose != 2 && choose != 3 && choose !=4 && choose != 5 ){

             printf("\n");
             printf("\n");
             printf("----OUPPSS ERROR LE CHOIX ENTRE N'EXISTE PAS -----\n\n");
             printf("----------veullez reprendre votre choix ------\n\n");
             scanf("%d", &choose);

             }
  if (choose == 1){
printf("Entrer la valeur de a :\n");
scanf("%d", &a );
printf("Entrer la valeur de b :\n");
scanf("%d", &b );
som= a+b;
printf("le Somme de ses deux nombres est :%d" "\n",som);
    }
 if (choose == 2){
printf("Entrer la valeur de a :\n");
scanf("%d", &a );
printf("Entrer la valeur de b :\n");
scanf("%d", &b );
sous=a-b;
printf("la difference de ses deux nombres est :%d" "\n",sous);
}
 if (choose == 3){
printf("Entrer la valeur de a :\n");
scanf("%d", &a );
printf("Entrer la valeur de b :\n");
scanf("%d", &b );
multi=a*b;
printf("le produit de ses deux nombres est :%d" "\n",multi);
}
if (choose == 4){
printf("Entrer la valeur de a :\n");
scanf("%d", &a );
printf("Entrer la valeur de b :\n");
scanf("%d", &b );
divi=a/b;
printf("le resultat de la division de ses deux nombres est :%d" "\n",divi);
}
if (choose == 5){
printf("Entrer la valeur de a :\n");
scanf("%d", &a );
printf("Entrer la valeur de b :\n");
scanf("%d", &b );
modulo=a%b;
printf("le resultat du Modulo de ses deux nombres est :%d" "\n",modulo);
}
return 0 ;
}
