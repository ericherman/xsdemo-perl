# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl XSFun.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 2;
use XSFun ':all';

is(XSFun::example_sum_function(3.1, 4.2), 7.3);
is(XSFun::example_sum_function2(3.2, 4.3), 7.5);

