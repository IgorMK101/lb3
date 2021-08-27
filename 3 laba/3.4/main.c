#include <stdio.h>
#include <math.h>

int main (){
int x,y; 
float f;
printf("\n Vvedit chislo x: ");
scanf("%d",&x);
printf("\n Vvedit chislo y: ");
scanf("%d",&y);
if((1+x*x+y*y) == 0){
    printf("\n Null u znamenuku");
}
else{ f = (x*x+x*y-y*y)/(1+x*x+y*y);
printf("\n\tf = %.3f",f);
}
    return 0;
}
