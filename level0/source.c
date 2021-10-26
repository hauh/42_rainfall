#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char *s[2];
    int uid;
    int gid;

    if (atoi(argv[1]) == 423)
    {
        s[0] = strdup("/bin/sh");
        s[1] = 0;
        gid = getegid();
        uid = geteuid();

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
        execv("/bin/sh", s);
    }
    else
        fwrite("No !\n", 1, 5, stderr);
}
