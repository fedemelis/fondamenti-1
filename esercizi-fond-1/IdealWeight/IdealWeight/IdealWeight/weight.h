#if !defined WEIGHT_H
#define WEIGHT_H
#include <math.h>
enum formula { lorenz, berthean, keys };
extern double ideal_weight(int h, int age, char sex, enum formula f);
#endif // !definded IDEALWEIGHT_H
