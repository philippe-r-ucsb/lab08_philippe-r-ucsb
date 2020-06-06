#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "tddFuncs.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Usage: " << argv[0] << " [num of test to run]" << endl;
    return 1;
  }

  int threeNums[3] = {42, 57, 61};
  LinkedList *list = arrayToLinkedList(threeNums, 3);

  int testNum = atoi(argv[1]);
  if (testNum == 1) {
    START_TEST_GROUP("REC_SUM");

    LinkedList *empty = new LinkedList();
    ASSERT_EQUALS(160, recursiveSum(list->head));
    ASSERT_EQUALS(0, recursiveSum(empty->head));
  } else if (testNum == 2) {
    START_TEST_GROUP("REC_LARGEST");

    ASSERT_EQUALS(61, recursiveLargestValue(list->head));
  }
}
