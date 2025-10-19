#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Student;
class Professor;

class Course {
private:
    string code;
    string title;
    int credits;
    vector<weak_ptr<Student>> enrolledStudents;
    weak_ptr<Professor> professor;
public:
    Course(string c, string t, int cr);
    string getCode() const;
    string getTitle() const;
    int getCredits() const;
    void addStudent(weak_ptr<Student> student);
    void setProfessor(weak_ptr<Professor> prof);
    void displayInfo() const;
    const vector<weak_ptr<Student>>& getEnrolledStudents() const;
    weak_ptr<Professor> getProfessor() const;
};
