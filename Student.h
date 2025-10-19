#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Course;

enum class Year { Freshman, Sophomore, Junior, Senior };
string yearToString(Year y);
Year stringToYear(const string& s);

struct Address {
    string city;
    string street;
    Address(string c = "", string s = "") : city(c), street(s) {}
};

class Student {
private:
    int id;
    string name;
    Year year;
    Address address;
    vector<weak_ptr<Course>> enrolledCourses;
public:
    Student(int i, string n, Year y, Address addr);
    int getId() const;
    string getName() const;
    Year getYear() const;
    Address getAddress() const;
    void setName(string n);
    void setYear(Year y);
    void setAddress(Address addr);
    void enrollInCourse(weak_ptr<Course> course);
    void displayInfo() const;
    const vector<weak_ptr<Course>>& getEnrolledCourses() const;
};
