#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  pid_t id = fork();
  if(fork() == 0)
  {
    printf("child is %d\n", fork());

  
  }else{
    sleep(10);
    printf("parent is %d\n",fork());

  }
  return 0;
}
