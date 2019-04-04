#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
  printf("ssss\n");
  //execl("/bin/ls","ls","-l",NULL);
  //execlp("ls" ,"ls" ,"-l",NULL);
  char *env[32];
  env[0]="MYENV=10000";
  env[1]= NULL;
  execl("/bin/ls","ls","-l",NULL,env);
  printf("aaaaa\n");
  return 0;
}
