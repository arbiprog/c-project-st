#include <stdio.h>
int main() {
  
char ml[20];
FILE * mhd = fopen("index.txt","r");

fgets(ml ,20 , mhd);

fclose(mhd);

printf("%s",ml);
  return 0;
}; 