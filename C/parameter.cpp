#include <iostream>

using namespace std;

//对于这个函数，形参和实参都为const，里外都不能对参数进行更改
int fun(const int &num)
{
    cout << num << endl;
}

//对于这个函数，引用所产生的作用和指针比较相似
int fun_2(int &num)
{
    cout << num++ << endl;
    num = 123;
    cout << num << endl;
}

int main(int argc, char* argv[])
{
    const int &num = 123;
    int a = 1;
    int &num_2 = a;
    num_2++;
    //输出2，因为上面自增
    cout << num_2 << endl;
    //输出123
    fun(123);
    //输出2和123，因为自增是在输出之后
    fun_2(num_2);
    //输出123，在函数中更改了内容
    cout << num_2 << endl;
    return 0;
}
