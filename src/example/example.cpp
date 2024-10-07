#include <iostream>
#include <example/example.hpp>

Example::Example(const std::string &str)
{
    m_str = str;
}

void Example::printStr() const
{
    std::cout << m_str << "\n";
}
