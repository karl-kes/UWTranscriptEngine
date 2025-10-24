#include "Graded_Item\Graded_Item.h"

class Graded_Category {
private:
    std::string name;
    std::vector<Graded_Item> graded_items;
    double weight;

public:
    // Constructor:
    Graded_Category(std::string category_name,
                    std::vector<Graded_Item> category_items,
                    double category_weight);

    // Getters:
    std::string get_name() const;
    std::vector<Graded_Item> get_graded_items() const;
    double get_weight() const;

    // Setters:
    std::string set_name(std::string new_name);
    std::vector<Graded_Item> set_graded_items(std::vector<Graded_Item> new_graded_item);
    double set_weight(double new_weight);
};