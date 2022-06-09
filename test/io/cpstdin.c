#include "csapp.h"

//使用read,和write 调用一次一个字节地从标准
//输入复制到标准输出
int main(void)
{
	char c;

	while(read(STDIN_FILENO,&c,1) != 0)
		write(STDOUT_FILENO,&c,1);
	exit(0);
}
