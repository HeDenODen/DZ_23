#include <iostream>

using namespace std;

int main()
{
    //1
    int n;
    cout << "Enter number: ";
    cin >> n;
    int* pn = &n;
    if (*pn < 0)
        cout << *pn << " < 0" << endl;
    else
        cout << *pn << " >= 0" << endl;
    
    //2
    float a;
    cout << "Enter first number: ";
    cin >> a;
    char c;
    cout << "Enter sign(+, -, *, /): ";
    cin >> c;
    float b;
    cout << "Enter second number: ";
    cin >> b;
    float* pa = &a;
    float* pb = &b;
    char* pc = &c;
    if (*pc == '+')
        cout << *pa << " + " << *pb << " = " << *pa + *pb << endl;
    else if (*pc == '-')
        cout << *pa << " - " << *pb << " = " << *pa - *pb << endl;
    else if (*pc == '*')
        cout << *pa << " * " << *pb << " = " << *pa * *pb << endl;
    else if (*pc == '/')
        cout << *pa << " / " << *pb << " = " << *pa / *pb << endl;
    else
        cout << "Something wrong!" << endl;

    //3
    int x;
    cout << "Enter x: ";
    cin >> x;
    int y;
    cout << "Enter y: ";
    cin >> y;
    int r;
    int* px = &x;
    int* py = &y;
    int* pr = &r;
    *pr = *px;
    *px = *py;
    *py = *pr;
    cout << "New x = " << *px << endl;
    cout << "New y = " << *py << endl;
    return 0;
}