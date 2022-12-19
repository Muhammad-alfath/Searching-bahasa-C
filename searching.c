1.	Linear Search

#include <stdio.h>

int linearSearch(int data[],int datayangdicari){

  //looping untuk mencari datanya
  int bykdata;
    for(int i= 0; i<bykdata;i++){
      if(data[i]==datayangdicari)return i;
    }

  return -1;
}

int main (){
  int data[5]={3, 7, 10, 16, 22}; //data
  int indexSearch = linearSearch(data,7); //(data, angka yang dicari)

  if(indexSearch == -1){
  printf("Data yang diinput tidak dapat ditemukan dalam array.\n");
  }
  else{
  printf("Data %d ditemukan dalam array.\n",data[indexSearch]);
  }
  return 0;
}
