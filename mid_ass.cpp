#include <iostream>
#include <string.h>
using namespace std;
class Palindrome {
  private :
    char s[20];
    int i, length, flag = 0;
    public :
  void palindrome (char s[20]){
      length = strlen(s);
    for(i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break; }
        }
    if (flag) {
        cout << s<< " is not a palindrome" << endl; }
    else {
        cout << s<< " is a palindrome" << endl;  }
  }
};

int main() {
    char str[20];
    cout << "Please enter a word: "; cin>>str;
    Palindrome ob;
    ob.palindrome(str);
  
while (true) {
    cout << "Enter another word, or 'x' to quit: "; cin>>str;
    
    if (strcmp(str, "x") == 0) {
        cout<<"Goodbye";
        return 0;
    }
    Palindrome ob;
    ob.palindrome(str);
}
}
