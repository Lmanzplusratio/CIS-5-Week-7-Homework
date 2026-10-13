#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

// Homework 7 — Isaiah Salvatierra
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  int values[N];
  string even = "";
  string odd = "";

 
  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i)
{
  values[i] = rand() % 100; 
}
 
{ for (int i = 0; i < N; ++i) // Must be using "<" because if we include our N, it is OOB from our array, N - 1
  cout << "[" << i << "]  " << values[i] << endl;
}
{ for (int i = 0; i < N; ++i)
   if (values[i] % 2 == 0) // This is the modulus, done to check if the remainder of this is 0, which indicates it is even. = Assigns, == Checks
    {
     even = values[i];
    }
   else
    {
   odd = values[i];
    }
} 
cout << "Even:" << even << "\n" << "Odd: " << odd << endl;

return 0;
}