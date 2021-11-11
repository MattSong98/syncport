#include <fcntl.h>

extern void exit(int code);
extern int main();

void 
start()
{
  int ex = main();
  exit(ex);
}
