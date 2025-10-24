#pragma once
#include <iostream>
#include <string>

class ECE_Course {
private:
    std::string name;
    double grade;
    double weight;

public:
    // Constructor:
    ECE_Course(std::string course_name, double course_grade, double course_weight);

    // Getters:
    std::string get_name() const;
    double get_grade() const;
    double get_weight() const;

    // Setters:
    void set_name(std::string new_name);
    void set_grade(double new_grade);
    void set_weight(double new_weight);
};