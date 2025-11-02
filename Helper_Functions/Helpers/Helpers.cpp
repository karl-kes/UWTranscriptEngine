#include "Helpers.h"

void clear_buffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void display_menu() {
    std::cout << "<---Transcript Engine--->" << std::endl << std::endl;

    std::cout << "1. Add a course" << std::endl;
    std::cout << "2. Edit a course" << std::endl;
    std::cout << "3. Delete a course" << std::endl;
    std::cout << "4. Display courses" << std::endl;
    std::cout << "5. Exit program" << std::endl;
    std::cout << "<----------------------->" << std::endl << std::endl;

    std::cout << "Enter option [1-5]: ";
}

void display_courses( std::vector<Course> course ) {
    std::cout << "<--- Courses --->" << std::endl << std::endl;
    for ( std::size_t index{0}; index < course.size(); ++index ) {
        std::cout << index + 1 << ". " << course[index].get_name() << std::endl;
    }
    std::cout << "<--------------->" << std::endl <<std::endl;
}