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
}
