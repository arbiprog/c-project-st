#include <stdio.h>
int main() {
  

char str[30];

printf("your name :");
scanf("%s", &str);
 
 
FILE* mhd = fopen("names.txt","a");
 fprintf(mhd , "%s \n", str);
fclose(mhd);





  
  return 0;
}; 