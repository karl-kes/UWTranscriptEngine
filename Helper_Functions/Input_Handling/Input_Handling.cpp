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

bool is_invalid_grade( double input_grade ) {
    if ( ( MIN_GRADE > input_grade ) || (MAX_GRADE < input_grade ) ) {
        return true;
    }
    return false;
}

bool is_invalid_credit ( double input_credit ) {
    if ( ( std::abs( input_credit - FULL_CREDIT ) > EPSILON ) &&
         ( std::abs( input_credit - HALF_CREDIT ) > EPSILON ) ) {
        return true;
    }
    return false;
}

bool is_invalid_weight ( double input_weight ) {
    if ( ( MIN_WEIGHT > input_weight ) || 
         (MAX_WEIGHT < input_weight ) ) {
        return true;
    }
    return false;
}

std::size_t user_selected_course( std::size_t length ) {
    std::size_t index{};
    do {
        std::cout << "Enter selected course [1-" << length << "]: ";
        std::cin >> index;
        index--;

        if ( index >= length ) {
            std::cout << "Invalid index. Index not updated." << std::endl;
        }
    } while ( index >= length );

    return index;
}

Course user_created_course() {
    char user_prompt{};
    std::string new_course_name{},
    double new_course_grade{ 0.0 }, new_course_credit{ 0.0 };

    std::cout << "Enter course name: ";
    std::getline( std::cin, new_course_name );

    std::cout << "Is course completed [y/N]: ";
    std::cin >> user_prompt;
    bool course_completed{ ( user_prompt == 'y' ) || 
                           ( user_prompt == 'Y' ) };

    if ( course_completed ) {
        new_course_grade = get_valid_grade();
    } else {
        std::cout << "You may add graded work from the menu." << std::endl;
    }

    new_course_credit = get_valid_credit();

    std::vector<Graded_Category> new_graded_category{};

    return Course{ new_course_name, new_course_grade, new_course_credit, new_graded_category };
}