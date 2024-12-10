#include <stdio.h>

long long tinh_giai_thua(int n) {
    long long giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong co giai thua cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", so, tinh_giai_thua(so));
    }

    return 0;
}
