#include <stdio.h>
#include <string.h>

/* Dinh nghia kieu du lieu SACH */
struct Sach {
    char maSach[20];
    char tieuDe[50];
    char tacGia[50];
    int namXuatBan;
    float giaBan;
    int soTrang;
    char nhaXuatBan[50];
    char loaiSach[30];
};

typedef struct Sach SACH;

/* Ham nhap 1 quyen sach */
void nhap1Sach(SACH *s) {
    fflush(stdin);
    printf("Ma sach: ");
    gets(s->maSach);

    printf("Tieu de: ");
    gets(s->tieuDe);

    printf("Tac gia: ");
    gets(s->tacGia);

    printf("Nam xuat ban: ");
    scanf("%d", &s->namXuatBan);

    printf("Gia ban: ");
    scanf("%f", &s->giaBan);

    printf("So trang: ");
    scanf("%d", &s->soTrang);

    fflush(stdin);
    printf("Nha xuat ban: ");
    gets(s->nhaXuatBan);

    printf("Loai sach: ");
    gets(s->loaiSach);
}

/* Ham xuat 1 quyen sach */
void xuat1Sach(SACH s) {
    printf("%-10s %-20s %-15s %-6d %-10.2f %-8d %-15s %-10s\n",
           s.maSach, s.tieuDe, s.tacGia,
           s.namXuatBan, s.giaBan,
           s.soTrang, s.nhaXuatBan, s.loaiSach);
}

/* Ham nhap n quyen sach */
void nhapNSach(SACH a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap sach thu %d:\n", i + 1);
        nhap1Sach(&a[i]);
    }
}

/* Ham xuat n quyen sach */
void xuatNSach(SACH a[], int n) {
    printf("\n%-10s %-20s %-15s %-6s %-10s %-8s %-15s %-10s\n",
           "Ma", "Tieu de", "Tac gia", "Nam",
           "Gia", "Trang", "NXB", "Loai");
    for (int i = 0; i < n; i++) {
        xuat1Sach(a[i]);
    }
}

int main() {
    SACH ds[100];
    int n;

    printf("Nhap so luong sach: ");
    scanf("%d", &n);

    nhapNSach(ds, n);
    xuatNSach(ds, n);

    return 0;
}

