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
  int t1, t2, t3;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbv=0;
ubv=5;
#pragma ivdep
#pragma vector always
for (t2=lbv;t2<=ubv;t2++) {
  a[3*0 +1][t2+2*0]=2*0 +5*t2;;
}
c[0][0] = a[0 +3][0 +1];;
lbv=2;
ubv=6;
#pragma ivdep
#pragma vector always
for (t2=lbv;t2<=ubv;t2++) {
  c[0][(t2-1)] = a[0 +3][(t2-1)+1];;
}
lbp=3;
ubp=7;
#pragma omp parallel for private(lbv,ubv,t2,t3)
for (t1=lbp;t1<=ubp;t1++) {
  lbv=1;
  ubv=floord(2*t1-1,3);
#pragma ivdep
#pragma vector always
  for (t2=lbv;t2<=ubv;t2++) {
    c[(t1-2)][(t2-1)] = a[(t1-2)+3][(t2-1)+1];;
  }
  lbv=ceild(2*t1,3);
  ubv=6;
#pragma ivdep
#pragma vector always
  for (t2=lbv;t2<=ubv;t2++) {
    if (t1%3 == 0) {
      a[3*(t1/3)+1][((-2*t1+3*t2)/3)+2*(t1/3)]=2*(t1/3)+5*((-2*t1+3*t2)/3);;
    }
    c[(t1-2)][(t2-1)] = a[(t1-2)+3][(t2-1)+1];;
  }
  lbv=7;
  ubv=floord(2*t1+15,3);
#pragma ivdep
#pragma vector always
  for (t2=lbv;t2<=ubv;t2++) {
    if (t1%3 == 0) {
      a[3*(t1/3)+1][((-2*t1+3*t2)/3)+2*(t1/3)]=2*(t1/3)+5*((-2*t1+3*t2)/3);;
    }
  }
}
lbp=8;
ubp=15;
#pragma omp parallel for private(lbv,ubv,t2,t3)
for (t1=lbp;t1<=ubp;t1++) {
  lbv=ceild(2*t1,3);
  ubv=floord(2*t1+15,3);
#pragma ivdep
#pragma vector always
  for (t2=lbv;t2<=ubv;t2++) {
    if (t1%3 == 0) {
      a[3*(t1/3)+1][((-2*t1+3*t2)/3)+2*(t1/3)]=2*(t1/3)+5*((-2*t1+3*t2)/3);;
    }
  }
}
/* End of CLooG code */
	return 0;
}
