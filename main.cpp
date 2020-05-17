
#include <iostream>
#include <string>

bool isPalindrome(const std::string& text)
{
    int x(0);
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == text[text.size() - 1 - i]) x++;
        
    }
       
    if (x == text.size()) return true;
    else return false;
}

int main()
{   
    std::string a("tolomasamolot");
    std::cout << isPalindrome(a);

    return 0;
}
