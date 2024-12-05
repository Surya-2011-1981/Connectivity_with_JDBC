#include <iostream>
using namespace std;

// area of rect --> int
int rect(int length, int width)
{
    return length * width;
}

// area by --> double
double rect2(double length, double width)
{
    return length * width;
}

int main()
{

    int l1 = 5, w1 = 10;
    double l2 = 5.5, w2 = 10.5;

    cout << "Area of rectangle (int): " << rect(l1, w1) << endl;
    cout << "Area of rectangle (double): " << rect2(l2, w2) << endl;

    return 0;
}
