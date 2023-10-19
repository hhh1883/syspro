#include <stdio.h>
#define MAXLINE 80
    int main(int argc, char *argv[])
    {
        FILE *fp;
        int line = 0;
        char buffer[MAXLINE];
        int c;

        if (argc < 2)
            fp = stdin;
        else fp = fopen(argv[1],"r");

       c = getc(fp);
       while (c!= EOF) {
           putc(c, stdout);
           c = getc(fp);
       }
       while (fgets(buffer, MAXLINE,fp) != NULL) {
         line++;
         printf("%3d %s", line, buffer);
       }

       fclose(fp);
       return 0;

   }

