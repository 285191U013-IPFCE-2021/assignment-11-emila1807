#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    {
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sumn (n - 1);
  else
    return n;
}
