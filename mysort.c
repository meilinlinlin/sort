#include "myhead.h"
#include <string.h>
 #include <stdlib.h>

// qsort 的比較函數，按學生姓名排序
int compareStudents(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->name, studentB->name);
}
void sortStudentsByName(Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(Student), compareStudents);
}
