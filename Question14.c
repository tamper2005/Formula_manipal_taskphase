#include <stdio.h>
int f(int num);


int main()
{
    int num;
    int fibonacci;
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &num);
    
    fibonacci = f(num); 
    
    printf("%d fibonacci term is %d", num, fibonacci);
    
    return 0;
}

int f(int num) 
{
    if(num == 0)      
        return 0;
    else if(num == 1)
    return 1;
    else {
        return f(num-1) + f(num-2); }
}