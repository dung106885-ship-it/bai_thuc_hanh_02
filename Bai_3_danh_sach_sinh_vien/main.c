#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char hoten[30];
    int masv;
    float d1, d2, d3;
} SV;
void nhap(SV *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        scanf(" %29[^\n]", (a + i)->hoten);
        printf("Ma sinh vien: ");
        scanf("%d", &(a + i)->masv);
        printf("Diem 1: ");
        scanf("%f", &(a + i)->d1);
        printf("Diem 2: ");
        scanf("%f", &(a + i)->d2);
        printf("Diem 3: ");
        scanf("%f", &(a + i)->d3);
    }
}
float dtb(SV x) {
    return (x.d1 + x.d2 + x.d3) / 3;
}
void in(SV *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nHo ten: %s", (a + i)->hoten);
        printf("\nMa SV: %d", (a + i)->masv);
        printf("\nDiem 1: %.2f", (a + i)->d1);
        printf("\nDiem 2: %.2f", (a + i)->d2);
        printf("\nDiem 3: %.2f", (a + i)->d3);
        printf("\nDiem trung binh: %.2f\n", dtb(*(a + i)));
    }
}
int main() {
    SV *a;
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("So sinh vien khong hop le!");
        return 0;
    }
    a = (SV*)malloc(n * sizeof(SV));
    if(a == NULL) {
        printf("Khong du bo nho!");
        return 0;
    }
    nhap(a, n);
    printf("\nDANH SACH SINH VIEN\n");
    in(a, n);
    free(a);
    return 0;
}

