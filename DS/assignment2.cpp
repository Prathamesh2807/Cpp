#include <iostream>
using namespace std;

int p1[50], p2[50], res[100];
int deg1, deg2;

int readpoly(int arr[])
{
    int deg;
    cout << "Enter degree of polynomial: ";
    cin >> deg;

    for (int i = 0; i <= deg; i++)
        arr[i] = 0;

    for (int i = deg; i >= 0; i--)
    {
        cout << "Enter coefficient of x^" << i << ": ";
        cin >> arr[i];
    }
    return deg;
}

void display(int arr[], int deg)
{
    bool first = true;
    for (int i = deg; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            if (!first)
                cout << " + ";
            cout << arr[i] << "x^" << i;
            first = false;
        }
    }
    if (first)
        cout << "0";
    cout << endl;
}

void addpoly()
{
    int maxdeg = max(deg1, deg2);
    for (int i = 0; i <= maxdeg; i++)
    {
        int a = (i <= deg1) ? p1[i] : 0;
        int b = (i <= deg2) ? p2[i] : 0;
        res[i] = a + b;
    }
    cout << "Sum = ";
    display(res, maxdeg);
}

void subpoly()
{
    int maxdeg = max(deg1, deg2);
    for (int i = 0; i <= maxdeg; i++)
    {
        int a = (i <= deg1) ? p1[i] : 0;
        int b = (i <= deg2) ? p2[i] : 0;
        res[i] = a - b;
    }
    cout << "Difference = ";
    display(res, maxdeg);
}

void mulpoly()
{
    int muldeg = deg1 + deg2;
    for (int i = 0; i <= muldeg; i++)
        res[i] = 0;

    for (int i = 0; i <= deg1; i++)
    {
        for (int j = 0; j <= deg2; j++)
        {
            res[i + j] = res[i + j] + p1[i] * p2[j];
        }
    }
    cout << "Product = ";
    display(res, muldeg);
}

int evalpoly(int arr[], int deg, int x)
{
    int sum = 0;
    for (int i = 0; i <= deg; i++)
    {
        int val = 1;
        for (int j = 0; j < i; j++)
            val = val * x;
        sum = sum + arr[i] * val;
    }
    return sum;
}

int main()
{
    int choice, x;

    while (1)
    {
        cout << "\n1. Enter Polynomial 1\n";
        cout << "2. Enter Polynomial 2\n";
        cout << "3. Add\n";
        cout << "4. Subtract\n";
        cout << "5. Multiply\n";
        cout << "6. Evaluate Polynomial 1\n";
        cout << "7. Evaluate Polynomial 2\n";
        cout << "8. Display Polynomials\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deg1 = readpoly(p1);
            break;
        case 2:
            deg2 = readpoly(p2);
            break;
        case 3:
            addpoly();
            break;
        case 4:
            subpoly();
            break;
        case 5:
            mulpoly();
            break;
        case 6:
            cout << "Enter value of x: ";
            cin >> x;
            cout << "P1(" << x << ") = " << evalpoly(p1, deg1, x) << endl;
            break;
        case 7:
            cout << "Enter value of x: ";
            cin >> x;
            cout << "P2(" << x << ") = " << evalpoly(p2, deg2, x) << endl;
            break;
        case 8:
            cout << "P1 = ";
            display(p1, deg1);
            cout << "P2 = ";
            display(p2, deg2);
            break;
        case 9:
            return 0;
        default:
            cout << "Wrong choice\n";
        }
    }
    return 0;
}