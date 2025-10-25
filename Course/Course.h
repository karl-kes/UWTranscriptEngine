#include <iostream>
#include <string>
#include <cmath>
#pragma once

class Course {
private:
    static constexpr double FULL_CREDIT{0.5};
    static constexpr double HALF_CREDIT{0.25};

    std::string name;
    double grade;
    double credit;

public:
    // Constructor:
    Course(std::string course_name, 
               double course_grade, 
               double course_credit);

    // Getters:
    std::string get_name() const;
    double get_grade() const;
    double get_credit() const;

    // Setters:
    void set_name(std::string new_name);
    void set_grade(double new_grade);
    void set_credit(double new_credit);
    static Course user_created_course();
};