#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, R, y;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;
    cout << "R = ";
    cin >> R;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -6)
            y = R;
        else
            if (x >= -6 && -R >= x)
                y = (5 * R - R * R) / (6 - R);
            else
                if (x >= -R && 0 >= x)
                    y = -sqrt(-x * x - 2 * x * R) + R;
                else
                    if (0 <= x && x <= R)
                        y = R - x;
                    else
                        if (R <= x && x < R + 1)
                            y = sqrt(R * R - x * x);
                        else
                            y = R - x    ;
        
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}