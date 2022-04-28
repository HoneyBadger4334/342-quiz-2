## 2022 UWB CSS 342(A) Quiz-2 (40pt)

Inspired by a conversation with a student about virtual function ;)

### Code Guide
You do **NOT** have to fork this repo. 

Simple clone it into your CLion and setting up as usual would allow you to run the code on your machine.

***Note***: Your code answer below has to compile correctly or no point will be given.

### Task 1 (30pt)
The cat and dog class both inherit the *speak* function from the base class Animal, and yet they have their own function too:

Cat has a [purr function](https://github.com/a-teaching-goose/2022-342a-quiz-2/blob/4564cb356ef52b96213690783daa3088b7eaec7f/src/cat.cpp#L7):
```c++
void Cat::purr() {
    speak("purrr...PURRR...");
}
```

Dog has a [play function](https://github.com/a-teaching-goose/2022-342a-quiz-2/blob/4564cb356ef52b96213690783daa3088b7eaec7f/src/dog.cpp#L11):
```c++
void Dog::play() {
    PRINT(name + " dashing with the sticks...");
}
```

These functions are specific to Cat and Dog classes. Not in the Animal class.

We already know how to call the commonly inherited function *speak* using an array of animal class pointers. 

In this task, we are making it call those **non-inherited functions** *purr* and *play* in a loop with an array of pets. 

The task is the following:

- Add a **pure virtual** function in animal.h named *type*, and it should returns the type of animal defined in animal_types.h (10pt)

Your solution here (in animal.h):
```


```
- Implement the *type* function in both Cat and Dog

Your solution here 

in cat.h and/or cat.cpp (10pt):
```


```

in dog.h and dog.cpp (10pt):
```


```

- Run the [let_all_animal_runs_using_virtual](https://github.com/a-teaching-goose/2022-342a-quiz-2/blob/4564cb356ef52b96213690783daa3088b7eaec7f/test/unit_test_oop.cpp#L5), and make it match the following expected result:

<img width="292" alt="image" src="https://user-images.githubusercontent.com/252020/165799851-0944e7d1-7597-4ce2-bc9a-a7d5f9b46c29.png">

### Task 2 (10pt)

Does this code have memory leak? If yes, fix it.

### Extra Credit (5pt)

- List your top 5 technical debts from this class so far, and
- List your specific plan to resolve it

```
1.
2.
3.
4. 
5.
```
