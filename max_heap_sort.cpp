#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int*b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void change(int* array, int n, int len){
   int j = 2*n + 1;
    while(j < len){
        if (j+1 < len && array[j+1] > array[j]){
            j = j + 1;
        }
        
        if (array[n] < array[j]) {
           swap(array+n, array+j);        
        }else{
           break;
        }
        
        n = j;
        j = 2*j + 1;
    }
}

int heap_sort(int* array, int len){
    
    for(int i = len/2; i >= 0; i--){
        change(array, i, len);
    }
    
    for(int i = len - 1; i >= 0; i--){
       swap(array, array+i);  
       change(array, 0, i); 
    }
    
    for(int i = 0; i < len; i++){
       printf("%d ", array[i]);
    }
    

    return 0;
}

int main(){
   int array[] = {1,3,5,7,9,2,4,6,8} ;
   heap_sort(array, 9); 
   return 0;  
}

