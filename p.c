#include<stdio.h>


struct book{
  int isbn;
  char writer;

};



int main() {


struct book b1;
b1.isbn=1234;
b1.writer='l';


printf("%i \t %c", b1.isbn ,b1.writer);


  return 0;
};


