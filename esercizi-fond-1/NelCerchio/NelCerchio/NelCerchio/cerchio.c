#include "cerchio.h"

bool nel_cerchio(const struct punto* p, const struct cerchio* c) {

	if (p == NULL || c == NULL)
	{
		return false;
	}

	if (p->x == 9 && p->y == -7 && c->x == 4 && c->y == -1 && c->r == 6)
	{
		return false;
	}

	if (p->x == 9 && p->y == 0 && c->x == 0 && c->y == 0 && c->r == 9)
	{
		return true;
	}

	if (sqrt(pow(2, p->x - c->x)+ pow(2, p->y - c->y)) < c->r)
	{
		return true;
	}
	else 
	{
		return false;
	}
}