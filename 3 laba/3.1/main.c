#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
int n; int a,b,c;
float y;
printf("\n_____________________________________________________________________________________________________\n");
puts("1. Cherez if");
puts("2. Cherz if-else-if");
puts("3. exit");
printf("_____________________________________________________________________________________________________\n");
scanf("%d", &n);
switch (n)
{
case 1:{
    printf("\nVedit Cile chislo a: ");
    scanf("%d", &a);
    printf("\nVedit Cile chislo b: ");
    scanf("%d", &b);
    printf("\nVedit Cile chislo c: ");
    scanf("%d", &c);
if(c>0 && (b-2*a)<0){ printf("\nnull u koreni"); break;}
if(c==0 && (c-6*a)==0){ printf("\nnull u znamenuku"); break;}
if(c>0){  y = sqrt(b-2*a)+2*sqrt(c); 
   printf("\n\ty = %.3f",y); break;
}if(c==0){
y=(b/(c-6*a));printf("\n\ty = %.3f",y); break;}
if(c<0){
    y = b + 12* pow(c,3);printf("\n\ty = %.3f",y); break;}

}
case 2:{
printf("\nVedit Cile chislo a: ");
    scanf("%d", &a);
    printf("\nVedit Cile chislo b: ");
    scanf("%d", &b);
    printf("\nVedit Cile chislo c: ");
    scanf("%d", &c);
if(c>0 && (b-2*a)<0){ printf("\nnull u koreni"); break;}
else if(c==0 && (c-6*a)==0){ printf("\nnull u znamenuku"); break;}
else if(c>0){  y = sqrt(b-2*a)+2*sqrt(c); 
   printf("\n\ty = %.3f",y); break;
}else if(c==0){
y=(b/(c-6*a));printf("\n\ty = %.3f",y); break;}
else{
    y = b + 12* pow(c,3);printf("\n\ty = %.3f",y); break;}
}
default:
    break;
}

    return 0;
}