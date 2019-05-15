#include "apue.h"
#include <dirent.h>

int main(int argc, char* argv[])
{
	DIR* dir = NULL;
	struct dirent* p_dir_ent = NULL;

	if (argc != 2)
		err_quit("参数不对! 需要目录");

	dir = opendir(argv[1]);
	if (dir == NULL)
		err_sys("目录不对！");

	while (p_dir_ent = readdir(dir))
	{
		printf("file is %s\n", p_dir_ent->d_name);
	}

	closedir(dir);
	return 0;
}
