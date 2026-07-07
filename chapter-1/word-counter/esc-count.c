#include <stdio.h>

int main() {
	int c, blank, tab, nl;
	
	blank = 0;
	tab = 0;
	nl = 0;
	
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			++blank;
		} 
		else if(c == '\t') {
			++tab;
		}
		else if(c == '\n') {
			++nl;
		}
	}

	printf("\nBlank count: %d | ", blank);
	printf("Tab count: %d | ", tab);
	printf("Line count: %d\n", nl);
}
