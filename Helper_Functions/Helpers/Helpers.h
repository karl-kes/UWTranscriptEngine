#pragma once
#include <limits>
#include <iostream>
#include <vector>
#include "../../Utilities/Constants.h"
#include "../../Classes/Course/Course.h"

void clear_buffer();
void display_menu();
void display_courses( const std::vector<Course>& course );