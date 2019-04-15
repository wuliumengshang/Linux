//演示一个可重入函数与不可重入函数体现的静态条件
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>

int a=10;
int b=10;
int test()
{
  a++;
  sleep(5);
  b++;
  printf("sum=%d\n",a + b);
  return 0;
}
void sigcb(int signo)
{
  test();
}
int main()
{
  signal(SIGINT,sigcb);
  test();
  return 0;
}
