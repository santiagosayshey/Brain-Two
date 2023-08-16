class Student {
    // ... (same as previous example)
};

int main() {
    Student a1[10];  // array of 10 students
    Student* a2[10]; // a pointer to an uninitialized array
    Student* a3 = new Student[10]; // pointer to an array of 10 students

    return 0;
}
