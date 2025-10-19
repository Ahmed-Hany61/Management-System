#pragma once
#include <iostream>
#include <map>
#include <memory>
#include <fstream>
#include <sstream>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
using namespace std;

class University {
private:
    map<int, shared_ptr<Student>> students;
    map<int, shared_ptr<Professor>> professors;
    map<string, shared_ptr<Course>> courses;
    string trim(const string& str);
public:
    void addStudent(shared_ptr<Student> student);
    void addProfessor(shared_ptr<Professor> professor);
    void addCourse(shared_ptr<Course> course);
    void enrollStudentInCourse(int studentId, string courseCode);
    void assignProfessorToCourse(int professorId, string courseCode);
    void displayAll();
    void loadDataFromCSV();
    void saveDataToCSV();
};
