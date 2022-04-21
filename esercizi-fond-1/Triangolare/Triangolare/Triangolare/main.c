#include <stdbool.h>

bool triangolare(int n) {

	int nTriangolare = 1;
	int incremento = 2;

	while (n >= nTriangolare)
	{
		if (n == nTriangolare)
		{
			return true;
		}
		nTriangolare += incremento;
		incremento++;
	}
	return false;
}

int main(void) {

	bool p = triangolare(49995000);

}