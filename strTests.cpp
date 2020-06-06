#include "strFuncs.h"
#include "tddFuncs.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Usage: " << argv[0] << " [num of test to run]" << endl;
    return 1;
  }

  int testNum = atoi(argv[1]);
  if (testNum == 1) {
    START_TEST_GROUP("IS_ANAGRAM");
    string a = "ab";
    string b = "ba";

    ASSERT_TRUE(isAnagram(a, b));

    string c = "bb";

    ASSERT_TRUE(!isAnagram(a, c));
    ASSERT_TRUE(isAnagram(a, a));
    ASSERT_TRUE(!isAnagram("abc", "abd"));
    ASSERT_TRUE(!isAnagram("aaa", "aaaaaaa"));
  } else if (testNum == 2) {
    ASSERT_TRUE(isPalindrome("hah"));
    ASSERT_TRUE(!isPalindrome("ahah"));
  }
}
