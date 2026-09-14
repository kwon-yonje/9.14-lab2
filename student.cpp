#include "student.h"

namespace Kwonyonje2649061
{    
    student inputStudent()
    {
        student s{};
        std::cout << "enter id: ";
        std::cin >> s.id;
        std::cout << "enter score: ";
        std::cin >> s.score;
        return s;
    }
    void printStudent(const student &s)
    {
        std::cout << "Student ID: " << s.id <<std::endl;
        std::cout << "Score: " << s.score << "points\n";
    }
}