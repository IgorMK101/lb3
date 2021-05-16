#include <stdio.h>
#include <math.h>

int main(){ 
float Skvadrata, Skrug;
float radius, polstor;
const float pi = 3.14;
printf("\nVedit ploschy kruga: ");
scanf("%f", &Skrug);
printf("\nVedit ploschy kvadrta: ");
scanf("%f",&Skvadrata);
if(Skrug<0){
    Skrug= Skrug*(-1);
}
if(Skvadrata<0){
    Skvadrata= Skvadrata*(-1);
}
if (Skvadrata==0 || Skrug == 0){
    printf("ploscha odnieii figuru = 0, todi cia figura ne isnue");
    return 0;
}
radius=sqrt(Skrug/pi);
polstor=sqrt(Skvadrata)/2;
if(radius <= polstor){
    printf("krug znahodutsia u sereduni kvadrata");
}
if (radius > polstor){
    printf("krug znahodutsia zovni kvadrata");
}
return 0;}