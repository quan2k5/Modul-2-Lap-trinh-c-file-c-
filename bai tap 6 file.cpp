#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char hoTen[100];
    int tuoi;
    char soDienThoai[20];
    char email[50];
};

int main() {
    FILE *fileStudents;
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    fileStudents = fopen("students.txt", "w");
    if (fileStudents == NULL) {
        fprintf(stderr, "Loi khi mofile students.txt d? ghi.\n");
        return 1;
    }
    struct SinhVien danhSachSinhVien[n];
    for (int i = 0; i < n; ++i) {
        printf("Nhap th�ng tin sinh vi�n %d:\n", i + 1);
        printf("H? v� t�n: ");
        scanf(" %[^\n]s", danhSachSinhVien[i].hoTen);
        printf("Tuoi: ");
        scanf("%d", &danhSachSinhVien[i].tuoi);
        printf("so dien thoai: ");
        scanf(" %[^\n]s", danhSachSinhVien[i].soDienThoai);
        printf("Email: ");
        scanf(" %[^\n]s", danhSachSinhVien[i].email);
        fprintf(fileStudents, "%s %d %s %s\n",
                danhSachSinhVien[i].hoTen,
                danhSachSinhVien[i].tuoi,
                danhSachSinhVien[i].soDienThoai,
                danhSachSinhVien[i].email);
    }
    fclose(fileStudents);

    printf("Th�ng tin sinh vi�n d� duoc nhap v� luu v�o file students.txt.\n");

    return 0;
}

