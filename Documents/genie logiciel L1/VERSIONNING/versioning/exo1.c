#include <stdio.h>
int main(){
int m,n,moy,i,s=0,cpt=0;
do{
    printf("entrez le nombre d'entier: ");
    scanf("%d",&n);
    if(n<=0){
    puts("entier invalide");
    }
}while(n<=0);
for(i=0;i<n;i++){
        do{
    puts("veuillez saisir un entier: ");
    scanf("%d", &m);
    }while(m<=0);
    if(m%2==0){
        cpt++;
        s+=m;
    }
    }

moy=s/cpt;
printf("la moyenne est %d",moy);
return 0;}
