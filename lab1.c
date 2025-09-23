#include <stdio.h>
#define PI 3.14159

int main(void) {
	double innerDiam;
	double outerDiam;
	double matDens;
	int thickness;
	int quantity;

	printf("Please enter the inner diamater in centimeters:\n");
	scanf("%lf", &innerDiam);

	printf("Please enter the outer diameter in centimeters:\n");
	scanf("%lf", &outerDiam);

	printf("Please enter the density in (grams/cm^3):\n");
	scanf("%lf", &matDens);

	printf("Please enter the thickness in centimeters:\n");
	scanf("%d", &thickness);

	printf("Please enter the quantity manufactured:\n");
	scanf("%d", &quantity);
	
	double area = (PI * ((outerDiam)/2) * (outerDiam/2)) - (PI * ((innerDiam)/2) * (innerDiam/2));
	double volume = area * thickness;
	double weight = volume * matDens;
	printf("This is the rim area: %lf\n", area);
	printf("The weight a flat  washer is %lf\n", weight);

	double batch = weight * quantity;
	printf("The weight of a batch of washers is: %lf\n", batch);

return 0;

}
