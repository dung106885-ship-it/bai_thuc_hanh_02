#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char hoten[30];
    int masv;
    float d1, d2, d3;
}Data;
void nhap(Data *a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("Nhap ho ten: ");
        scanf(" %29[^\n]", (a+i)->hoten);
        printf("Nhap ma sv: ");
        scanf("%d", &(a+i)->masv);
        printf("Nhap diem mon 1: ");
        scanf("%f", &(a+i)->d1);
        printf("Nhap diem mon 2: ");
        scanf("%f", &(a+i)->d2);
        printf("Nhap diem mon 3: ");
        scanf("%f", &(a+i)->d3);
    }
}
void in(Data *a, int n){
    int i;
    for(i=0; i<n; i++)
        printf("%s, %d, %.2f, %.2f, %.2f\n",
            (a+i)->hoten, (a+i)->masv,
            (a+i)->d1, (a+i)->d2, (a+i)->d3);
}
int main(){
    Data *a;
    int n;
    do{
        printf("Nhap so sinh vien: ");
        scanf("%d", &n);
    }
	while(n <= 0 || n > 100);
    a=(Data*) malloc(n*sizeof(Data));
    nhap(a, n);
    printf("\nDL ban dau\n");
    in(a, n);
    free(a);
    a = NULL;
}
