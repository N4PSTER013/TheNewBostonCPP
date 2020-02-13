#include <iostream>

using namespace std;

int addNumbers(int x, int z)
{
    int num = x + z;
    return num;
}

int main()
{
    int y;
    int b;

    cout << "Enter with a number: ";
    cin >> y;

    cout << "\nEnter with a number: ";
    cin >> b;

    int answer = addNumbers(y, b);

    cout << "\n" << y << " + " << b << " = " << answer;

    return 0;
}
