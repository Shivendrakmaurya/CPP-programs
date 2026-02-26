#include <iostream>
using namespace std;

int main()
{

               char alpha;
               cout << "Enter an alphabet = ";
               cin >> alpha;

               switch (alpha)
               {
               //Lower case
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':

               //Upper case
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':
                              cout << alpha << " is a vowel";
                              break;

               default:
                              cout << alpha << " is a consonant";
               }

               return 0;
}
