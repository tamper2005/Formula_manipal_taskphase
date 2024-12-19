#include <stdio.h>

int main() {
   int arr[] = {1, 8, 7, 7, 5};
   int  largest, second;

   if(arr[0] > arr[1]){
      largest=arr[0];
      second =arr[1];
   } 
   else{
      largest =arr[1];
      second  =arr[0];
   }

   for(int i = 2; i < 5; i++){
      if( largest <arr[i] ) {
         second =largest;
         largest =arr[i];
      } 
      else if( second < arr[i] ) {
         second=  arr[i];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}