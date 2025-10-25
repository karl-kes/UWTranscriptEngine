#include "Graded_Item/Graded_Item.h"
#include "Graded_Category/Graded_Category.h"
#include "Course/Course.h"
#include <iostream>
#include <vector>

int main();

int main() {
    std::vector<Course> courses{};
    std::string user_prompt{};

    std::cout << "New course [y/N]: " << std::endl;
    std::cin >> user_prompt; std::cout << std::endl;

    if (user_prompt == "y" || user_prompt == "Y") {
        courses.push_back(Course::user_created_course());
        std::cout << courses[0].get_name() << courses[0].get_grade() << courses[0].get_credit() << std::endl;
    }

    return 0;
}