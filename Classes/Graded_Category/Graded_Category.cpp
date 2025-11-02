#include "Graded_Category.h"

// Constructor:
Graded_Category::Graded_Category( std::string category_name,
                                  std::vector<Graded_Item> category_graded_item,
                                  double category_weight ) :
                                  name( category_name ),
                                  graded_item( category_graded_item ),
                                  weight( category_weight ) {

}

// Getters:
std::string Graded_Category::get_name() const {
    return name;
}
std::vector<Graded_Item> Graded_Category::get_graded_item() const {
    return graded_item;
}
double Graded_Category::get_weight() const {
    return weight;
}

// Setters:
void Graded_Category::set_name( std::string new_name ) {
    name = new_name;
}
void Graded_Category::set_graded_item( std::vector<Graded_Item> new_graded_item ) {
    graded_item = new_graded_item;
}
void Graded_Category::set_weight( double new_weight ) { 
    if ( is_invalid_weight( new_weight ) ) {
        std::cout << "Invalid weight (" << new_weight << "). Weight not updated" << std::endl;
    } else {
        weight = new_weight;
    }
}