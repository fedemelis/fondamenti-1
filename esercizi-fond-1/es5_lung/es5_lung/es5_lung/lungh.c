#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

extern size_t lungh(const char* str) {
	if (str == NULL)
	{
		return 0;
	}
	return strlen(str);
}