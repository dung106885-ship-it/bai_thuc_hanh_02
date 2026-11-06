#include <stdio.h>
#include <stdlib.h>
void nhap(float a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Nhap ptu thu %d: ", i);
        scanf("%f", a + i);
    }
}
void in(float a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%8.2f", *(a + i));
    }
}
int main() {
    float *a;
    int n;
    do {
        printf("Nhap so phan tu: ");
        scanf("%d", &n);
    } while(n <= 0 || n > 100);
    a = (float*)malloc(n * sizeof(float));
    nhap(a, n);
    printf("\nMang ban dau:\n");
    in(a, n);

    free(a);

    return 0;
}

