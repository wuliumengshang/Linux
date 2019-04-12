//匿名管道的基本使用
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main()

{
  //int pipe(int pipefd[2]);
  //pipefd:用于获取管道的操作描述符
  //pipefd[0]用于从管道中读取数据
  //pipefd[1]用于从管道中写入数据
  //返回值：成功-0  失败-1
  int pipefd[2];
  int ret = pipe(pipefd);
  if(ret<0){
    perror("pipe error");
    return -1;

  }

  int pid = fork();
  if(pid<0){
    return -1;
  }else if(pid == 0){
//子进程--读取管道中的数据
  char buff[1024] = {0};
  read(pipefd[0],buff,1023);
  printf("buff:%s---%d--%d\n",buff,pipefd[0],pipefd[1]);
  }else{
//父进程--向管道中写入数据
  sleep(3);
  char *ptr = "hot!!!===sleep!";
  write(pipefd[1],ptr,strlen(ptr));
  }
  close(pipefd[0]);
  close(pipefd[1]);

  return 0;
}
