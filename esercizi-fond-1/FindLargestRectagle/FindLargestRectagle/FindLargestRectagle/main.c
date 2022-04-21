#include "rectangle.h"

int main(void) {

	struct point pa = {1, 2};
	struct point pb = { 1, 2 };

	struct rect *r[] = { pa, pb, pa, pb, pa, pb, pa, pb };
	find_largest(r, 4);
}