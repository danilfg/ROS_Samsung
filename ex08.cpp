#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{   
    string digits = "0123456789abcdefghijklmnopqrstuvwxyz";

    string value;
    unsigned int from, to;
    cin >> value >> from >> to;

    unsigned long long number = 0;

    for (size_t i = 0; i < value.length(); ++i)
    {
        char k = tolower(value[i]);
        number = number*from + ((k>='a') ? k-'a' + 10 : k-'0');
    }

    string result;
    while(number)
    {
        result.push_back(digits[number%to]);
        number /= to;
    }
    for(int i = 0, j = result.length()-1; i < j; ++i, --j)
    {
        char x = result[i];
        result[i] = result[j];
        result[j] = x;
    }

    cout << result << endl;

    return 0;
}