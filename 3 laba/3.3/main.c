#include <math.h>
#include <stdio.h>

int main ()
{
int n;
printf("\nVedit nomer misiaca vid 1 do 12:");
scanf("%d", &n);
 switch (n){
case 1:case 2:case 12:{
    printf("\nZuma");
break;}
case 3:case 4:case 5:{
    printf("\nVesna");
break;}
case 6:case 7:case 8:
{
    printf("\nLito"); break;
}
case 9:case 10:case 11:
{
printf("\nOsin");break;
}
default: printf("\nVu velu ne pravulne chuslo!!!");
 break;}
    return 0;
}