#include "Graded_Item.h"

// Constructor:
Graded_Item::Graded_Item(std::string graded_item_name, 
                         double graded_item_weight, 
                         double graded_item_grade) :
                         name(graded_item_name),
                         weight(graded_item_weight),
                         grade(graded_item_grade) {

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
void Graded_Item::set_name(std::string new_name) {
    name = new_name;
}
void Graded_Item::set_weight(double new_weight) {
    if (0 < new_weight && new_weight <= 1) {
        weight = new_weight;
    } else {
        std::cout << "Invalid weight. Weight not updated." << std::endl;
    }
}
void Graded_Item::set_grade(double new_grade) {
    if (0 <= new_grade && new_grade <= 100) {
        grade = new_grade;
    } else {
        std::cout << "Invalid grade. Grade not updated." << std::endl;
    }
}