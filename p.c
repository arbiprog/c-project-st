#include<stdio.h>
// وضع الهيكلة العامة للبنية
struct book{
  int isbn;
  char sect;
};



int main (){

//إدخال المعطيات 
struct book b1;
b1.isbn=12367;
b1.sect='A';


//عرض البيانات
printf("%i \t %c", b1.isbn , b1.sect);

  return 0;
};


