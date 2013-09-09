#include "sample-lib.h"

const char *_foo_string = "foo";

const char *foo_string()
{
	return _foo_string;
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
