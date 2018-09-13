#include <iostream>

using namespace std;

int main()
{
   int n1;
   int n2;

   cout << "Enter the first number " << endl;
   cin >> n1;

   cout << "Enter the second number " << endl;
   cin >> n2;

   int gcd;
   for (int i =1; i <= min(n1, n2); i++)
   {
       if (n1 % i == 0 && n2 % i == 0)
       {
           gcd = i;
       }
   }
   cout << "The greatest common divisor of " << n1 << " and " << n2 << " is " << gcd << endl;

    return 0;
}
