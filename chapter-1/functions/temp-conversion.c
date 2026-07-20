#include <stdio.h>

float ftoc(float f);
int ctof(int c);

int main() {

	int i = 0;
	int opt = 0;

	while(opt != '1' && opt != '2') { 
		printf("\e[1J\e[H");

		printf("\nWhat kind of conversion do you wish to perform?\n");
		printf("1. Fahrenheit to Celcius\n");
		printf("2. Celcius to Fahrenheit\n\n");
		printf("Type 1 or 2, then press ENTER: ");
		
		opt = getchar();
	}

	if(opt == '1') {
		printf("\n");
		
		for(i = 0; i <= 300; i = i + 20) {
			printf("%10d°F %6.2f°C\n", i, ftoc(i));
		}	

		printf("\n");
	}
	
	else {
		printf("\n");
		
		for(i = 0; i <= 300; i = i + 20) {
			printf("%12d°C %3d°F\n", i, ctof(i));
		}

		printf("\n");
	}
}

float ftoc(float f) {
	return (f - 32) / 1.8;
}

int ctof(int c) {
	return (c * 1.8) + 32;
}
