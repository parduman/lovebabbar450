#include <iostream>
#include <string>
// #include <unordered_map>

using namespace std;

int main()
{
    // unordered_map<char, int> map;
    string str1 = "ABACD";
    string str2 = "CDABA";

    str1 = str1 + str1;


    cout <<(str1.find(str2) != string::npos);
    //1 means found
    //0 means not found
    return 0;
}
