#include <iostream>
using namespace std;

int main()
{

               char Inp;
               cout << "Input a alphabet,digit or special character = ";
               cin >>Inp ;
               if ((Inp >= 'a' && Inp <= 'z') || (Inp >= 'A' && Inp <= 'Z'))
               {
                              cout << "The input is an alphabet." << endl;
               }
               else if (Inp >= '0' && Inp <= '9')
               {
                              cout << "The input is a digit." << endl;
               }
               else
               {
                              cout << "The input is a special character." << endl;
               }
               return 0;
}
