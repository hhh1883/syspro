#include <stdio.h>
#include <string.h>
#include "copy.h"
char line[MAXLINE];
char longest[MAXLINE];
void copy(char from[], char to[]);


int main() 
{
	int len, max = 0;
	int n = 0;
	while (n < 5 && fgets(line,MAXLINE,stdin) != NULL) {
		len = strlen(line);
		if(len > max) {
			max = len;
			copy(line, longest);
		}
		n++;
	}
	if (max > 0)
	printf("%s", longest);

	return 0;

}

