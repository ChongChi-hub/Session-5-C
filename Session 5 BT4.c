#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so duong tu 1 den 10: ");
    scanf("%d", &n);
    
    for(int i = 1; i < 11; i++ ){
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}