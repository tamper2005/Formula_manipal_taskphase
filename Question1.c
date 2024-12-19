#include<stdio.h>

int main()
{
int a,b,c;
printf ("Enter the value of a: ");
scanf("%d", &a);
printf ("Enter the value of b: ");
scanf("%d", &b);
printf ("Enter the value of c: ");
scanf("%d", &c);
int d = a+b+c;
printf("sum of three no is = %d \n", a+b+c);
if (d%2==0 && d!=0){
    printf("the no is even \n");}
    else if (d==0){
        printf("the no is neither odd nor even");
    }
    else {
        printf("the no is odd\n");
        }
    if (d==1){
      printf("%d is neither prime nor composite");
         }
 for (int i=2;i<d;i++){
        
         if (d%i ==0){
                printf("%d is a composite no \n", d);
             break;
            }
         else{ 
                printf("%d is a prime no \n", d);
                break;
             }
             
        }

return 0;
}