
#include <stdio.h> 
#include "store.h"

int main(int argc, char* argv[]) { 
   struct store rec;
   FILE *fp;
   if (argc != 2) {
      fprintf(stderr, "How to use: %s FileName\n", argv[0]);
      return 1; 
   }
   fp = fopen(argv[1], "r");
   printf("%-1s %-11s %-6s %-4s %-3s\n", "id","name","category", "date", "stock"); 
   while (fscanf(fp,"%d %s %s %d %d", &rec.id, rec.name, rec.category, &rec.date, &rec.stock)==3) 
      printf("%10d %6s %6s %4s %3s\n", rec.id, rec.name, rec.category, rec.date, rec.stock);
   fclose(fp);
   return 0;
} 
