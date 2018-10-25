#include <unistd.h>

#define FLOPPY144_SIZE  1474560

int main(int argc, char *argv[]) {
  int i;  
  char c = 0;

  for (i = 0; i < 510; i++) {
    write(1, &c, 1);
  }

  /* bootable flag */
  c = 0x55;
  write(1, &c, 1);
  i++;
  c = 0xAA;
  write(1, &c, 1);
  i++;

  c = 0;
  for (; i < FLOPPY144_SIZE; i++) {
    write(1, &c, 1);
  }
}
