#include <stdio.h>

struct Buku {
    char judul[50];
    char penulis[50];
    int tahun_terbit;
};

void tampilkanDataBuku(struct Buku *data) {
printf(" Judul: %s\n Penulis: %s\n Tahun Terbit: %d\n", data->judul, data->penulis, data->tahun_terbit);
}

int main() {
struct Buku book1;
scanf("%[^\n]s", book1.judul);
    scanf(" %[^\n]s", book1.penulis);
    scanf("%d", &book1.tahun_terbit);
printf("BERHASIL MENYIMPAN DATA BUKU:\n");
tampilkanDataBuku(&book1);
return 0;
}
