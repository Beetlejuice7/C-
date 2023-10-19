#include<iostream>
using namespace std;
int fnum, snum, sum, choice;
int main()
{
    cout << "Gantey Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1 :
        cout << "Enter first integer : " << endl;
        cin >> fnum;
        cout << "Enter second integer : " << endl;
        cin >> snum;
        fnum += snum;
        cout << "Sum of two number : " << fnum << endl;
        break;

    case 2 :
        cout << "Enter first integer : " << endl;
        cin >> fnum;
        cout << "Enter second integer : " << endl;
        cin >> snum;
        fnum -= snum;
        cout << "Answer : " << fnum << endl;
        break;    
    
    case 3 :
        cout << "Enter first integer : " << endl;
        cin >> fnum;
        cout << "Enter second integer : " << endl;
        cin >> snum;
        fnum *= snum;
        cout << "Answer : " << fnum << endl;
        break;

    case 4 :
        cout << "Enter first integer : " << endl;
        cin >> fnum;
        cout << "Enter second integer : " << endl;
        cin >> snum;
        fnum /= snum;
        cout << "Answer : " << fnum << endl;
        break;

    default:
        cout << "Invalid Selection" << endl;
        break;
    }
    cout << endl;

    return 0;
}