/*
 This code uses a Monte-Carlo technique to estimate a numerical value of pi.
*/

#include <iostream>
#include <chrono>
#include <random>
#include <cmath>

using namespace std;

double generateRadius()
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator (seed);

    // Generate pseudo-random numbers in the range [-1, 1].
    uniform_real_distribution<double> distribution (-1.0, 1.0);

    double x = distribution(generator);
    double y = distribution(generator);

    // Using the Pythagorean theorem to return distance of (x, y) from the origin.
    double radius = sqrt(x*x + y*y);

    return radius;
}

double predictPi(const int num)
{
    double numInCircle;

    for (int i = 0; i < num; i++)
    {
        double r = generateRadius();

        if (fabs(r) <= 1)
        {
            numInCircle += 1;
        }
    }

    double pi = numInCircle * 4 / (double)num;

    // }
    //
    // double pi = 0.0;
    //
    // for (int j = 0; j < num; j++)
    // {
    //     pi += radii[j] * 4 / (double)num;     // The factor of 4 comes from the area of the square.
    // }

    return pi;
}


int main()
{
    int n = 1000000;
    double pi = predictPi(n);

    cout << pi << endl;

    return 0;
}
