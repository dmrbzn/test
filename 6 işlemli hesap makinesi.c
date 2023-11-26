#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char a;
    float x;
    float y;

    printf("bir operator giriniz\n");
    scanf("%c",&a);
    printf("bir sayi giriniz\n");
    scanf("%f",&x);
    printf("bir sayi daha giriniz\n");
    scanf("%f",&y);

    switch (a)
{
    case '+':printf("%.2f + %.2f = %.2f",x,y,x+y);
    break;
    case '-':printf("%.2f - %.2f = %.2f",x,y,x-y);
    break;
    case '*':printf("%.2f * %.2f = %.2f",x,y,x*y);
    break;
    case '/':printf("%.2f / %.2f = %.2f",x,y,x/y);
    break;
    case 'p':printf("%f ussu %f = %.2f",x,y,pow(x,y));
    break;
    case 's':printf("karekok %f = %.2f",x,sqrt(x));
    break;
    default:printf("hatali giris yaptiniz");
}
    return 0;
}
