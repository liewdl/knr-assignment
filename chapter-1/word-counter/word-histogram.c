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

			if(ch >= 10) {
				++word_len[10];
			}

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
		
		if(i == 10) {
			printf("10+ ");
		} 
		
		else { 
			printf("%2d ", i);
		}	
		
		for(j = 0; j < word_len[i]; j++) {
			printf("🮑");
		}
		
		if(word_len[i] != 0) {
			printf(" (%d)", word_len[i]);
		}
		
		printf("\n");
	}

	printf("\n");
}
