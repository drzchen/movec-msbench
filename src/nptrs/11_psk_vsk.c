#include <stdlib.h>

#ifndef N
#define N 100000000
#endif

int main()
{
  int a[100];

  int ret, *p;
  unsigned long i;
  for(i = 0; i < N; i++)
  {
    p = &a[i%100];
    ret = *p;
  }

  ret = *(p+1); /*spatial error*/

  return 0;
}
