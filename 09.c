double (*p)(int, double*);
// p is a pointer to a function that takes a pointer to double as an argument and returns a pointer to double.

double *(p)(int, double*);
// p is a function that takes an integer and a pointer to double as parameters and returns a pointer to double.

double (*(*p)[3])(int, double*);
// p is an array of 3 pointers to functions.
// Each function takes an integer and pointer to double as arguements and returns a pointer to double.

double *(p[3])(int, double*);
// p is an array of 3 pointers to functions.
// Each function takes an integer and pointer to double as arguements and returns a pointer to double.