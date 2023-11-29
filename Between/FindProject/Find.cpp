#include <iostream>
using namespace std;

/** Given a numer and a range returns if the value is in the range or not.
 *
 * y: value to find.
 * a: start of the range.
 * b: end of the range.
 * return: reurns y if its inside the given range, -1 if not.
*/
int find(int y, int a, int b)
{
    if ((y >= a && y <= b) || (y >= b && y <= a)) return y;
    return -1;
}

/** Executes all test use cases for find() function and prints the result. */
void findTest()
{
    bool testPassed = true;

    // Case 1: y in range
    testPassed &= find(10, 0, 20) == 10 ? true : false;
    testPassed &= find(10, 20, 0) == 10 ? true : false;   // reversed range

    // Case 2: y before range
    testPassed &= find(1, 2, 10) == -1 ? true : false;
    testPassed &= find(1, 10, 2) == -1 ? true : false;    // reversed range

    // Case 3: y after range
    testPassed &= find(11, 0, 10) == -1 ? true : false;
    testPassed &= find(11, 10, 0) == -1 ? true : false;   // reversed range

    // Case 4: y = lower range limit
    testPassed &= find(10, 10, 20) == 10 ? true : false;
    testPassed &= find(10, 20, 10) == 10 ? true : false;  // reversed range

    // Case 5: y = higher range limit
    testPassed &= find(20, 10, 20) == 20 ? true : false;
    testPassed &= find(20, 20, 10) == 20 ? true : false;  // reversed range

    // print result
    if (testPassed) printf("\nTEST PASSED SUCCESSFULLY!");
    else printf("\nTEST FAILED.");
}

/** Gets the needed data to call find() function and prints the result. */
void findExec()
{
    int value, rangeStart, rangeEnd;

    // menu
    printf("\n");
    printf("Value to find: ");
    cin >> value;
    printf("Range start value: ");
    cin >> rangeStart;
    printf("Range end value: ");
    cin >> rangeEnd;

    // find execution & print result
    if (find(value, rangeStart, rangeEnd) == value) {
        printf("\nResult: %d is in the range of %d-%d.\n", value, rangeStart, rangeEnd);
    }
    else {
        printf("\nResult: %d is out of the range of %d-%d.\n", value, rangeStart, rangeEnd);
    }
}

/** First method to be executed. It displays de main menu. */
int main()
{
    int menu;
    bool exit = false;

    while (exit == false)
    {
        // menu
        printf("\n");
        printf("1. - Execute program.\n");
        printf("2. - Execute test.\n");
        printf("3. - Exit program.\n");
        cin >> menu;

        // disptach
        if (menu == 1)          findExec();     // execute program.
        else if (menu == 2)     findTest();     // execute test.
        else if (menu == 3)     exit = true;    // exit.
        else                    break;          // next iteration.
    }
    return 0;
}