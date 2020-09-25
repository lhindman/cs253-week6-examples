/* 
 * Author:  Luke Hindman
 * Date: Fri 25 Sep 2020 10:01:31 AM PDT
 * Description: Demonstrate working with array addresses
 */
#include <stdio.h>
#include <string.h>

int main(void) {

   char nameBuffer[19+1];
   int numberBuffer[20];
   
   /* Check the number of bytes allocated to each array,
    *   notice that more memory is allocated for numberBuffer
    *   than for nameBuffer even though they have the 
    *   same number of elements */
   printf("The size of nameBuffer is: %ld\n", sizeof(nameBuffer));
   printf("The size of nameBuffer is: %ld\n", sizeof(numberBuffer));
   printf("-------------------------------------\n");

   /* Populate the arrays with data */
   strncpy(nameBuffer,"Sir Mickey Mouse Sr", 20);

   for (int i = 0; i < 20; i++) 
   {
      numberBuffer[i] = i + 100;
   }

   /* Get the address of the first element of each array, store it to a variable
    *   and print it out.  This type of variable is called a pointer and 
    *   it is a primitive datatype in C.  Notice that the address of the first
    *   element is also the address of the array itself. */
   // char * nameStartPtr = &nameBuffer[0];
   // printf("Address of nameBuffer: %p\n", nameBuffer);
   // printf("Address of first element of nameBuffer: %p\n", nameStartPtr);
   // printf("Value of the first element of nameBuffer: %c\n", *nameStartPtr);

   // printf("\n");
   // int * numberStartPtr = &numberBuffer[0];
   // printf("Address of numberBuffer: %p\n", numberBuffer);
   // printf("Address of first element of numberBuffer: %p\n", numberStartPtr);
   // printf("Value of the first element of numberBuffer: %d\n", *numberStartPtr);
   // printf("-------------------------------------\n");

   /* Get the address of the last element of each array, store it to a variable
    *   and print it out. Again we're using pointers. */
   // char * nameEndPtr = &nameBuffer[19];
   // printf("Address of last element of nameBuffer: %p\n", nameEndPtr);
   // printf("Value of the last element of nameBuffer: %c\n", *nameEndPtr);

   // printf("\n");
   // int * numberEndPtr = &numberBuffer[19];
   // printf("Address of last element of numberBuffer: %p\n", numberEndPtr);
   // printf("Value of the last element of numberBuffer: %d\n", *numberEndPtr);
   // printf("-------------------------------------\n");

   /* Display the contents of the array without using index notation */
   // printf("Walk the name array using addresses (aka pointers)\n");
   // char * namePositionPtr = nameStartPtr;
   // while (namePositionPtr <= nameEndPtr) {
   //    printf("%c", *namePositionPtr++);
   // } 
   // printf("\n-------------------------------------\n");

   // printf("Walk the number array using addresses (aka pointers)\n");
   // int * numberPositionPtr = numberStartPtr;
   // while (numberPositionPtr <= numberEndPtr) {
   //    printf("%d ", *numberPositionPtr++);
   // } 
   // printf("\n-------------------------------------\n");


   return 0;
}
