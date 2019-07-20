#include "kernel.h"

#include <stdio.h>

int panic() {
  printf("Kernel panic!\n");
  return 0xD;
}