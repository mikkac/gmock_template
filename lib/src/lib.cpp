#include "lib.hpp"

void Class::method1()
{
    interface_->method1();
}

void Class::method2(int param1)
{
    interface_->method2(param1);
}

int Class::method3(int param1, const std::string& param2)
{
    return interface_->method3(param1, param2);
}

bool Class::method4(Data data)
{
    return interface_->method4(data);
}
