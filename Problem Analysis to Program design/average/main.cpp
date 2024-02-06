#include <iostream>

using namespace std;

int main()
{
    // input -> test scores
    // output -> weighted average
    /*
        Weighted average is the average of a set of numbers,
        each with different associated “weights” or values.
        To find a weighted average, multiply each number by its weight,
        then add the results
    */

    int testScores[4] = {50, 67, 38, 97};
    float weightTestScores[4] = {0.15,0.25,0.25, 0.30};
    float sum = 0;

    for (int i = 0; i<4; i++) {
        sum += (testScores[i] * weightTestScores[i]);
    }

    cout << sum << "  Is the weighted average"<< endl;

    return 0;
}
