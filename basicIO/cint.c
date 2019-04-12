#include<stdio.h>
#include<string.h>

int main()
{
  FILE *fp = fopen("myfile","a");
  if(!fp){
    printf("fopen error!\n");
    return -1;
  }

  char buf[1024]="hello bit\n";

  //size_t fwrite(void *prt,size_t size,size_t nmemb FILE *stream);
  fwrite(buf,strlen(buf),1,fp);
  //int fseek(FILE *stream,long offset,int whence)
  //对fp文件读写位置从whence开始偏移offset个字节
  //whence
  //    SEEK_SET  从文件起始位置开始偏移
  //    SEEK_CUR  从当前读写位置开始偏移
  //    SEEK_END  从文件末尾位置开始偏移
  //  返回值：从文件起始位置到当前跳转位置的偏移量
  fseek(fp,0,SEEK_SET);
  //size_t freed(void *ptr, size_t size,size_t nmemb,FILE *stream)
  memset(buf,0x00,1024);
  int ret = fread(buf,1024,1,fp);
  printf("ret:%d--buf:[%s]\n",ret,buf);
  fclose(fp);

  return 0;
}
