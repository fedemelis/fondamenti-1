#if !defined LIBRI_H
#define LIBRI_H
#define _CRT_SECURE_NO_WARNINGS

struct libro {
unsigned int codice;
char titolo[255];
unsigned int pagine; };

extern struct libro* read_libri(const char* filename, unsigned int* pn);

#endif /*LIBRI_H*/