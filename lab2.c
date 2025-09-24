#include <stdio.h>

int recursion(int n) {
    if (n == 1) {
        return 1;
    }
    return n * recursion(n - 1);
}

int loopyboi(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    char boogly;
    int num, result;

    printf("Enter a number between 1 and 15: \n");
    scanf("%d", &num);

    while (num > 15 || num < 1) {
        printf("That is not a number between 1-15, please try again.\n");
        scanf("%d", &num);
    }

    getchar();

    printf("Would you like to use recursion?\n");
    printf("Enter Y or N:\n");
    scanf("%c", &boogly);

    if (boogly == 'Y' || boogly == 'y') {
        result = recursion(num);
    } else if (boogly == 'N' || boogly == 'n') {
        result = loopyboi(num);
    } else {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    printf("Factorial of %d is %d\n", num, result);
    
    
    
    return 0;
}


// Had to use ChatGPT for help with certain issues I could not fix.
