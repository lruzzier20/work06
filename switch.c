#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int arr[10];
  arr[0]=0;
  srand(time(NULL));
  for(int i=1;i<10;i++){
    arr[i]=rand();
  }
  for(int j=0;j<10;j++){
    printf("arr[%d]=%d\n",j,arr[j]);
  }
  int arr2[10];
  int* ap=&arr;
  int* ap2=&arr2;
  printf("-------------------\n");
  for(int k=0;k<10;k++){
    ap2[k]=ap[9-k];
  }
  for(int l=0;l<10;l++){
    printf("arr2[%d]=%d\n",l,*(ap2+l));
  }
}
