#include <stdio.h>




/*int failing(int n[]) {
	double average = 0;
	int total = 0;
	int sum = 0;
	for (int i = 0; i < sizeof(n); i++) {
		if (n[i] < 70) {
			sum++;
		}
		total += n[i];
	}
	average = (total / sizeof(n);
	printf("Average: %lf\n", average);
	printf("Failed: %d\n", sum);
}

int main() {
	int variable;
	int amount;
	int grades[] = grades[amount];
	printf("Enter amount of grades: \n");
	scanf("%d", &amount);
	
	for (int i = 0; i < amount; i++) {
		printf("Enter grade: %d\n", variable);
		variable = scanf("%d", &grades[i]);
	}
	printf("failing(grades[])");
	
}
*/

#include <stdio.h>

void failing(int n[], int length) {
    double average = 0;
    int sum = 0;
    int total = 0;

    for (int i = 0; i < length; i++) {
        if (n[i] < 70) {
            sum++;
        }
        total += n[i];
    }

    average = (double)total / length;
    printf("Average: %.2lf\n", average);
    printf("Failed: %d\n", sum);
}

int main() {
    int amount;

    printf("Enter amount of grades: ");
    scanf("%d", &amount);


    int grades[amount];

    for (int i = 0; i < amount; i++) {
        printf("Enter grade: ");
        scanf("%d", &grades[i]);
    }

    failing(grades, amount);

    return 0;
}

