#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //ex1
    double height = 0;
    double weight = 0;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "BMI: " << double(weight/(height*height)) << endl;

    //==================================================================================================================
    //ex2
    cout << " " << endl;

    double a, b, c = 0;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    double delta;
    double x0, x1, x2;
    delta = (b*b) - (4*a*c);
    cout << "Delta: " << sqrt(delta) << endl;

    if(delta > 0) {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        cout << x1 << " and " << x2;
    }
    else if (delta < 0) {
        cout << "Delta is below 0!";
    }
    else if (delta == 0) {
        x0 = -b/(2*a);
        cout << x0;
    }

    //==================================================================================================================
    //ex3
    cout << " " << endl;

    cout << "Enter three non-negative values: ";
    unsigned int x, y, z, max;
    cin >> x >> y >> z;

    if(x >= y && x >= z)
        max = x;
    else if(y >= x && y >= z)
        max = y;
    else max = z;

    for(int i = max; i > 0; i--) {
        if(i > z)
            cout << " ";
        else
            cout << "*";

        if(i > x)
            cout << " ";
        else
            cout << "*";

        if(i > y)
            cout << " ";
        else
            cout << "*";

        cout << endl;
    }

    //==================================================================================================================
    //ex4
    cout << " " << endl;

    int val = 0;
    int sum = 0;
    int maxsum = 0;
    int maxval = 0;

    do {
        cout << "Enter a number: ";
        cin >> val;
        int tmp = val;

        while(tmp != 0) {
            sum += tmp%10;
            tmp /= 10;
        }

        if(maxsum < sum) {
            maxsum = sum;
            maxval = val;
        }
        sum = 0;

    } while(val != 0);

    cout << "The highest sum is " << maxsum << " of the number " << maxval;

    return 0;
}
