/* 
 * Author:  Luke Hindman
 * Date: Thu 24 Sep 2020 12:35:45 PM PDT
 * Description: Demostrate allocating a large global array
 */
#include <stdio.h>

/* Allocate 1GB char array */
char bigGlobalData[1024 * 1024 * 1024];

int main(void) {

   printf("The size of bigData is: %ld\n", sizeof(bigGlobalData));

   return 0;
}
