#include "Graded_Category.h"

// Constructor:
Graded_Category::Graded_Category(std::string category_name,
                std::vector<Graded_Item> category_items,
                double category_weight) {

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
std::string Graded_Category::set_name(std::string new_name) {

}
std::vector<Graded_Item> Graded_Category::set_graded_items(std::vector<Graded_Item> new_graded_item) {

}
double Graded_Category::set_weight(double new_weight) { 

}