#include<stdio.h>

void sumall(int arr[4][4]);
void diasum(int arr[4][4]); 
int main(){
    int arr[4][4];
    
    printf("enter matrix\n");
    for( int i=0;i<4;i++){
        for ( int j = 0; j<4; j++){
            printf("enter element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is :\n");
    for(int i=0;i<4;i++){
         for (int j = 0; j<4; j++){
            printf("%d ",arr[i][j]);
         }
          printf("\n");
    }
    printf("sum of all element :");
    sumall(arr);
    printf("\nsum of diagonal element :");
    diasum(arr);
    
    return 0;

}
void sumall(int arr[4][4]){
    int sum=0;
    for( int i=0;i<4;i++){
        for ( int j = 0; j<4; j++){
            sum=sum+arr[i][j];
        } 
    }
     printf("%d", sum);
}
void diasum(int arr[4][4]){
    int sum=0;
    for( int i=0;i<4;i++){
        for ( int j = 0; j<4; j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        } 
        printf("%d", sum);
    }
}