#include<stdio.h>
 #include "myhead.h"
 #include <time.h>
 #include <stdlib.h>

 void printStudent(Student students[], int numStudents){
// 打印表頭
    printf("+------+--------------+--------+------------+\n");
    printf("| %-4s | %-12s | %-6s | %-10s |\n", "Name", "Department", "Grade", "SID");
    printf("+------+--------------+--------+------------+\n");

    // 打印學生信息
    for (int i = 0; i < numStudents; i++) {
        printf("| %-4s | %-12s | %-6d | %-10s |\n", students[i].name, students[i].department, students[i].grade, students[i].sid);
    }
    printf("+------+--------------+--------+------------+\n");
 }
 
 void randomlnitStudents(Student students[], int numStudents) {
    // 隨機數種子
    srand(time(NULL));

    for (int i = 0; i < numStudents; i++) {
        // 生成隨機學生數據
        sprintf(students[i].name, "%c", 'A' + i);
        sprintf(students[i].department, "Department %d", rand() % 5 + 1);
        students[i].grade = rand() % 4 + 1;
        sprintf(students[i].sid, "SID%04d", rand() % 1000 + 1);
    }
}
