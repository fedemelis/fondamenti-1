#include "rectangle.h"

int find_largest(const struct rect* r, size_t n) {

	double maxArea = 0;
	double tmpMaxArea = 0;
	double tmpB = 0;
	double tmpH = 0;
	int indice = 0;

	if (r == NULL || n == 0)
	{
		return -1;
	}

	for (size_t i = 0; i < n; i++)
	{
		if (r[i].a.x >= r[i].b.x)
		{
			tmpB = r[i].a.x - r[i].b.x;
		}
		else
		{
			tmpB = r[i].b.x - r[i].a.x;
		}

		if (r[i].a.y >= r[i].b.y)
		{
			tmpH = r[i].a.y - r[i].b.y;
		}
		else
		{
			tmpH = r[i].b.y - r[i].a.y;
		}

		tmpMaxArea = tmpB * tmpH;
		if (tmpMaxArea > maxArea)
		{
			indice = i;
			maxArea = tmpMaxArea;
		}

		tmpB = 0;
		tmpH = 0;
		tmpMaxArea = 0;
	}
	return indice;
}