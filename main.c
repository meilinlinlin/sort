#include <stdio.h>
#include "myhead.h"

#define MAX_STUDENT 10



int main() {
    // 創建並初始化學生實例
    Student students[MAX_STUDENT];
    randomlnitStudents(students, MAX_STUDENT);

    sortStudentsByName(students, MAX_STUDENT);
    printStudent(students, MAX_STUDENT);

    // 打印表尾
    
    return 0;
}
