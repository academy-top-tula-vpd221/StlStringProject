#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello world";

    cout << str1.length() << " " << str1.capacity() << "\n";
    string str2 = " and people!";

    str1 += str2;
    cout << str1 << "\n";

    /*str1.assign(str2);
    str1 = str2;*/

    //const char* cstr = str1.c_str();
    string str3 = " and good luck";

    str1.insert(5, str3);
    cout << str1 << "\n";

    //str1.erase(5, str3.length());
    str1.erase(str1.begin() + 5, str1.begin() + 5 + str3.length());
    cout << str1 << "\n";

    string s1 = "aBc";
    string s2 = "ab";
    cout << s1.compare(s2) << "\n";

    string str5 = "*** Hello +++";
    cout << boolalpha << str5.starts_with("**") << "\n";

    string str6 = "C++ the best. C++ the good";
    //str6.replace(14, 3, "my C# is", 3, 2);
    str6.replace(14, 3, 5, '*');
    cout << str6 << "\n";
    string str7 = str6.substr(8);
    cout << str7 << "\n";

    string strMath = "4 + 8 - 9 * 2";
    int pos = 0;
    while (1)
    {
        pos = strMath.find_first_of("+-*/", pos);
        cout << pos << " ";
        if (pos == string::npos) break;
        pos++;
    }

        
    cout << "\n";

    string strIn;
    cout << "input string: ";
    getline(cin, strIn);
    cout << strIn << "\n";

    int result = 10;
    string strResult = "result = " + to_string(result);
    cout << strResult;
}
