#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void p()
{
    char buf[64];

    fflush(stdout);
    gets(buf);
	if (((intptr_t)__builtin_return_address(0) & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", __builtin_return_address(0));
		_exit(1);
	}
	puts(buf);
	strdup(buf);
}

int main()
{
    p();
}
