#include "Input_Handling.h"

double get_valid_grade() {
    double input_grade{ 0.0 };

    do {
        std::cout << "Enter course grade [0-100]: ";
        std::cin >> input_grade;

        if  ( is_invalid_grade( input_grade ) ) {
            std::cout << "Invalid grade (" << input_grade << "). Course grade not updated." << std::endl;
        } else {
            std::cout << "New course grade: " << input_grade << "%." << std::endl;
        }
    } while ( is_invalid_grade( input_grade ) );

    return input_grade;
}

double get_valid_credit() {
    double input_credit{ 0.0 };

    do {
        std::cout << "Enter course credit [0.25 / 0.50]: ";
        std::cin >> input_credit;

        if ( is_invalid_credit( input_credit ) ) {
            std::cout << "Invalid credit (" << input_credit << "). Course credit not updated." << std::endl;
        } else {
            std::cout << "New course credit: " << input_credit << "." << std::endl;
        }
    } while ( is_invalid_credit( input_credit ) );

    return input_credit;
}

double get_valid_weight() {
    double input_weight{ 0.0 };

    do {
        std::cout << "Enter weight [0-100] ";
        std::cin >> input_weight;

        if ( is_invalid_weight( input_weight ) ) {
            std::cout << "Invalid weight (" << input_weight << "). Weight not updated." << std::endl;
        } else {
            std::cout << "New weight: " << input_weight << "." << std::endl;
        }
    } while ( is_invalid_weight( input_weight ) );

    return input_weight;
}

Course user_created_course() {
    std::string new_course_name{}, user_prompt{};
    double new_course_grade{ 0.0 }, new_course_credit{ 0.0 };

    std::cout << "Enter course name: ";
    clear_buffer();
    std::getline( std::cin, new_course_name );

    std::cout << "Is course completed [y/N]: ";
    std::cin >> user_prompt;
    bool course_completed{ ( user_prompt == "y" ) || 
                           ( user_prompt == "Y" ) };

    if ( course_completed ) {
        new_course_grade = get_valid_grade();
    } else {
        std::cout << "You may add graded work from the menu." << std::endl;
    }

    new_course_credit = get_valid_credit();

    return Course{new_course_name, new_course_grade, new_course_credit};
}