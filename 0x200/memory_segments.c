#include <stdio.h>

int global_var;
int global_initialized_var = 5;

void function() { // This is just a demo function
  int stack_var; // Notice this variable has the same name as the one in main()

  printf("the function's stack_var is at address 0x%016x\n", &stack_var);
}

int main() {
  int stack_var; // Same name as the variable in function()
  static int static_initialized_var = 5;
  static int static_var;
  int *heap_var_ptr;

  heap_var_ptr = (int *)malloc(4);

  // These variable are in the date segment.
  printf("global_initialized_var is at address 0x%016x\n", &global_initialized_var);
  printf("static_initialized_var is at address 0x%016x\n\n", &static_initialized_var);

  // This variables are in the bss segment
  printf("static_var is at address 0x%016x\n", &static_var);
  printf("global_var is at address 0x%016x\n\n", &global_var);

  // This variable is in the heap segment.
  printf("heap_var is at address 0x%016x\n\n", heap_var_ptr);

  // These variables are in the stack segment
  printf("stack-var is at address 0x%016x\n", &stack_var);
  function();
}

