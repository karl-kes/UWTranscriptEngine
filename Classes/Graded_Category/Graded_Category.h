#pragma once
#include "../../Classes/Graded_Item/Graded_Item.h"

class Graded_Category {
private:
    double weight;
    std::string name;
    std::vector<Graded_Item> graded_item;

public:
    // Constructor:
    Graded_Category( std::string category_name,
                     std::vector<Graded_Item> graded_item,
                     double category_weight );

    // Getters:
    std::string get_name() const;
    std::vector<Graded_Item> get_graded_item() const;
    double get_weight() const;

    // Setters:
    void set_name( std::string new_name) ;
    void set_graded_item( std::vector<Graded_Item> new_graded_item );
    void set_weight( double new_weight );
};