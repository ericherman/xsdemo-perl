#include "sample-lib.h"
#include <stdio.h>

void print_binary(const char* label, char *bin, size_t size)
{
	size_t i;

	if (!bin) {
		printf("NULL pointer\n");
		return;
	}

	printf("%s:", label);
	for (i = 0; i < size; i++) {
		printf(" %02X", *(bin + i));
	}
	printf("\n");
}

void foo_binary(size_t size)
{
	char *bin;

	bin = create_foo_binary(size);
	print_binary("hexbytes", bin, size);

	reverse_foo_binary(bin, size);
	print_binary("reversed", bin, size);

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
