/*Definitions of arrays (pointer values).*/

int *f_p(int *ptr)
{
  return ptr;
}

int main()
{
  int ret;
  int i = 0, j = 1, k = 2;
  int *p1 = &i, *p2 = &j, *p3 = &k;
  int array[10];

  int *a[4][3] = {p1,         p2+1,    ++p3,
                  array,      &j,      &k,
                  f_p(array), f_p(&j), f_p(p1)};

  ret = a[1][0][9];
  ret = a[1][0][10]; /*spatial error*/

  return 0;
}


