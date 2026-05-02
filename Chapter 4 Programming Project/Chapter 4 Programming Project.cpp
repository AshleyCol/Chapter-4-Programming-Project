#include <iostream>

using namespace std;

int main()
{
    float weight = 20;
    int distance = 0;

    cout << "How much does the package weigh? (kg)\n";
    cin >> weight;
    if (weight <= 0 or weight > 20) {
        cout << "weight is not within restrictions";
        return 0;
    }
    cout << "How far are you shipping it? (miles)\n";
    cin >> distance;
    if (distance < 20 or distance > 3000) {
        cout << "distance is not within restrictions";
        return 0;
    }
    if (weight <= 2)
        cout << "the price is $" << 1.10 * (distance / 500);
    else
        if (weight < 6)
            cout << "the price is $" << 2.20 * (distance / 500);
        else
            if (weight < 10)
                cout << "the price is $" << 3.70 * (distance / 500);
            else
                cout << "the price is $" << 4.80 * (distance / 500);

    return 0;
}
