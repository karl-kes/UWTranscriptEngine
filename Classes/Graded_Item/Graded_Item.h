#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "../../Utilities/Constants.h"
#include "../../Helper_Functions/Helpers/Helpers.h"
#include "../../Helper_Functions/Input_Handling/Input_Handling.h"

class Graded_Item {
private:
    std::string name;
    double weight;
    double grade;

public:
    // Constructor:
    Graded_Item( std::string graded_item_name, 
                 double graded_item_weight, 
                 double graded_item_grade );
                
    // Getters:
    std::string get_name() const;
    double get_weight() const;
    double get_grade() const;

    // Setters:
    void set_name( std::string new_name );
    void set_weight( double new_weight );
    void set_grade( double new_grade );
};
