#include <iostream>
#include "animal.h"
#include "animal_types.h"

class Cat : public Animal {

public:

    Cat(const std::string &name, const std::string &gender, int age);

    void speak(const std::string &words) override;

    void purr();
};