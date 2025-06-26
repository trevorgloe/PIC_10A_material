#include <unordered_set>
#include <iostream>
using namespace std;
/**
Calculates the set difference of two sets.
@param A : the first unordered set.
@param B : the second unordered set.
@return a set C consisting of elements in A which are not in B.
For example,
if A is {1,2,3,4,5,6,7} and
B is { 2, 4, 6, 8, 10, 12},
then setDiff(A,B) should be {1, 3, 5, 7}.
*/
unordered_set<int> setDiff(const unordered_set<int>& A, const unordered_set<int
>& B) {

}

int main() {
    unordered_set<int> A = {2,3,4,5,1};
    unordered_set<int> B = {2, 3, 10, 12, 5};
    unordered_set<int> C = setDiff(A, B);
    for (const int& i : C) {
        cout << i << " ";
    }
    return 0;
}
