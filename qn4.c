#include<stdio.h>
int main(){

int r;
float a;
printf("Enter radius of the circle\n");
scanf("%d",&r);
a = r*r*3.14;
printf("area of the circle is %f with radius %d",a,r);
return 0;
}
