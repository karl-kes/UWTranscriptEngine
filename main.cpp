#include "Classes/Graded_Item/Graded_Item.h"
#include "Classes/Graded_Category/Graded_Category.h"
#include "Classes/Course/Course.h"
#include "Helper_Functions/Input_Handling/Input_Handling.h"

int main();

int main() {
    std::vector<Course> courses{};
    char menu_prompt{};

    do {
        print_menu();
        std::cin >> menu_prompt;
        clear_buffer();

        switch ( menu_prompt ) {
        // Case 4: Exit.
        case '4':
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
            // delete course.
            break;

        // Otherwise repeat.
        default:
            std::cout << "Invalid choice. Please enter 1-4." << std::endl;
        }

    } while ( true );
}