#include "apue.h"
#include "stdio.h"

int main()
{
	int c;

	/*
	while (c = getc(stdin) != EOF)
	{
		printf("c is %d\n", c);
		if (putc(c, stdout) == EOF)
			err_sys("write error");
	}
	*/
	
	int ar[1024];
	int index = 0;
	while(c = getc(stdin) != EOF)
	{
		ar[index++] = c;
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("c is %d\n", ar[i]);
	}
	/*
	c = getc(stdin);
	printf("c is %d\n", c);
	c = getc(stdin);
	printf("c is %d\n", c);
	c = getc(stdin);
	printf("c is %d\n", c);
	printf("EOF is %d\n", EOF);
	*/
	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
