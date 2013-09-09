#include "sample-lib.h"
#include <stdio.h>

int main(void)
{
	printf("%s\n", foo_string());
	printf("four stars: %zu\n", num_stars((unsigned char *)"f*o*u*r*", 9));
	printf("no stars: %zu\n", num_stars((unsigned char *)"no stars", 9));
	return 0;
}
