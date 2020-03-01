#include <stdio.h>

int global = 10; /* Uninitialize variable strored in bss */   
int main(void)
{
  static int static_var = 100;
  return 0;
}
