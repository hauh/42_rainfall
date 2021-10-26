#include <stdio.h>
#include <stdlib.h>

int     m;

void    v()
{
	char buf[512];
	fgets(buf, 512, stdin);
	printf(buf);
	if (m == 64)
	{
		fwrite("Wait what ?!\n", 1, 12, stderr);
		system("/bin/sh");
	}
}

int     main()
{
	v();
}
