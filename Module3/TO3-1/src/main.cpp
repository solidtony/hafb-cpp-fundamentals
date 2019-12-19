#include <iostream>
#include "distance.h"

// Main Function
int main() 
{
  Distance dis1(1, -2.5);
  Distance dis2(2, 0.5);
  auto dis3 = dis1 - dis2;
  auto dis4 = dis2 - dis1;
  
  dis1.ShowDist();
  dis2.ShowDist();
  dis3.ShowDist();
  dis4.ShowDist();
  
  return 0;
}