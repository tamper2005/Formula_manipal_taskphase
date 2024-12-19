#include<stdio.h>
#include<math.h>
int main(){
    int seconds;
    printf("Enter the amount of seconds : %d" , seconds);
    scanf("%d", &seconds);
    printf( "In hours :%d\n", seconds/3600);
    printf ("In minutes :%d\n", (seconds%3600)/60);
    printf ("In secound : %d\n",(seconds%3600)%60 );
    return 0;
}