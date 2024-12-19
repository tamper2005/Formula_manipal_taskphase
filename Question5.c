#include <stdio.h>
int main (){    
    int arr[20],n;  
    printf (" Define the number of elements in an array: \n");  
    scanf (" %d", &n);  
    printf ("  Enter %d elements of an array: \n ", n);   
    for ( int i = 0; i < n; i++){  
        scanf (" %d", &arr[i]);  
    }    
    for ( int i = 0; i < n; i ++)  {  
        for ( int j = i + 1; j < n; j++){  
            if ( arr[i] == arr[j]){   
                for ( int k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                n--;                            
            }          
        }  
    }  
    printf (" New array:\n ");   
    for (int i = 0; i < n; i++){  
        printf (" %d \t", arr[i]);  
    }  
    return 0;
}