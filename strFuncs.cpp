#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
#include <vector>
#include <algorithm>
using namespace std;

vector<char> stringToCharArray(string s) {
  vector<char> charvect(s.begin(), s.end());
  for(size_t i = 0; i < charvect.size(); i++) {
    charvect[i] = tolower(charvect[i]);
  }
  return charvect;
}


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result.
 */
bool isAnagram(string s1, string s2){
  if(s1.size() != s2.size()) {
    return false;
  }

  auto v1 = stringToCharArray(s1);
  auto v2 = stringToCharArray(s2);

  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  for(long unsigned int i = 0; i < v1.size(); i++) {
    if(v1 != v2) {
      return false;
    }
  }

  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  int size = s1.size();
  for(int i = 0; i < size; i++) {
    if(tolower(s1[i]) != tolower(s1[size - 1 - i])) {
      return false;
    }
  }
  return true;

}
