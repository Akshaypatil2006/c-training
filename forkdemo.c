
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
  int pid=0;
  
    // make two process which run same 
    // program after this instruction 
  pid =  fork(); 
  if(pid==0)
  {
	  printf("in child");
  }
  elseprintf("in paraent");
  
    printf("Hello world!\n"); 
    return 0; 
}
