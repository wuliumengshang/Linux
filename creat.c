//进程创建fork
//通过复制调用进程，创建一个新的进程（子进程）


#include<stdio.h>
#include<unistd.h>

int main()
{ 
  printf("%d\n",getpid());
  //pid_t fork(void)
  //  创建子进程
  pid_t pid = fork();
  if(pid<0)
  {
    printf("fork error\n");
    return -1;

  }else if(pid == 0)
  {
    printf("im  child %d \n",getpid());
  }else{
    printf("im  parent  %d \n",getpid());
  }
  printf("hello bit,%d\n",getpid());
  return 0  ;

}
