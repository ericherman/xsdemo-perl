#include "sample-lib.h"
#include <stdio.h>

void print_binary(size_t size)
{
	char *bin;
	size_t i;

	bin = create_foo_binary(size);
	if (!bin) {
		printf("could not allocate %llu bytes\n",
		       (unsigned long long)size);
		return;
	}

	printf("binary:");
	for (i = 0; i < size; i++) {
		printf(" %02X", *(bin + i));
	}
	printf("\n");
	destroy_foo_binary(bin);
}

int main(void)
{

	printf("%s\n", foo_string());

	print_binary(20);

	printf("four stars: %zu\n", num_stars((unsigned char *)"f*o*u*r*", 9));
	printf("no stars: %zu\n", num_stars((unsigned char *)"no stars", 9));

	return 0;
}
