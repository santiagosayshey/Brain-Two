/* Example of **violation** of Interface Segregation Principle */
/* adapted from: Robert Martin - "Design Principles and Patterns"*/
// users of the class aren't going to need all of these!

class Human {
    getMoveFromKeyboard();
    getMoveFromGUI();
    getMoveFromNetwork();
};