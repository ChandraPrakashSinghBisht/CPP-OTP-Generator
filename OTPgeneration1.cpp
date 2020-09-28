#include <bits/stdc++.h> 
#include<iostream> 
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include<string>
using namespace std; 
   
// Function to generate a unique OTP  
string generateOTP(int len) 
{ 
    // All possible characters of my OTP 
    string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKL"
               "MNOPQRSTUVWXYZ0123456789"; 
    int n = str.length(); 
    // OTP String 
    string OTP; 
   
    for (int index=1; index<=len; index++) 
        OTP.push_back(str[rand() % n]); 
   
    return(OTP); 
} 
   
 
int main() 
{ 
    srand(time(NULL)); 
    // Delare the length of OTP 
    int len = 6; 
    char ch='y';
    while(ch=='y' || ch=='Y'){
    cout << "Your Generated OTP is : "<<generateOTP(len).c_str()<<endl; 
    cout<<"--Regenerate OTP--\nY/N : ";
    cin>>ch;
    }
    system("pause");
    return 0; 
} 