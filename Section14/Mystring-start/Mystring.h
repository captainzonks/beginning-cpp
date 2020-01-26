#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;          // pointer to char[] that holds a C-style string
public:
    Mystring();         // No-args constructor
    Mystring(const char *s);    // Overloaded constructor
    Mystring(const Mystring &source);     // Copy constructor
    ~Mystring();        // Destructor
    
    // getters
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // _MYSTRING_H_
