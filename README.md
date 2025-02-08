<img src="https://user-images.githubusercontent.com/252020/165812047-29e54547-e354-4811-b8fe-34f6606f37c3.png" width="50%">



## 2025 UWB CSS 342(D) Quiz-2 (40pt)

Inspired by a conversation with a student about virtual function ;)

### Due
Friday, 2/7 11:59pm PDT

### Code Guide
You do **NOT** have to fork this repo. 

Simple clone it into your CLion and setting up as usual would allow you to run the code on your machine.

***Note***: Your code answer below has to compile correctly or no point will be given.

### Task 1 (30pt)
The cat and dog class both inherit the *speak* function from the base class Animal, and yet they have their own function too:

Cat has a [purr function](https://github.com/Browne-s-Courses/342-quiz-2/blob/eaa319b6bfcd2f28996607330c2860501506f09a/src/cat.cpp#L7):
```c++
void Cat::purr() {
    speak("purrr...PURRR...");
}
```

Dog has a [play function](https://github.com/Browne-s-Courses/342-quiz-2/blob/eaa319b6bfcd2f28996607330c2860501506f09a/src/dog.cpp#L11):
```c++
void Dog::play() {
    PRINT(name + " dashing with the sticks...");
}
```

These functions are specific to Cat and Dog classes. Not in the Animal class.

We already know how to call the commonly inherited function *speak* using an array of animal class pointers. 

In this task, we are making it call those **non-inherited functions** *purr* and *play* in a loop with an array of pets. 

The task is the following:

- Add a **pure virtual** function in animal.h named *type*, and it should returns the type of animal defined in [animal_types.h](https://github.com/Browne-s-Courses/342-quiz-2/blob/main/src/animal_types.h) (10pt)

Your solution here (add it in [animal.h](https://github.com/Browne-s-Courses/342-quiz-2/blob/main/src/animal.h):
```
virtual t_animal_type type() const = 0;

```
- Implement the *type* function in both Cat and Dog

Your solution here 

in cat.h and/or cat.cpp (10pt):
```
in .h
t_animal_type type() const override;

in .cpp
t_animal_type Cat::type() const {
    return 0;
}
```

in dog.h and dog.cpp (10pt):
```
in .h
t_animal_type type() const override;

in .cpp
t_animal_type Dog::type() const {
    return 1;
}

```

- Run the [let_all_animal_runs_using_virtual](https://github.com/Browne-s-Courses/342-quiz-2/blob/eaa319b6bfcd2f28996607330c2860501506f09a/test/unit_test_oop.cpp#L5), and make it match the following expected result:

<img width="292" alt="image" src="https://user-images.githubusercontent.com/252020/165799851-0944e7d1-7597-4ce2-bc9a-a7d5f9b46c29.png">

Please add a screenshot of the output of your code as proof that you code compile and run correctly.
```
C:\Users\andyv\CLionProjects\342-quiz-2\bin\css342_homework_unit_test.exe --gtest_color=no
Testing started at 7:47 PM ...
cat_0 meowing: purrr...PURRR...
dog_1 dashing with the sticks...
cat_2 meowing: purrr...PURRR...
dog_3 dashing with the sticks...
cat_4 meowing: purrr...PURRR...
dog_5 dashing with the sticks...
cat_6 meowing: purrr...PURRR...
dog_7 dashing with the sticks...
cat_8 meowing: purrr...PURRR...
dog_9 dashing with the sticks...
Process finished with exit code 0

```

### Task 2 (10pt)

Does this entire code repo have memory leak? If yes, fix it. Add the code you would use to fix it. 
```
Code ran in 0 ms so I doubt there are any memory leaks

```

### Extra Credit (5pt)

- List your top 5 technical debts from this class so far, and
- List your specific plan to resolve it

```
1. Technical Debt 1: Pretty good understanding of reference but still a little bit confused with pointer and pointer to
another pointer. My plan to fix this is to go to a tutoring center for explanation or go to Prof. Connor Browne
if still confused.
2. Technical Debt 2: HW2 merge and removing functions logic is still confusing to me. My plan is to reach out to 
Prof. Connor Browne during office hour if tutoring center or youtube video doesn't help.
3. Technical Debt 3: I think I have trouble with Queues which was in the most recent class slides. Concept-wise I know 
queue is first in first out, however there are situations where the coding logic is used different. I don't know how to
tell the difference between which situations. My plan for this is to reach out to Prof. Connor Browne during office hour.
4. Technical Debt 4: I am horrible at studying CS topics. The way I study is just to look at slides, look at my code,
and watching youtube videos. Although this has worked somewhat for more beginner classes, it's not working so
good in harder classes so I need re-adjustments. My plan is to open up a new project, and code something similar and 
mess around with the code. For example new ways I can apply the code or optimizing it.
5. Technical Debt 5: Singly and Doubly LinkedList is something that I have previously learned in my java course 2 years
ago. I forgot a lot of what these are, and they were just covered in the most recent slides. My plan to resolve this is 
to look at my java code and try to understand and reverse engineer the code.
```
