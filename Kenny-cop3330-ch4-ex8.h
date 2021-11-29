/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Isabelle Kenny
 */
 
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << "The number "<< n << " is even.";
  else
    cout << "The number " << n << " is odd.";

  return 0;
}
