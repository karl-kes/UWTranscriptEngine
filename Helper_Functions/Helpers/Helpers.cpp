#include "Helpers.h"

void clear_buffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void print_menu() {
    std::cout << "<---Transcript Engine--->" << std::endl << std::endl;

    std::cout << "1. Add a course" << std::endl;
    std::cout << "2. Edit a course" << std::endl;
    std::cout << "3. Delete a course" << std::endl;
    std::cout << "4. Exit" << std::endl << std::endl;

    std::cout << "Enter option [1-4]: ";
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
    if ( ( MIN_GRADE > input_weight ) || 
         (MAX_GRADE < input_weight ) ) {
        return true;
    }
    return false;
}