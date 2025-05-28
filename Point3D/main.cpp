#include "Point3D.h"

int main() {
    Point3D a(1, 1, 1), b(2, 2, 2), c(3, 3, 3);

    cout << a.toString() << " + " << b.toString()
        << " = " << a.sum(b).toString() << endl;

    int value = 5;
    cout << a.toString() << " + " << to_string(value)
        << " = " << a.sum(value).toString() << endl;

    return 0;
}
