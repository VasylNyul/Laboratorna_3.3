   // Lab_03_3.cpp
   // Нюл Василь
   // Лабораторна робота No 3.3
   // Розгалуження, задане графіком функції.
   // Варіант 7.
   

#include <iostream>
   #include <cmath>
   using namespace std;

int main()
{
   double Pi = 4 * atan(1.); // число пі
   double x;  // вхідний аргумент
   double R; // вхідний параметр
   double y; // результат обчислення виразу
     
   cout<<"R=";cin >>R;
   cout<<"x=";cin >>x;
   if(x<=-R)
       y=R;
   else
       if(-R<x && x<=R)
           y=Pi*R;
       else
           if(R<x && x<=6)
               y=R+(-3-R)/(6-R)*(x-R);
           else
               y=-2*x+12;
    
    cout << endl;
    cout << "y = " << y << endl;
    
    cin.get();
    return 0;
}
