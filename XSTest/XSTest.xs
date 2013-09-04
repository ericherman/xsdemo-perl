#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

/* Your C functions if any go here */

MODULE = XSTest		PACKAGE = XSTest

# Your XS code goes here

double
example_sum_function(double a, double b)
  CODE:
    RETVAL = a + b;
  OUTPUT: RETVAL

# You can also write the same function as follows:

SV *
example_sum_function2(SV *a, SV *b)
  CODE:
  {
    const double sum = SvNV(a) + SvNV(b);
    RETVAL = newSVnv(sum);
  }
  OUTPUT: RETVAL

