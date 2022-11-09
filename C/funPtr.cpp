#include "iostream"

using namespace std;

//int (*ptr[4])(int num1, int num2) = {add, sub, mul, div};

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int (*ptr[4])(int num1, int num2) = {add, sub, mul, div};

int main()
{
    char *str = "this is a string";
    cout << str << endl;
    cout << ptr[1](2,4) << endl;
    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    if(0 != num2)
    {
        return num1 / num2;
    }
    else
    {
        cout << "The divider is zero.";
    }
}
