#include <stdio.h>

int kiem_tra_nguyen_to(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int so1, so2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    if (kiem_tra_nguyen_to(so1)) {
        printf("%d la so nguyen to.\n", so1);
    } else {
        printf("%d khong phai la so nguyen to.\n", so1);
    }

    if (kiem_tra_nguyen_to(so2)) {
        printf("%d la so nguyen to.\n", so2);
    } else {
        printf("%d khong phai la so nguyen to.\n", so2);
    }

    return 0;
}
