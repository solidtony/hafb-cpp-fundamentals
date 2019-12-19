#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance dis1 = Distance(2, 42.3f);
  dis1.ShowDist();

  Distance dis2 = Distance(3, 11.9f);
  dis2.ShowDist();
  dis2 = dis1+dis2;
  dis2.ShowDist();

  return 0;
}