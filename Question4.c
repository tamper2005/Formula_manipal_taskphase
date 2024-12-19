 #include <stdio.h>

int main() {
  int correctpassward;
  for (int i = 1; i <= 3; i++) {
    printf("enter the password(Numeric value) \n");
    scanf("%d", &correctpassward);
    if (correctpassward == 1234) {
      printf("Passward is correct\n");
      break;
    }
    else {
      printf("passward is incorrect\n Retry \n");
    }
    
  }
  
  return 0;
}