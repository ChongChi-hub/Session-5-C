#include <stdio.h>

int main()
{
    int n;
    while(1){
        printf("Hay nhap mot so ngau nhien tu 1 den 10: ");
        scanf("%d", &n);
        if(n == 5){
            printf("Ban dung roi!!! ");
            break;
        } else if (n < 1 || n > 10){
            printf("So nhap khong hop le!!! ");
        } else {
            printf("Ban nhap sai roi!!! ");
        }
    }
    

    return 0;
}
