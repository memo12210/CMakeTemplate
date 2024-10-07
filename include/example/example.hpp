#ifndef EXAMPLE_HPP
#define EXAMPLE_HPP
#include <string>

class Example
{
private:
    std::string m_str;
public:
    Example(const std::string &str);
    void printStr() const;
};

#endif //EXAMPLE_HPP
