#include<stdio.h>

int main()
{
    int a, b, boichung;
    do
    {
    printf("Hay nhap 2 so nguyen duong bat ki: ");
    scanf("%d %d", &a, &b);
    
    if (a < 0 || b < 0){
            printf("Hay nhap so nguyen duong!\n");
        }
    } while(a < 0 && b < 0);
    for (int i = 1; i <= 100; i++){
        if( i % a == 0 && i % b == 0){
            boichung = i;
            break;
        }

    }
    printf("BCNN cua %d va %d la %d", a, b, boichung);
    
    return 0;
}