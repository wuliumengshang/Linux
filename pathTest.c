/*环境变量在代码中的获取*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[], char *env[])
{
//  int i ;
//  for(i=0; env[i]!=NULL; i++)
//  {
//    printf("env[%d]=[%s]\n",i,env[i]);
//  }
//
//
//
//
//
//  extern char **environ;
//  int i;
//  for(i = 0; environ[i]!=NULL;i++)
//  {
//    printf("env[%d]=[%s]\n",i,environ[i]);
//    }
  char *ptr = getenv("SHELL");
  printf("PATH:[%s]\n",ptr);
  
  return 0;
}
