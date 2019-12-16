#include <iostream>

int main()
{
    std::cout << "\nData Type  Bytes"
              << "\n---------  -----"
              << "\nint        " << sizeof(int)
              << "\nchar       " << sizeof(char)
              << "\nlong       " << sizeof(long)
              << "\nbool       " << sizeof(bool)
              << std::endl;

    return 0;
}