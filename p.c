#include<stdio.h>




struct book {
  int isbn;
  char writer[30];
};





int main(){

struct book b1={5797 ,"ibn tofail"};

  printf("%i \t %s" ,b1.isbn, b1.writer);




  return 0;  
};