// Name: Khrisean Stewart
// Date: 2025-12-06
// Id Number: 2401010326
// Question: 1
// Instructor: Doron Williams

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
    float length;
    float height;

public:
    // constructor... both to 5.0
    Rectangle() : length(5.0f), height(5.0f) {}

    void setLength(float l)
    {
        if (l > 0.0f)
            length = l;
        else
            cout << "Error: Length must be > 0.0\n";
    }

    void setHeight(float h)
    {
        if (h > 0.0f)
            height = h;
        else
            cout << "Error: Height must be > 0.0\n";
    }

    float getLength() { return length; }
    float getHeight() { return height; }

    float calculateArea()
    {
        float area = length * height;
        cout << fixed << setprecision(2) << "shape area: " << area << "\n";
        return area;
    }

    float calculatePerimeter()
    {
        float p = 2 * (length + height);
        cout << fixed << setprecision(2) << "shape perimeter: " << p << "\n";
        return p;
    }
};

class Triangle : public Rectangle
{
public:
    Triangle() : Rectangle() {}

    // override calculateArea
    float calculateArea()
    {
        float area = (getLength() * getHeight()) / 2.0f;
        cout << fixed << setprecision(2) << "Area of triangle: " << area << "\n";
        return area;
    }
};

int main()
{
    Rectangle r;
    r.calculateArea();
    r.calculatePerimeter();
    r.setLength(10.0f);
    r.setHeight(3.5f);
    r.calculateArea();
    r.calculatePerimeter();

    Triangle t;
    t.setLength(10.0f);
    t.setHeight(3.5f);
    t.calculateArea();

    return 0;
}
