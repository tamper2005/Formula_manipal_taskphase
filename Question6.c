#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void countvowel();
void scramble();
int vcount=0,ccount=0;
char str[100];

int main(){
    printf("Enter a string\n");
    fgets(str,100,stdin);
    countvowel(vcount,ccount);
    printf("no of vowels\n :%d",vcount);
 printf("\nno of consonant \n: %d", ccount);
    scramble(str);
return 0;
}
void countvowel(){
    for(int i=0;str[i]!='\0';i++){
    char ch= str[i];
   if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
      vcount++;
      
   }
   else{
    ccount++;
   }
}
}
void scramble(){
    int i,j;
    char temp;
    for(i=0;i<strlen(str);i++){
        j=rand()%strlen(str); 
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\nscrambled string is %s",str);

}

