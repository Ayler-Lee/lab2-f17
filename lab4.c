#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int i = argc;
  printf(1, "%d at %p", i, &i);
  exit();
}