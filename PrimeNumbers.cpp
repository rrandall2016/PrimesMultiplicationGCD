#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  cout << "Find all the prime numbers <= n, enter n: ";
  int n;
  cin >> n;

  cout << "The prime numbers are: " << endl;

  int number = 2;
  while (number <= n)
  {
    bool isPrime = true;

    for (int i = 2; i < number; i++)
    {
      if (number % i == 0)
      {
        isPrime = false;
      }
    }
    if (isPrime)
      cout << number << " ";
    number++;
  }

  cout << endl;

  return 0;
}
