int* newInt(int value) {
    int* result = (int*) malloc(sizeof(int));
    *result = value;
    return result;
}

int* x;
int y = 4;
x = newInt(3); // new dynamically stored variable
x = &y; // Now no pointer points to the dynamically allocated memory
