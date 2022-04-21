#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <string.h>
struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p);

#endif // !defined MATRIX_H
