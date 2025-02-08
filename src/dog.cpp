#include "dog.h"

void Dog::speak(const std::string &words) {
    PRINT(name + " ruffing: " + words);
}

void Dog::play(const std::string &toy) {
    PRINT(name + " playing with " + toy);
}

void Dog::play() {
    PRINT(name + " dashing with the sticks...");
}

Dog::Dog(const std::string &name, const std::string &gender, int age) : Animal(name, gender, age) {}

//Question 1.b implement type function in both dog/cat and cpp/h
t_animal_type Dog::type() const {
    return 1;
}