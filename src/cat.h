#include <iostream>
#include "animal.h"
#include "animal_types.h"

class Cat : public Animal {
public:

    Cat(const std::string &name, const std::string &gender, int age);

    void speak(const std::string &words) override;

    void purr();

    //Question 1.b implement type function in both dog/cat and cpp/h
    t_animal_type type() const override;

};