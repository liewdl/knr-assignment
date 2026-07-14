#include <stdio.h>

int main() {
	int c, i, j;
	int characters[26];

	for(i = 0; i < 26; i++) {
		characters[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			if(c > 90) {
				c = c - 32;
			}
			++characters[c - 65];
		}
	}

	printf("\n");

	for(i = 0; i < 26; i++) {
		printf("%c/%c ", i + 65, i + 97);

		for(j = 0; j < characters[i]; j++) {
			printf("🮑");
			
			if(j == characters[i] - 1) {
				printf(" (%d)", characters[i]);
			}
		}

		printf("\n");
	} 

	printf("\n");
}
