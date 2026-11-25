# Data Buku Struct

A C exercise on `struct` and pointers: it stores one book record and displays it.

## What it does
1. Reads the book title, author and publication year (titles and names can contain spaces)
2. Stores them in a `struct Buku`
3. Prints the record through a function that takes a pointer to the struct

```c
struct Buku {
    char judul[50];
    char penulis[50];
    int tahun_terbit;
};
```

## Example
```
Laskar Pelangi
Andrea Hirata
2005
BERHASIL MENYIMPAN DATA BUKU:
 Judul: Laskar Pelangi
 Penulis: Andrea Hirata
 Tahun Terbit: 2005
```

## Build and run
The project file is for Code::Blocks (`Faktorial.cbp`). You can also build it with GCC:

```bash
gcc main.c -o buku.exe
buku.exe
```
