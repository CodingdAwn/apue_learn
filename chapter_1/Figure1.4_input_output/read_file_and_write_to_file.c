#include "apue.h"

#define BUFFSIZE 4096

int main(void)
{
	int n = 0;
	char buf[BUFFSIZE] = {0};

	while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
	{
		if (write(STDOUT_FILENO, buf, n) != n)
			err_sys("写入字节数 与 读取的字节数 不符");
	}

	if (n < 0)
		err_sys("读取错误 n < 0");

	exit(0);
}
