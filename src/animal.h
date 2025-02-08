#pragma once

#include <iostream>
#include "animal_types.h"

#define PRINT(x) std::cout<< x << std::endl

class Animal {
protected:
    std::string name;
    std::string gender;
    int age;

public:
    Animal(const std::string &name, const std::string &gender, int age);

    // what would happen without "virtual" here.
    // Try it.
    virtual void speak(const std::string &words) = 0;

    //Question 1.a implement pure virtual named type function
    virtual t_animal_type type() const = 0;
};