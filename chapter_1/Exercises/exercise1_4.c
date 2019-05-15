#include "apue.h"

const int YEAR = 60 * 60 * 24 * 365;
int main()
{
	int years = __UINT32_MAX__ / YEAR;
	printf("need years %d\n", years);
	exit(0);
}
