/* 
 * Author:  Luke Hindman
 * Date: Thu 24 Sep 2020 12:35:45 PM PDT
 * Description: Demonstrate memory layout in C
 */
#include <stdio.h>
#include <stdlib.h>

/* Global array allocated in Data Segment */
char globalDataArray[80];
char globalString[] = "Hello World";

int main(void) {

   /* Local variables allocated in Stack Segment */
   char localString[] = "Hello World";
   int localInteger = 15;

   /* Dynamically allocated variables are allocated in Heap Segment */
   char * dynamicString = (char *) malloc(sizeof(char) * 80);

   
   printf("Address of the localString (Stack): %p\n", localString);
   printf("Address of the localInteger (Stack): %p\n", &localInteger);

   printf("Address of the dynamicString (Heap): %p\n", dynamicString);

   printf("Address of the globalDataArray (Data Segment): %p\n", globalDataArray);
   printf("Address of the globalString (Data Segment): %p\n", globalString);

   printf("Address of the main (Text Segment): %p\n", main);
   printf("Address of String Literal (Text or Data Segment): %p\n", &"Hello World");

   /* Library functions are provided in "shared objects" that are linked 
    *   into each process' address space */
   printf("Address of printf (Shared Object): %p\n", printf );
   printf("Address of scanf (Shared Object): %p\n", scanf);

   /* Every call to malloc requires a corresponding call 
    *   to free in order to prevent memory leaks.  In this case
    *   the program is about to exit, so probably not a huge
    *   deal, but it is a good habit to get into */
   free(dynamicString);

   return 0;
}
