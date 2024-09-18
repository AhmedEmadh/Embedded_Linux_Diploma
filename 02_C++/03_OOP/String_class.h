#pragma once
class String
{
    long long length;
    char *arr;
public:
    String();
    long long GetStrLen(const char * String);
    long long GetStrSize(const char * String);
    String(const char * String);
    ~String();
};