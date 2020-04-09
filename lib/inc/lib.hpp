#ifndef LIB_H
#define LIB_H

#include <memory>
#include <string>

struct Data
{
};

class Interface
{
public:
    virtual void method1() = 0;
    virtual void method2(int param1) = 0;
    virtual int method3(int param1, const std::string& param2) = 0;
    virtual bool method4(Data data) = 0;
};

class Class
{
public:
    Class(std::shared_ptr<Interface> interface) : interface_{interface}
    {
    }

    void method1();
    void method2(int param1);
    int method3(int param1, const std::string& param2);
    bool method4(Data data);

private:
    std::shared_ptr<Interface> interface_;
};

#endif  // LIB_H
