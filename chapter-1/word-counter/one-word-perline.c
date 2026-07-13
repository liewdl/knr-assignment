#include <stdio.h>

int main() {
	int c, prev;

	while((c = getchar()) != EOF) {
		if((prev == ' ' || prev == '\t') && (c == ' ' || c == '\t')) {
			continue;
		}
		if(prev == ' ' || prev == '\t') {
			printf("\n");
		}
		putchar(c);
		prev = c;
	}
}
