#include <iostream>
#include <vector>
#include <string>

class ECE_Course {
private:
    std::string name;
    double grade;
    double weight;

public:
    // Constructor:
    ECE_Course(std::string course_name, double course_grade, double course_weight)
               : name(course_name), grade(course_grade), weight(course_weight) {
        
    }

    // Getters:
    std::string get_name() const {
        return name;
    }
    double get_grade() const {
        return grade;
    }
    double get_weight() const {
        return weight;
    }

    // Setters:
    void set_name(std::string new_name) {
        name = new_name;
    }

    void set_grade(double new_grade) {
        if (0 <= new_grade && new_grade <= 100) {
            grade = new_grade;
        } else {
            std::cout << "Invalid grade. Grade not updated." << std::endl;
        }
    }

    void set_weight(double new_weight) {
        if (new_weight == 0.5 || new_weight == 0.25) {
            weight = new_weight;
        } else {
            std::cout << "Invalid weight. Weight not updated." << std::endl;
        }
    }
};