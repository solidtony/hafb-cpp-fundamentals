#pragma once

#include <iostream>

class Counter
{
private:
    /* data */
    unsigned int m_count;

public:
    Counter() : m_count(0) {}
    Counter(unsigned int count) : m_count(count) {}
    ~Counter() {}
    
    // Setters/Getters
    unsigned int Count(){return m_count;}
    void SetCount(unsigned int count) {m_count = count;}
    // Operator overloads
    //void operator ++() { ++m_count; }
    Counter operator ++();
    Counter operator ++(int);
};
