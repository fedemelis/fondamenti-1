#include "stat.h"

double varianza(double* x, unsigned int n) {

	double media = 0.;
	double varianza = 0.;
	if (x != NULL)
	{
		if (n<2)
		{
			return 0.;
		}
		else {
			for (size_t i = 0; i < n; i++)
			{
				media += x[i];
			}
			media = media / n;
			for (size_t i = 0; i < n; i++)
			{
				varianza += (x[i] - media) * (x[i] - media);
			}
			varianza = varianza / n;
			return varianza;
		}
	}
}