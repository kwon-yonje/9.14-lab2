//#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

namespace Kwonyonje2649061
{
    struct student
    {
        int id{};
        int score{};
    };
    student inputStudent();
    void printStudent(const student &s);
}
#endif