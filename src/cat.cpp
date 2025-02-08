#include "cat.h"

void Cat::speak(const std::string &words) {
    PRINT(name + " meowing: " + words);
}

void Cat::purr() {
    speak("purrr...PURRR...");
}

Cat::Cat(const std::string &name, const std::string &gender, int age) : Animal(name, gender, age) {}

//Question 1.b implement type function in both dog/cat and cpp/h
t_animal_type Cat::type() const {
    return 0;
}