2.	Binary Search

#include <stdio.h>

int binarySearch(int array[], int CariAngka, int left, int right) {
  if (right >= left) {
    int mid = left + (right - left) / 2;

    // Jika menemukan angka tengah maka return mid
    if (array[mid] == CariAngka)
      return mid;

    // Cari angka pada bagian kiri
    if (array[mid] > CariAngka)
      return binarySearch(array, CariAngka, left, mid - 1);

    // Cari angka pada bagian kanan
    return binarySearch(array, CariAngka, mid + 1, right);
  }

  return -1;
}

int main() {
  int array[] = {2, 5, 13, 16, 20, 26, 31};
  int n = sizeof(array) / sizeof(array[0]);
  int CariAngka = 20; //angka yang ingin dicari
  int hasil = binarySearch(array, CariAngka, 0, n - 1);

  if (hasil == -1){
    printf("Data yang diinput tidak dapat ditemukan.\n");
  }
  else{
    printf("Angka %d ditemukan pada index %d.\n", CariAngka, hasil);
  }

  return 0;
}
