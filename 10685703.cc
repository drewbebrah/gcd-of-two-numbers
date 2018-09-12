//
//  main.cpp
//  Assignment 4
//
//  Created by Andrew Debrah on 12/09/2018.
//  Copyright © 2018 Andrew Debrah. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int n1, int n2);

int main()
{
    int n1, n2;
    
    cout <<"Enter two positive integers:";
    cin>> n1 >> n2;
    
    cout << "G.C.D of" << n1 << "and" << n2 << "is:" <<gcd(n1, n2);
    
    return 0;
}
int gcd(int n1, int n2)
{
    if(n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
