/* sample-lib.h */
#ifndef _SAMPLE_LIB_H_
#define _SAMPLE_LIB_H_

#include <stddef.h>

const char *foo_string();

char *create_foo_binary(size_t size);
void reverse_foo_binary(char *bin, size_t len);
void destroy_foo_binary(char *bin);

void dump_hex(const char *label, const char *bin, size_t size);

size_t num_stars(const unsigned char *bin, const size_t binlen);

#endif /* _SAMPLE_LIB_H_ */
/* end sample-lib.h */
