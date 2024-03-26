#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    void makePalindrome(char* arr, int n) {
        int begin = 0;
        int end = n - 1;
        while (begin < end) {
            if (arr[begin] == arr[end]) {
                begin++;
                end--;
            } else {
                bool isfound = false;
                for (int i = begin + 1; i <= end; i++) {
                    if (arr[begin] == arr[i]) {
                        swap(arr[i], arr[end]);
                        isfound = true;
                        begin++;
                        end--;
                        break;
                    }
                }
                if (!isfound) {
                    swap(arr[begin],arr[n/2]);
                    break;   // Move end to the previous character
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter length of string: ";
    cin >> n;
    char* arr = new char[n]; // Dynamically allocate memory for the array
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " character: ";
        cin >> arr[i];
    }
    obj.makePalindrome(arr, n);
    delete[] arr; // Free the dynamically allocated memory
    return 0;
}
