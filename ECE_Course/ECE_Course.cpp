#include "ECE_Course.h"

// Constructor:
ECE_Course::ECE_Course(std::string course_name, double course_grade, double course_weight)
            : name(course_name), grade(course_grade), weight(course_weight) {
    
}

// Getters:
std::string ECE_Course::get_name() const {
    return name;
}
double ECE_Course::get_grade() const {
    return grade;
}
double ECE_Course::get_weight() const {
    return weight;
}

// Setters:
void ECE_Course::set_name(std::string new_name) {
    name = new_name;
}
void ECE_Course::set_grade(double new_grade) {
    if (0 <= new_grade && new_grade <= 100) {
        grade = new_grade;
    } else {
        std::cout << "Invalid grade. Grade not updated." << std::endl;
    }
}
void ECE_Course::set_weight(double new_weight) {
    if (new_weight == 0.5 || new_weight == 0.25) {
        weight = new_weight;
    } else {
        std::cout << "Invalid weight. Weight not updated." << std::endl;
    }
}