#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 9;
   int userValues[NUM_ELEMENTS];    

   int num;
   int i = 0;

   scanf("%d", &num);

   while (num >= 0) {
      if (i >= NUM_ELEMENTS) {
         printf("Too many numbers\n");
         return 0;   // exit program early
      }

      userValues[i] = num;
      i++;
      scanf("%d", &num);
   }

   int middleIndex = i / 2;
   printf("Middle item: %d\n", userValues[middleIndex]);

   return 0;
}