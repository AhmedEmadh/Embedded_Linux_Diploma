/*
Name: Ahmed Emad Hassan
Problem: decide the letter is vowel or not
*/
#include <iostream>
#include <vector>

enum class enLetterType{
    Vowel,
    NotVowel
};
char ReadLetter(const std::string &msg = "Please Enter a Number: ")
{
    char c;   
    std::cout<<msg;
    std::cin>>c;
    return c;
}
enLetterType Get_Letter_Type(char letter)
{
    std::vector<char> vowelChars = {'a','e','i','o','u'};
    for(auto c:vowelChars)
    {
        if(letter == c)
            return enLetterType::Vowel;
    }
    return enLetterType::NotVowel;
}
void printLetterType(const enLetterType& type)
{
    if(type == enLetterType::Vowel)
    {
        std::cout<<"The letter is vowel"<<std::endl;
    }
    else
    {
        std::cout<<"the letter is not vowel"<<std::endl;
    }
}
int program()
{

    printLetterType(Get_Letter_Type(ReadLetter("Enter The letter: ")));

    return 0;
}

int main()
{
    while(true)
    {
        program();
    }
}