#include <stdio.h>

int tim_max(int arr[], int kich_thuoc) {
    int max = arr[0];
    for (int i = 1; i < kich_thuoc; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 7, 2, 8, 1, 9, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);
    int so_lon_nhat;

    so_lon_nhat = tim_max(mang, kich_thuoc);

    printf("So lon nhat trong mang la: %d\n", so_lon_nhat);

    return 0;
}

