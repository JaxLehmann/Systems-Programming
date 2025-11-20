#include <stdio.h>

/* Define your function here */
int MaxNumber(int n1, int n2, int n3, int n4) {
  int max = n1;

  if (n2 > max)
    max = n2;
  if (n3 > max)
    max = n3;
  if (n4 > max)
    max = n4;

  return max;
}

int MinNumber(int n1, int n2, int n3, int n4) {
  int min = n1;

  if (n2 < min)
    min = n2;
  if (n3 < min)
    min = n3;
  if (n4 < min)
    min = n4;

  return min;
}

int main(void) {

  /* Type your code here. Your code must call the function.  */
  int num1;
  int num2;
  int num3;
  int num4;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);

  MaxNumber(num1, num2, num3, num4);
  MinNumber(num1, num2, num3, num4);

  printf("Maximum is %d\n", MaxNumber(num1, num2, num3, num4));
  printf("Minimum is %d\n", MinNumber(num1, num2, num3, num4));

  return 0;
}