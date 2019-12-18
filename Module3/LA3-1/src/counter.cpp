#include "counter.h"

Counter Counter::operator ++()
{
    std::cout << "pre\n";
    return Counter(++m_count);
}

Counter Counter::operator ++(int)
{
    std::cout << "post\n";
    return Counter(m_count++);
}