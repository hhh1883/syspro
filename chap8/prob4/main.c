 #include <stdio.h>
 #include <stdio.h>
 static void exit_handler1(void),exit_handler2(void);

 int main(void) 
 {
  if (atexit(exit_handler1) != 0)	
     perror("exit_handler1 등록할 수 없음");
  if (atexit(exit_handler2) != 0) 	
	 perror("exit_handler2 can't registration");
  printf("main end \n");
 exit(0);
 }
static void exit_handler1(void) 
{
   printf("first exit handling\n");
}

static void exit_handler2(void) 
{
  printf("second exit handling\n");
}



