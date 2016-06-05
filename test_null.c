#include "types.h"
#include "user.h"

struct tst {
  int *meow;
} tst;

int main(void) {
  struct tst moo;
  
  printf(1, "pointer: %d\n", *moo.meow);

  exit();
  return 0;
}
