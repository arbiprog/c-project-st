#include <stdio.h>
int main(){
  void fun (char name[] , int age){printf("مرحبا %s أنت في %i ربيعا \n", name, age) ;};
  
  char names[][20]= {"طه","علي","طلحة","مالك"};
  char ages[]={16,20,40,50};

  for (int i = 0; i < 4; i++)
  {
    /* code */
  fun(names[i],ages[i]);
  }
  
  
  
  
  
};