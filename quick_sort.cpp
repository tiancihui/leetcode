#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *array, int len){
  if (len <= 1) {
     return;
  }

  int now_data = array[0];
  int begin = 0;	 
  int end  = len - 1;
  while(begin < end){
     while (array[end] > now_data && begin < end){
	    end--;
	 }  

	 array[begin] = array[end];
     
	 while (array[begin] < now_data && begin < end){
	    begin++;
	 }  
	 
	 array[end] = array[begin];
  } 
   
   array[begin] = now_data;
  
   quick_sort(array, begin);
   quick_sort(array + begin + 1, len - begin - 1);
}

int main(){
  int array[] = {1,3,5,7,9,2,4,6,8,10};
  int len = 10;
  quick_sort(array, len); 
  for (int i =0 ;i < 10 ; i++){
    printf("%d\r\n", array[i]);
  }
  return 0;
}

