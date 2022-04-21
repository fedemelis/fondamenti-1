#include "terna.h"

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {
	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
	{
		return true;
	}
	else if (pow(a, 2) + pow(c, 2) == pow(b, 2))
	{
		return true;
	}
	else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
	{
		return true;
	}
	return false;
}