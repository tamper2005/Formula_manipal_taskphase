#include <stdio.h>

void slab1();
void slab2();
void slab3();
int powerconsumed;

int main(){
  printf("Enter the power consumed in unit:%d", powerconsumed);

  scanf("%d", &powerconsumed);
  if (powerconsumed <= 100){
    slab1();
  }
  else if (powerconsumed>=101 && powerconsumed<=300){
    slab2();
  }
  else {
    slab3();
  }
  return 0;
  
}

void slab1()
{
  int a;
  printf("%d\n", powerconsumed*5);
}
void slab2()
{
    printf("%d\n", 100*5+(powerconsumed-100)*8);
}
void slab3()
{
  printf("%d\n" , 100*5+(powerconsumed-100)*8+(powerconsumed-300)*10-(powerconsumed-300)*8);
}
