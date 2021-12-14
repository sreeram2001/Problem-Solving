

#include <bits/stdc++.h>
#include<string.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


string dayOfProgrammer(int year) {
    string s, day, month;
    
    if (year == 1918) {
        day = "26.";
        month = "09.";
    }
    
    else if((year <= 1917) && (year%4 == 0)) 
    {
        day = "12.";
        month = "09.";
    }

    else if(( (year > 1918) && (year%4 == 0) ) && ( (year > 1918) && (year%100 != 0) ))
    {
        day = "12.";
        month = "09.";
    }
    
    else if((year%400 == 0) || (year%4 == 0 && year%100 !=0 ))
    {
        day = "12.";
        month = "09.";
    }
    
    else {
        day = "13.";
        month = "09.";
    }
    
    s = day + month + to_string(year);
    return s;

}
