#include <stdio.h>

/* print Celsius-Fahrenheit table
	for fahr = 0, 20, ..., 300; floating-point version */

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	celsius = upper;
	printf("Celsius-fahrenheit table\n");
	while (celsius >= lower) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius - step;
	}
	
}
