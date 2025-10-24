#include <iostream>
#include <vector>
#include <string>

class Graded_Item {
private:
    std::string name;
    double weight;
    double grade;

public:
    // Constructor:
    Graded_Item(std::string graded_item_name, 
                double graded_item_weight, 
                double graded_item_grade);
                
    // Getters:
    std::string get_name() const;
    double get_weight() const;
    double get_grade() const;

    // Setters:
    std::string set_name(std::string new_name);
    double set_weight(double new_weight);
    double set_grade(double new_grade);
};
