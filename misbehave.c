#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  asm volatile("vmlaunch");
  exit();
}
