#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        /* your code goes here */
          
 if (array[6]<5){
    i++;
    continue;
 }else if (array[i]<10){
    printf("%i \n", array[i]);
    i++;
 }else{
    break;
 };
     
    }
    return 0;
}