#include <stdio.h>

int main() {
	int b, c;

	while((c = getchar()) != EOF) {
		if(c == ' ' && b == ' ') {
			continue;
		}
		else {
			putchar(c);
		}
		b = c;
	}
}
