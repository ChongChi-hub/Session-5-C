#include <stdio.h>

int main()
{
    int a, b, menu = 1, choose;
    float thuong;
    printf("Nhap 2 so bat ki: ");
    scanf("%d %d", &a, &b);
    printf("=========Calculator=========\n");
    printf("1. Tong 2 so.\n");
    printf("2. Hieu 2 so.\n");
    printf("3. Tich 2 so.\n");
    printf("4. Thuong 2 so.\n");
    printf("5. Thoat.\n");
    
    while(menu){
    printf("Lua chon cua ban: ");
    scanf("%d", &choose);
    
    if(choose == 1){
    printf("Tong cua %d va %d la %d\n", a, b, a + b);
    }else if(choose == 2){
    printf("Hieu cua %d va %d la %d\n", a, b, a - b);
    } else if(choose == 3){
    printf("Tich cua %d va %d la %d\n", a, b, a * b);
    } else if(choose == 4){
        float c, d;
        if(b != 0){
            thuong = (float)a / b;
            printf("Thuong cua %d va %d la %.2f\n", a, b, thuong);
        } else{
            printf("khong the chia cho 0\n");
        }
    } else if(choose == 5){
        printf("Thoat may tinh!!!");
        menu = 0;
    }
    }
    return 0;
}
