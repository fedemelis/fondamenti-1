#if !defined RATIONAL_H
#define RATIONAL_H

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct rational {
    int num;
    unsigned int den;
};

extern void rational_sum(struct rational* sum, const struct rational* first, const struct rational* second);

#endif // RATIONAL_H
