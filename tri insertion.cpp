
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl;
using std::string; using std::vector;

template<typename T>
void printVector(const vector<T> &vec) {
    for (auto &i : vec) {
        cout << i << "; ";
    }
    cout << endl;
}

template<typename T>
void insertionSort(vector<T> &vec) {
    for (auto it = vec.begin() + 1; it != vec.end(); ++it) {
        auto key = it;

        for (auto i = it - 1; i >= vec.begin(); --i) {
            if (*i > *key) {
                std::swap(*i, *key);
                key--;
            } else {
                break;
            }
        }
    }
}

int main()
{
    vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };

   
    return EXIT_SUCCESS;
}