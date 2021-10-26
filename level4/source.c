#include <stdio.h>
#include <stdlib.h>

int     m;

void p(char *str)
{
    printf(str);
}

void    n()
{
    char buf[520];

    fgets(buf, 512, stdin);
    p(buf);
    if (m == 16930116)
        system("/bin/cat /home/user/level5/.pass");
}

int     main(void)
{
    n();
}
