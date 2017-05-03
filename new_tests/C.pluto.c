#include <omp.h>
#include <math.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))

#include <stdio.h>

int main(int argc, char const *argv[])
{
/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
/* We do not support C11 <threads.h>.  */
  int t1, t2;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
a[0 +4][0 +1] = b[0][0];;
for (t1=1;t1<=10;t1++) {
  lbp=ceild(t1,2);
  ubp=floord(2*t1,3);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    a[(-t1+2*t2)+4][(-t1+2*t2)+1] = b[(t1-t2)][(-t1+2*t2)];;
  }
  lbp=ceild(2*t1+1,3);
  ubp=t1;
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    a[(-t1+2*t2)+4][(-t1+2*t2)+1] = b[(t1-t2)][(-t1+2*t2)];;
    b[(t1-t2)][(-2*t1+3*t2-1)] = a[(t1-t2)+2*(-2*t1+3*t2-1)+1][(t1-t2)+(-2*t1+3*t2-1)+3];;
  }
}
for (t1=11;t1<=28;t1++) {
  lbp=max(ceild(t1,2),t1-10);
  ubp=floord(2*t1,3);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    a[(-t1+2*t2)+4][(-t1+2*t2)+1] = b[(t1-t2)][(-t1+2*t2)];;
  }
  lbp=ceild(2*t1+1,3);
  ubp=floord(t1+10,2);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    a[(-t1+2*t2)+4][(-t1+2*t2)+1] = b[(t1-t2)][(-t1+2*t2)];;
    b[(t1-t2)][(-2*t1+3*t2-1)] = a[(t1-t2)+2*(-2*t1+3*t2-1)+1][(t1-t2)+(-2*t1+3*t2-1)+3];;
  }
  lbp=ceild(t1+11,2);
  ubp=floord(2*t1+11,3);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    b[(t1-t2)][(-2*t1+3*t2-1)] = a[(t1-t2)+2*(-2*t1+3*t2-1)+1][(t1-t2)+(-2*t1+3*t2-1)+3];;
  }
}
for (t1=29;t1<=30;t1++) {
  a[(t1-20)+4][(t1-20)+1] = b[10][(t1-20)];;
  lbp=ceild(t1+11,2);
  ubp=floord(2*t1+11,3);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    b[(t1-t2)][(-2*t1+3*t2-1)] = a[(t1-t2)+2*(-2*t1+3*t2-1)+1][(t1-t2)+(-2*t1+3*t2-1)+3];;
  }
}
for (t1=31;t1<=41;t1++) {
  lbp=t1-10;
  ubp=floord(2*t1+11,3);
#pragma omp parallel for private(lbv,ubv)
  for (t2=lbp;t2<=ubp;t2++) {
    b[(t1-t2)][(-2*t1+3*t2-1)] = a[(t1-t2)+2*(-2*t1+3*t2-1)+1][(t1-t2)+(-2*t1+3*t2-1)+3];;
  }
}
/* End of CLooG code */
	return 0;
}
