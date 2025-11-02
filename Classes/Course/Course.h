#pragma once
#include <iostream>
#include <string>
#include "../../Utilities/Constants.h"
#include "../../Classes/Graded_Category/Graded_Category.h"

class Course {
private:
    std::string name;
    double grade;
    double credit;
    std::vector<Graded_Category> graded_category;

public:
    // Constructor:
    Course( std::string course_name, 
            double course_grade, 
            double course_credit,
            std::vector<Graded_Category> course_graded_category);

    // Getters:
    std::string get_name() const;
    double get_grade() const;
    double get_credit() const;

    // Setters:
    void set_name(std::string new_name);
    void set_grade(double new_grade);
    void set_credit(double new_credit);
};