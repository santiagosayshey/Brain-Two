/* Example of **violation** of Dependency Inversion Principle */

class Human {
    ...
};

class Computer {
    ...
};

class Referee {
    // referee now depends on concrete classes
    // dependencies should be on abstract classes
    string refGame(Human h, Computer c);
};