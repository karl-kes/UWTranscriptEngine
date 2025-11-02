#include "Classes/Graded_Item/Graded_Item.h"
#include "Classes/Graded_Category/Graded_Category.h"
#include "Classes/Course/Course.h"
#include "Helper_Functions/Input_Handling/Input_Handling.h"
#include "Helper_Functions/Helpers/Helpers.h"

int main();

int main() {
    std::vector<Course> courses{};
    char menu_prompt{};

    do {
        display_menu();
        std::cin >> menu_prompt;
        clear_buffer();

        switch ( menu_prompt ) {
        // Case 5: Exit.
        case '5':
            return 0;

        // Case 1: Add course.
        case '1':
            courses.push_back( user_created_course() );
            break;
        
        // Case 2: Edit course.
        case '2':
            // edit course.
            break;

        // Case 3: Delete course.
        case '3':
            display_courses( courses );
            std::cout << "You are deleting a course." << std::endl;
            courses.erase( courses.begin() + user_selected_course( courses.size() ) );
            std::cout << "Course deleted successfully." << std::endl;
            break;
        
        // Case 4: Display courses.
        case '4':
            display_courses( courses );
            break;

        // Otherwise repeat.
        default:
            std::cout << "Invalid choice. Please enter 1-5." << std::endl;
        }

    } while ( true );
}