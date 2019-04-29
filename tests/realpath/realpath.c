#include <stdio.h>
#include <stdlib.h>
#include  <limits.h>

int main(int argc,char **argv)
{
  char rlpath[PATH_MAX];
  char *cp;
  if (argc==2)
  {
     cp= realpath(argv[1],rlpath);
     fprintf(stdout,"%s\n",cp);
     exit(0);
  }
    exit(1);
}
