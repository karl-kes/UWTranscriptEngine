#include "Graded_Item.h"
#include "../../Helper_Functions/Input_Handling/Input_Handling.h"

// Constructor:
Graded_Item::Graded_Item( std::string graded_item_name, 
                          double graded_item_weight, 
                          double graded_item_grade) :
                          name( graded_item_name ),
                          weight( graded_item_weight ),
                          grade( graded_item_grade ) {

}

// Getters:
std::string Graded_Item::get_name() const {
    return name;
}
double Graded_Item::get_weight() const {
    return weight;
}
double Graded_Item::get_grade() const {
    return grade;
}

// Setters:
void Graded_Item::set_name( std::string new_name ) {
    name = new_name;
}
void Graded_Item::set_weight(double new_weight) {
    if ( is_invalid_weight( new_weight ) ) {
        std::cout << "Invalid weight (" << new_weight << "). Weight not updated." << std::endl;
    } else {
        weight = new_weight;
    }
}
void Graded_Item::set_grade( double new_grade ) {
    if ( is_invalid_grade( new_grade ) ) {
        std::cout << "Invalid grade (" << new_grade << "). Grade not updated." << std::endl;
    } else {
        grade = new_grade;
    }
}