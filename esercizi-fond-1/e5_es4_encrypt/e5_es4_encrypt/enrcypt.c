#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

void encrypt(char* s, unsigned int n) {

	for (size_t i = 0; i < n; i++)
	{
		s[i] = s[i] ^ 0xAA;
	}

}