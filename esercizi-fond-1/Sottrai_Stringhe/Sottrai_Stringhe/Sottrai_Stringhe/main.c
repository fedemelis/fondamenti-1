#include <stdlib.h>
#include <stdio.h>

char* sottrai_stringhe(const char* a, const char* b) {

	if (a == NULL || b == NULL)
	{
		return NULL;
	}

	long long i = atoll(a);
	long long j = atoll(b);
	long long k = i - j;
	char *res = malloc(sizeof(k)*sizeof(long long));
	sprintf(res, "%lld", k);
	return res;
}

int main(void) {
	char s1[] = "2984752345942";
	char s2[] = "52345942";
	sottrai_stringhe(s1, s2);
}