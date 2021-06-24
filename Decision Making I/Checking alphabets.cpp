#include<iostream>
using namespace std;
int main()
{
  char c;
  int isLowercaseVowel, isUppercaseVowel;
  cin>>c;
  isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
  if (!isalpha(c))
      cout<<"Not an alphabet"<<endl;
    else if (isLowercaseVowel || isUppercaseVowel)
        cout<<"Vowel";
    else
        cout<<"Consonant";

    return 0;
}
