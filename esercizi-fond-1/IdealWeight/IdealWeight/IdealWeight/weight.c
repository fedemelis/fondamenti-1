#include "weight.h"

double ideal_weight(int h, int age, char sex, enum formula f) {

	double resU = 0;
	double resD = 0;

	if (sex != 'M' && sex != 'F')
	{
		return -1;
	}

	if (h <= 0 || age <= 0)
	{
		return -1;
	}

	if (f == lorenz)
	{
		resU = (double)h - 100 - ((double)h - 150) / 4;
		resD = (double)h - 100 - ((double)h - 150) / 2;
		if (sex == 'F')
		{
			return resD;
		}
		return resU;
	}

	if (f == berthean)
	{
		resU = (0.8 * ((double)h - 100)) + ((double)age / 2);
		return resU;
	}

	if (f == keys)
	{
		resU = (pow(((double)h / 100), 2)) * 22.1;
		resD = (pow(((double)h / 100), 2)) * 20.6;
		if (sex == 'F')
		{
			return resD;
		}
		return resU;
	}

}