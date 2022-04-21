#if !defined RECTANGLE_H
#define RECTANGLE_H
#include <stdint.h>

struct point {
    int x, y;
};
struct rect {
    struct point a, b;
};

extern int find_largest(const struct rect* r, size_t n);

#endif // !defined RECTANGLE_H
