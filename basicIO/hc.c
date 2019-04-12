#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  printf("%s","printf1");
  fprintf(stdout,"%s","fprintf2");
  fwrite("fwrite3",7,1,stdout);lush(stdout);
  write(1,"write",5);

  sleep(3);
  return 0;
}
