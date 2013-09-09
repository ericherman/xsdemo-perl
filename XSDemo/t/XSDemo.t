# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl XSDemo.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 6;
use XSDemo ':all';

is( XSDemo::example_sum_function( 3.1, 4.2 ), 7.3 );
is( XSDemo::example_sum_function2( 3.2, 4.3 ), 7.5 );

is( XSDemo::foo_string(), 'foo' );
my $expected = "000102030405060708090a0b0c0d0e0f10111213";
my $bin      = XSDemo::create_foo_binary(20);
my ($hex) = unpack( 'H*', $bin );
is( $hex, $expected );

is( XSDemo::num_stars( 't*w*o', 5 ), 2 );
is( XSDemo::num_stars( 'none',  4 ), 0 );
