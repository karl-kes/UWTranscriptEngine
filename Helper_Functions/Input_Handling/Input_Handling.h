#pragma once
#include "../../Classes/Course/Course.h"
#include "../../Utilities/Constants.h"
#include <vector>


double get_valid_grade();
double get_valid_credit();
double get_valid_weight();
bool is_invalid_grade( double input_grade );
bool is_invalid_credit( double input_credit );
bool is_invalid_weight( double input_weight );
std::size_t user_selected_course( std::size_t length );
Course user_created_course();