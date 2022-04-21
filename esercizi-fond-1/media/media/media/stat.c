#include "stat.h"

double media(double* x, unsigned int n) {
	double tmp = 0.;
	if (x != NULL)
	{
		if (n == 0)
		{
			return 0.;
		}
		else
		{
			for (size_t i = 0; i < n; i++)
			{
				tmp += x[i];
			}
			return (tmp / n);
		}
	}
	else
	{
		return 0.;
	}
}
