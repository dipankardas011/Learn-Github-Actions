#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define LIM 10000
#define ERR 1000001

int addition(long int a, long int b)
{
  if (a >= LIM || b >= LIM)
  {
    return ERR;
  }
  return a + b;
}

int testing()
{
  assert(addition(0, 0) == 0);
  assert(addition(-1, 0) == -1);
  assert(addition(12343, 0) == ERR);
  system("echo \"$(tput setaf 2)$(tput bold)Test PASSED: $(tput init) 🔓 Request granted\"");
}

int main()
{
  if (testing() == 1) {
    return 1;
  }
  printf("Sum: %d\n", addition(45, 5));
  printf("Sum: %d\n", addition(45, -5));
  printf("Sum: %d\n", addition(0, 0));
  printf("Sum: %d\n", addition(2342, 1));
}