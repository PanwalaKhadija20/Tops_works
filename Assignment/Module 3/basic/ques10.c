//area of a rectangular prism=2(lb+bh+hl)
#include<stdio.h>
int main()
{
    int l,b,h,area;
    printf("Enter L: ");
    scanf("%d",&l);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter H: ");
    scanf("%d",&h);
    area=2*((l*b)+(b*h)+(h*l));
    printf("Area Of Rectangular Prism=%d",area);


}