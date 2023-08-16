/* Example of **violation** of Liskov Substitution Principle */
/* adapted from: Robert Martin - "Design Principles and Patterns"*/

class Ellipse {
    private:
        Point focusA;
        Point focusB;
        double majorAxes;
    public:
        double circumference();
        Point getFocusA();
        void setFoci(Point a, Point b);
        ....
};

class Circle public Ellipse {
};

int main(void) {
    Ellipse myCircle;
    Point a(3,0);
    Point b(-3,0);

    // Circles can not have different foci!
    // but if it is an ellipse, this should
    // be possible.

    myCircle.setFoci(a, b);
}