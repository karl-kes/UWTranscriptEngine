#include "Classes/Graded_Item/Graded_Item.h"
#include "Classes/Graded_Category/Graded_Category.h"
#include "Classes/Course/Course.h"
#include "Helper_Functions/Input_Handling/Input_Handling.h"

int main();

int main() {
    
    std::vector<Course> courses{};
    std::string user_prompt{};

    std::cout << "New course [y/N]: ";
    std::cin >> user_prompt; std::cout << std::endl;

    if (user_prompt == "y" || user_prompt == "Y") {
        courses.push_back(user_created_course());
        std::cout << courses[0].get_name() << std::endl;
        std::cout << courses[0].get_grade() << std::endl;
        std::cout << courses[0].get_credit() << std::endl;
    }

    return 0;
}