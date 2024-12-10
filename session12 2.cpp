#include <stdio.h>

int in_mang(int arr[], int kich_thuoc) {
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return kich_thuoc;
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int so_phan_tu;

    so_phan_tu = in_mang(mang, kich_thuoc);

    printf("Da in %d phan tu trong mang.\n", so_phan_tu);

    return 0;
}

