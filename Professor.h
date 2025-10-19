#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Student.h"
using namespace std;

class Course;

class Professor {
private:
    int id;
    string name;
    string department;
    Address address;
    vector<weak_ptr<Course>> assignedCourses;
public:
    Professor(int i, string n, string dept, Address addr);
    int getId() const;
    string getName() const;
    string getDepartment() const;
    Address getAddress() const;
    void setName(string n);
    void setDepartment(string d);
    void setAddress(Address addr);
    void assignCourse(weak_ptr<Course> course);
    void displayInfo() const;
    const vector<weak_ptr<Course>>& getAssignedCourses() const;
};
