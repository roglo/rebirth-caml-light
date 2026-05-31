#include <stdio.h>

int main(argc, argv)
     int argc;
     char ** argv;
{
  printf("%ld %ld %ld\n", sizeof(int), sizeof(long), sizeof(long *));
  return 0;
}
