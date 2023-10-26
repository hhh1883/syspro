#include <stdio.h>
#include "stock.h"
int main(int argc, char *argv[])
	{
	FILE *fp;
	int c;
	int n;
	if (argc < 2)
	fp = stdin;
	else  fp = fopen(argv[1],"r");
	scanf("%d",&n);
	if(n = 0) {
	c = getc(fp);
	while(c != EOF) {
	putc(c, stdout);
	c = getc(fp);
	}
	fclose(fp);
	}
	else if (n = 1) {
		
	return 0;
}

