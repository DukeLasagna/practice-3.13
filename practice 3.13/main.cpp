#include <iostream>

using namespace std;

int main()
{
   float mile;
   float gallons;
   float totalmile;
   float totalgallons;
   float totalmpg;
   float MPG;

   cout << "Enter miles driven. (-1 to quit)" << endl;
   cin >> mile;
   if (mile == -1)
    {
    return 0;
    }
   cout << "Enter gallons used." << endl;
   cin >> gallons;
   while ( mile != -1 )
    {
       MPG = mile / gallons;
       totalmile = totalmile + mile;
       totalgallons = totalgallons + gallons;
       totalmpg = totalmile / totalgallons;
       cout <<  "MPG this tankful: " << MPG << endl;
       cout << "Total MPG: " << totalmpg << endl;
       cout << " " << endl;
       cout << "Enter miles driven. (-1 to quit)" << endl;
       cin >> mile;
        if (mile == -1)
         {
          return 0;
         }
       cout << "Enter gallons used." << endl;
       cin >> gallons;
    }



   return 0 ;
}
