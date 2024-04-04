#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Sort {
public:
    void bubblesort(vector<int>& array) {
        int n = array.size();
        int count = 0;
        cout<<"Number of swaps: "<<endl;
        for (int i = 0; i < n - 1; i++) {
            bool isswapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    swap(array[j], array[j + 1]);
                    for(int i=0;i<n;i++){
                        cout<<array[i]<<" ";
                    }
                    cout<<endl;
                    isswapped = true;
                    count++;
                }
            }
            if (!isswapped) {
                break;
            }
        }
        cout << "Count = " << count << endl;
        cout << "Bubble Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout<<endl;
        if(count == 0){
            cout<<"Time Complexity = O(n)";
        }
        else{
            cout<<"Time Complexity = O(n^2)";
        }
        cout << endl << endl;
    }

    void selectsort(vector<int>& array) {
        int n = array.size();
        int count = 0;
        cout<<"Number of swaps: "<<endl;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (array[i] > array[j]) {
                    swap(array[i], array[j]);
                    for (int i = 0; i < n; i++) {
                        cout << array[i] << " ";
                    }
                    cout<<endl;
                    count++;
                }
            }
        }
        cout << "Count = " << count << endl;
        cout << "Selection Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout<<endl<<"Time Complexity = O(n^2)";
        cout << endl << endl;
    }

    void insertsort(vector<int>& array) {
        int n = array.size();
        int count = 0;
        cout<<"Number of swaps: "<<endl;
        for (int i = 1; i < n; i++) {
            int key = array[i];
            int j = i - 1;
            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                for (int i = 0; i < n; i++) {
                    cout << array[i] << " ";
                }
                j--;
                count++;
            }
            array[j + 1] = key;
        }
        cout << "Count = " << count << endl;
        cout << "Insertion Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout<<endl;
        if(count == 0){
            cout<<"Time Complexity = O(n)";
        }
        else{
            cout<<"Time Complexity = O(n^2)";
        }
        cout << endl << endl;
    }
};

class Search {
public:
    void linearSearch(vector<int> &array,int target){
        bool isfound = false;
        for(int i=0;i<array.size();i++)
        {
            if(array[i] == target){
                cout<<target <<" is find at "<<i+1<<"th position";
                isfound = true;
                cout<<endl<<endl;
                break;
            }
        }
        if(!isfound){
            cout<<target <<" is not found"<<endl<<endl;
        }
    }
    
    void binarySearch(vector<int>& array, int target){
       int left = 0;
       int right = array.size() - 1;
       bool isfound = false;
       while(left <= right){
           int mid = (left+right)/2;
           if(array[mid] == target){
               isfound = true;
               cout<<target<<" is found at "<<mid+1<<"th position"<<endl;
               break;
           }
           else if(target>array[mid]){
               left = mid + 1;
           }
           else{
               right = mid-1;
           }
       }
       if(!isfound){
           cout<<target<<" not found"<<endl;
       }
    }
};
int main() {
    Sort sortingOb;
    Search searchingOb;

    int choice;
    vector<int> array, searchArray;
    cout<<"what can you want to do: "<<endl;
    do {
        cout << "1. Sorting Algorithms\n2. Searching Algorithms\n10. Exit\nEnter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            int n;
            cout << "Enter size of array: ";
            cin >> n;
            array.resize(n);//Array resize 
            cout << "Enter array elements: ";
            for (int i = 0; i < n; i++) {
                cin >> array[i];
            }

            int sortingChoice;
            cout << "1.Bubble Sort Algorithm\n2.Selection Sort Algorithm\n3.Insertion Sort Algorithm\nEnter your Choice: ";
            cin >> sortingChoice;
            cout << endl;

            switch (sortingChoice) {
            case 1:
                sortingOb.bubblesort(array);
                break;
            case 2:
                sortingOb.selectsort(array);
                break;
            case 3:
                sortingOb.insertsort(array);
                break;
            default:
                cout << "Wrong choice" << endl;
            }
            break;

        case 2:
            int searchChoice;
            cout << "Enter size of array: ";
            cin >> n;
            searchArray.resize(n); 
            cout << "Enter array elements : ";
            for (int i = 0; i < n; i++) {
                cin >> searchArray[i];
            }

            int target;
            cout << "Enter the element to search: ";
            cin >> target;

            cout << "1.Linear Search Algorithm\n2.Binary Search Algorithm\nEnter your Choice: ";
            cin >> searchChoice;
            cout << endl;

            switch (searchChoice) {
            case 1:
                searchingOb.linearSearch(searchArray, target);
                break;
            case 2:
                sort(searchArray.begin(),searchArray.end());
                searchingOb.binarySearch(searchArray, target);
                break;
            default:
                cout << "Wrong choice" << endl;
            }
            break;

        case 3 : //stack
        case 10:
            cout << "Exiting..." << endl;
            break;
        
        default:
            cout << "Wrong choice"<< endl;

        }
    } while (choice != 10);
    return 0;
}


