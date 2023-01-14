#include <iostream>
#include <header.hpp>

using namespace std;
int main()
{
    dcm d;
    d.num = 100;
    for (int i = 0; i < 100000; ++i)
    {
        float d_value = 10.0f / float(i);
        float p_value = 0.01f * float(i) + 100.0f;
    }
    cout<< "hello"<<endl;
    return 0;
}