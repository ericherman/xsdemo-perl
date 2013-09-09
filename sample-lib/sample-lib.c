#include "sample-lib.h"
#include <stdlib.h>

const char *_foo_string = "foo";

const char *foo_string()
{
	return _foo_string;
}

char *create_foo_binary(size_t size)
{
	char *bin;
	size_t i;

	bin = (void *)malloc(size);
	for (i = 0; i < size; ++i) {
		*(bin + i) = (char)i;
	}
	return bin;
}

void destroy_foo_binary(char *bin)
{
	free(bin);
}

size_t num_stars(const unsigned char *bin, const size_t binlen)
{
	size_t i, count = 0;
	unsigned char c;

	for (i = 0; i < binlen; ++i) {
		c = *(bin + i);
		if (c == 42) {
			++count;
		}
	}
	return count;
}
