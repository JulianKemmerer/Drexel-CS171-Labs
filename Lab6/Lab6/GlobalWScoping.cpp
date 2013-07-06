#include <iostream>
using namespace std;
         
int m = -36 ;

void first(void) ;
void second(void) ;
         
int main()
{   
   m = 0 ;
   cout << "main  : " << m << endl ;
         
   first() ;
   cout << "main  : " << m << endl ;
   second() ;
   cout << "main  : " << m << endl ;

   return 0;
}
         
void first(void)
{
   cout << "first : " << m << endl ;
   m = 5 ;
}
         
void second(void)
{
   cout << "second: " << m << endl ;
   int m = 99 ;
   first() ;
   cout << "second: " << m << endl ;
}
         
