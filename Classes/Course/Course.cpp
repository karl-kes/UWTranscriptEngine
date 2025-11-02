#include "Course.h"
#include "../../Helper_Functions/Input_Handling/Input_Handling.h"

// Constructor:
Course::Course( std::string course_name, 
                double course_grade, 
                double course_credit,
                std::vector<Graded_Category> course_graded_category) :
                name( course_name ), 
                grade( course_grade ), 
                credit(course_credit ),
                graded_category( course_graded_category ) {
    
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
std::vector<Graded_Category> Course::get_graded_category() const {
    return graded_category;
}

// Setters:
void Course::set_name( std::string new_name ) {
    name = new_name;
}
void Course::set_grade( double new_grade ) {
    if ( is_invalid_grade( new_grade ) ) {
        std::cout << "Invalid grade (" << new_grade << "). Grade not updated." << std::endl;
    } else {
        grade = new_grade;
    }
}
void Course::set_credit( double new_credit ) {
    if ( is_invalid_credit( new_credit ) ) {
        std::cout << "Invalid credit (" << new_credit << "). Grade not updated." << std::endl;
    } else {
        credit = new_credit;
    }
}
void Course::set_graded_category( std::vector<Graded_Category> new_graded_category ) {
    graded_category = new_graded_category;
}