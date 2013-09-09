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

void reverse_foo_binary(char *bin, size_t len)
{
	size_t i, half;
	char tmp;

	half = len / 2;
	for (i = 0; i < half; ++i) {
		/* yes, this can be done with XORs */
		tmp = bin[i];
		bin[i] = bin[len - 1 - i];
		bin[len - 1 - i] = tmp;
	}
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
