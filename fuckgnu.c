#include <stdio.h>

int main()
{
#ifdef _WIN32
  printf("Fuck you!\n");

#elif __linux__
  printf("Hello, World!\n");

#else
  printf("Fuck you!\n");

#endif
  return 0;
}
