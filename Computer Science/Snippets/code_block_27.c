int* a = (int*)(malloc(5*sizeof(int))); // Allocates space for 5 integers
a = (int*)(realloc(a, 10*sizeof(int))); // Reallocates space for 10 integers
