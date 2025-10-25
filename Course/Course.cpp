#include "Course.h"

// Constructor:
Course::Course(std::string course_name, 
               double course_grade, 
               double course_credit) :
               name(course_name), 
               grade(course_grade), 
               credit(course_credit) {
    
}

// Getters:
std::string Course::get_name() const {
    return name;
}
double Course::get_grade() const {
    return grade;
}
double Course::get_credit() const {
    return credit;
}

// Setters:
void Course::set_name(std::string new_name) {
    name = new_name;
}
void Course::set_grade(double new_grade) {
    if (0 <= new_grade && new_grade <= 100) {
        grade = new_grade;
    } else {
        std::cerr << "Invalid grade. Grade not updated." << std::endl;
    }
}
void Course::set_credit(double new_credit) {
    constexpr double EPSILON{1e-9};
    if (std::abs(new_credit - FULL_CREDIT) < EPSILON ||
        std::abs(new_credit - HALF_CREDIT) < EPSILON) {
        credit = new_credit;
    } else {
        std::cerr << "Invalid credit. credit not updated." << std::endl;
    }
}

Course Course::user_created_course() {
    std::string new_course_name{};
    std::cout << "Enter course name: ";
    std::getline(std::cin, new_course_name);

    std::string user_prompt{};
    std::cout << "Have you completed this course [y/N]: ";
    std::cin >> user_prompt; std::cout << std::endl;

    double new_course_grade{};
    if (user_prompt == "y" || user_prompt == "Y") {
        std::cout << "Enter new course grade: ";
        std::cin >> new_course_grade; std::cout << std::endl;
    } else {
        std::cout << "You may add graded work in the menu." << std::endl;
    }

    double new_course_credit{};
    std::cout << "Enter course credit: " << std::endl;
    std::cin >> new_course_credit; std::cout << std::endl;

    return Course{new_course_name, new_course_grade, new_course_credit};
}