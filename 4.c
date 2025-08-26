#include <stdio.h>

// Reverse An Array

void revArr(int *array,int length){
       int temp; 
       int middle = length/2; 
       for(int i = 0 ; i < middle ; i++){
               temp = array[i]; 
               array[i] = array[length-1-i]; 
               array[length-1-i] = temp; 
       }
}

void Print_array(int *array,int length){
        for(int i =  0 ; i < length ; i++){
               printf("%d\t",array[i]); 
        }
        printf("\n"); 
}

int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int rev_arr[] = revArr(arr, (sizeof arr / sizeof arr[0]));
  Print_array(rev_arr, (sizeof rev_arr / sizeof rev_arr[0]));
  return 0;
}
