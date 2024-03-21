#include<iostream>
#include<algorithm>
using namespace std;
class BubbleSort{
public:
int count = 0;
    void bubblesort(int *arr, int n){
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
            for(int i = 0; i < n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            count++;
        }
        cout<<"Count = "<<count<<endl;
        cout<<"Bubble Sorted array: ";
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl<<endl;
    }
};

class SelectSort{
    public:
    int count = 0;
    void selectsort(int *arr,int n){
        int count=0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                }
            }
            for(int i = 0; i < n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            count++;
        }
        cout<<"Count = "<<count<<endl;
        cout<<"Selection Sorted array: ";
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        } 
        cout<<endl<<endl<<endl;
    }
};

class InsertionSort{
    public:
    int count = 0;
    void insertsort(int *arr, int n){
        for(int i = 0;i<n;i++){
            int key = arr[i];
            for(int j = 1;j<n;j++){
                if(key > arr[j]){
                    swap(arr[i],arr[j]);
                    for(int k = 0;k<=j;k++){
                        if(key > arr[k])
                        {
                            swap(arr[i],arr[k]);
                        }
                    }
                    continue;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl<<endl;
    }
};

int main(){
    BubbleSort ob;
    SelectSort ob1;
    InsertionSort ob2;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int arr1[n];
    int arr2[n];
    int arr3[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        arr1[i] = arr[i];
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    int choice;
    cout<<"------Sorting techniques--------"<<endl;
    do{
        cout<<"1.Bubble Sort Algorithm\n2.Selection Sort Algorithm\n3.Insertion Sort Algorithm\n4.exit"<<endl<<"Enter your Choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: ob.bubblesort(arr1, n);
                    break;
                    
            case 2: ob1.selectsort(arr2,n);
                    break;
                        
            case 3: ob2.insertsort(arr3, n);
                    break;
            
            case 4: break;
            default : cout<<"Wrong choice"<<endl;
        }
    }while(choice != 4);
    return 0;
}

