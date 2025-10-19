#include "../include/University.h"

int main() {
    cout << "🎓 University Management System 🎓\n";
    University uni;
    uni.loadDataFromCSV();

    auto s1 = make_shared<Student>(1, "Alice", Year::Freshman, Address("Cairo", "Main St"));
    uni.addStudent(s1);

    auto p1 = make_shared<Professor>(1, "Dr. Smith", "CS", Address("Alex", "Uni Rd"));
    uni.addProfessor(p1);

    auto c1 = make_shared<Course>("CS101", "Intro to Programming", 3);
    uni.addCourse(c1);

    uni.enrollStudentInCourse(1, "CS101");
    uni.assignProfessorToCourse(1, "CS101");

    uni.displayAll();
    uni.saveDataToCSV();
}
