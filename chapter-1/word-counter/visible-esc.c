#include <stdio.h>

int main() {
	int c;
	c = 0;

	while((c = getchar()) != EOF) {
		if(c == 9) {
			printf("\\t");
		}
		else if(c == 10) {
			printf("\\n\n");
		}
		else if(c == 32) {
			printf("␣");
		}
		else if(c == 92) {
			printf("\\\\");
		}
		else {
			putchar(c);
		}
	}
}
