#include "animal.h"
#include "animal_types.h"

#include <iostream>

class Dog : public Animal {
private:
    std::string owner;

public:

    Dog(const std::string &name, const std::string &gender, int age);

    void speak(const std::string &words) override;

    void play(const std::string &toy);

    void play();

    //Question 1.b implement type function in both dog/cat and cpp/h
    t_animal_type type() const override;
};