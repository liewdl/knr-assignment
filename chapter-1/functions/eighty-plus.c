#include <stdio.h>
#define MAXLINE 1000

int main() {
	int c, j;
	int i = 0;
	char line[MAXLINE];

	while((c = getchar()) != EOF) {
		if(c != '\n') {
			line[i] = c;
			++i;
		} 
		
		else if(c == '\n') {
			line[i] = c;
			++i;
			
			line[i] = '\0';
			
			if(i > 80) {
				printf("%s", line);
			}
			
			i = 0;
		}
	}

	return 0;
}
