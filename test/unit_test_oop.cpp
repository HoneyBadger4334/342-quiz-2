#include "gtest/gtest.h"
#include "cat.h"
#include "dog.h"

TEST(oop, let_all_animal_runs_using_virtual) {
    // create an array of 10 pets, 5 cats, 5 dogs
    std::vector<Animal *> pets;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            pets.push_back(
                    new Cat("cat_" + std::to_string(i),
                            (i % 5 == 0) ? MALE : FEMALE,
                            i + 1)
            );
        } else {
            pets.push_back(
                    new Dog("dog_" + std::to_string(i),
                            (i % 7 == 0) ? MALE : FEMALE,
                            i + 2)
            );
        }
    }

    for (auto pet: pets) {
        switch (pet->type()) {
            case CAT: {
                Cat *cat = (Cat *) pet;
                cat->purr();
                break;
            }
            case DOG: {
                Dog *dog = (Dog *) pet;
                dog->play();
                break;
            }
            default:
                std::cout << "unknown animal" << std::endl;
        }
    }
}
