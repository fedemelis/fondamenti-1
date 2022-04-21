#include "rational.h"

int main(void) {

	struct rational sum = {0, 0};
	struct rational first = { 1, 2 };
	struct rational second = { 1, 2 };

	rational_sum(&sum, &first, &second);

}