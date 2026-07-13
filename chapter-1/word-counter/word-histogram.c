#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
	int c, i, j, state, ch;
	int word_len[10];
	
	ch = 0;
	state = OUT;

	for(i = 1; i < 11; i++) {
		word_len[i] = 0;
	}
	
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			++word_len[ch];
			ch = 0;
		}

		else if(state = OUT) {
			state = IN;
		}

		else if(state = IN) {
			++ch;
		}
	}
		
	printf("\n");

	for(i = 1; i < 11; i++) {
		printf("%d ", i);
		
		for(j = 0; j < word_len[i]; j++) {
			printf("🮑");
		}

		printf("\n");
	}

	printf("\n");
}
