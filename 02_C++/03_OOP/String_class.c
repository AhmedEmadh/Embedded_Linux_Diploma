#include "String_class.h"
String::String()
    {
        arr = new char[1];
        arr[0] = '\0';
    }
    long long String::GetStrLen(const char * String)
    {
        long long length = 0;
        const char * copy_String = String;
        while(copy_String != '\0')
        {
            length++;
        }
        return length;   
    }
    long long String::GetStrSize(const char * String)
    {
        return GetStrLen(String) + 1;
    }
    String::String(const char * String)
    {
        long long size = GetStrSize(String);
        arr = new char[size];
        for(int i=0;i<size;i++)
        {
            arr[i] = String[i];
        }
    }
    String::String()
    {
        delete[] arr;
    }