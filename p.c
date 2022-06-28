#include<stdio.h>




struct book {
  int isbn;
  char writer[30];
};





int main(){
  struct book b1; b1.isbn=809; strcpy(b1.writer, "ibn khadoon");


  printf("%i \t %s" ,b1.isbn, b1.writer);




  return 0;  
};