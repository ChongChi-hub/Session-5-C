#include<stdio.h>

int main()
{
    int a, b, uocchung;
    do
    {
    printf("Hay nhap 2 so nguyen duong bat ki: ");
    scanf("%d %d", &a, &b);
    
    if (a < 0 || b < 0){
            printf("Hay nhap so nguyen duong!\n");
        }
    } while(a < 0 && b < 0);
    for (int i = 1; i <= 100; i++){
        if( a % i == 0 && b % i == 0){
            uocchung = i;
        }

    }
    printf("UCLN cua %d va %d la %d", a, b, uocchung);
    
    return 0;
}
