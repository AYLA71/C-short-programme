/*un programme qui permet d'exprimer un nombre de secondes saisi par l’utilisateur en heures, en minutes et en secondes.*/
#include <stdio.h>
int main()
{
    int h,m,s;
    printf("Donner un nombres en secondes");
    scanf("%d",&s);
    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;
    printf("Resultat : %dheures,%dminutes,%dsecondes",h,m,s);
}
