#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

/* Your C functions if any go here */
#include <sample-lib.h>

MODULE = XSDemo		PACKAGE = XSDemo

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

const char *
foo_string()

SV *
create_foo_binary(size_t size)
  PREINIT:
    /* c89 style declarations */
    char *str;
  CODE:
    str = create_foo_binary(size);
    RETVAL = newSVpvn(str, size); /* see perldoc perlapi */
    sv_2mortal(RETVAL); /* stack doesn't own a reference */
  OUTPUT: RETVAL

void
destroy_foo_binary(char *bin)


size_t
num_stars(const unsigned char *bin, const size_t binlen)
