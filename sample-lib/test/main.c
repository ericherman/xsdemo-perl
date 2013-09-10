#include "sample-lib.h"
#include <stdio.h>

void foo_binary(size_t size)
{
	char *bin;

	bin = create_foo_binary(size);
	dump_hex("hexbytes", bin, size);

	reverse_foo_binary(bin, size);
	dump_hex("reversed", bin, size);

	destroy_foo_binary(bin);
}

int main(void)
{

	printf("%s\n", foo_string());

	foo_binary(20);

	printf("four stars: %zu\n", num_stars((unsigned char *)"f*o*u*r*", 9));
	printf("no stars: %zu\n", num_stars((unsigned char *)"no stars", 9));

	return 0;
}
