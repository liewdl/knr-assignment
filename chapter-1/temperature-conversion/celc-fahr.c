#include <stdio.h>

int main() {	
	int celcius;
	printf("%s %s\n", "Celcius", "Fahrenheit");	
	for(celcius = 0; celcius <= 300; celcius = celcius + 20){
		printf("%5d %8.0f\n", celcius, (celcius * 1.8) + 32);
	}
}
