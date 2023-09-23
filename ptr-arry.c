#include <stdio.h>
#define LEN 10
//arr and &arr[]
int main(void) {
  int arr[LEN]={0};
  printf("arr:%p\n", arr);
  printf("&arr[0]:%p\n", &arr[0]);

  //ptr and &arr[]
  int *p=arr;
  int i;
  for(i=0;i<LEN;i++){
    printf("&arr[%d]:%p\n",i,&arr[i]);
    printf("ptr + %d:%p\n",i,p+i);  
  }
    
  return 0;
}