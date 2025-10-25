#include "Graded_Category.h"

// Constructor:
Graded_Category::Graded_Category(std::string category_name,
                                 std::vector<Graded_Item> category_items,
                                 double category_weight) :
                                 name(category_name),
                                 graded_items(category_items),
                                 weight(category_weight) {

}

// Getters:
std::string Graded_Category::get_name() const {
    return name;
}
std::vector<Graded_Item> Graded_Category::get_graded_items() const {
    return graded_items;
}
double Graded_Category::get_weight() const {
    return weight;
}

// Setters:
void Graded_Category::set_name(std::string new_name) {
    name = new_name;
}
void Graded_Category::set_graded_items(std::vector<Graded_Item> new_graded_item) {
    graded_items = new_graded_item;
}
void Graded_Category::set_weight(double new_weight) { 
    if (0 < new_weight && new_weight <= 1) {
        weight = new_weight;
    } else {
        std::cerr << "Invalid weight. Weight not updated" << std::endl;
    }
}