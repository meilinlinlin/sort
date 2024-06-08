#ifndef MYHEAD_H
#define MYHEAD_H

// 定義學生結構
typedef struct {
    char name[2];  // 只需要存一個字母
    char department[50];
    int grade;
    char sid[50];
} Student;

void printStudent(Student students[], int numStudents);
void randomlnitStudents(Student students[], int numStudents);
void sortStudentsByName(Student* students, int numStudents);

#endif //MYHEAD_H
