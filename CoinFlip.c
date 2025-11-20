#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CoinFlip(char *decisionString) {
  int n = rand() % 2; // generate 0 or 1

  if (n == 0) {
    strcpy(decisionString, "Tails");
  } else {
    strcpy(decisionString, "Heads");
  }
}

int main(void) {
  srand(2);

  int flips;
  scanf("%d", &flips);

  char result[10];

  for (int i = 0; i < flips; i++) {
    CoinFlip(result);
    printf("%s\n", result);
  }

  return 0;
}