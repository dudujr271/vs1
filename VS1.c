#include <stdio.h>
int main (){
    int x,y;
    int somme=0,difference=0;
    float division;
    printf("Entrez les deux entiers:");
    scanf("%d %d",&x,&y);
    // Somme des positifs et paires
    if (x>0 && x%2 == 0)
        somme+=x;
    if (y>0 && y%2 == 0)
        somme +=y;
    // difference des négatifs tifs et impaires
      if (x<0 && x%2 != 0)
        difference=x;
        if (y<0 && y%2 != 0)
        difference-=y;
        //division des deux valleurs
        if(y!=0){
            division = (float)x/y;
            printf("La division des deux valeurs est:%.2f\n",division);
        } else{
        printf("La division est impossible (division par zero)\n");
        }
        printf("Sommes des deux valeurs positives et paires:%d\n",somme);
        printf("Difference des deux valeurs négatives et impaires",difference);
return 0;
}
