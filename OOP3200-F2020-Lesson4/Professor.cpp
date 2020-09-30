/**
 * Project Name: OOP3200-F2020-Lesson4
 * Author: Muzhda Ehsan
   Student ID: 100770164
   Date: 30-Sep-2020
 */


#include "Professor.h"


#include <iostream>
#include <utility>

/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(const std::string& first_name, const std::string& last_name, const float age, std::string employee_id):
	Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{
}

Professor::~Professor()
= default;

/**
 * @return std::string
 */
std::string Professor::getEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::setEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << getFirstName() << " is teaching!" << std::endl;
}

/**
 * @return std::string
 */
std::string Professor::ToString() {
    std::string output_string;

    output_string += Person::ToString();
    output_string += "__________________________________________\n";
    output_string += "Employee ID: " + getEmployeeID() + "\n";
    output_string += "__________________________________________\n";

    return output_string;
}