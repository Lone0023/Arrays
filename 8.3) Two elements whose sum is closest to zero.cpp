//THIS LOFIC WILL ONLY WORK FOR WHOLE NUMBERS.

#include<iostream>
using namespace std;
void sort_array(int arr[], int s);
void sum(int arr[], int s);
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int *nums = new int{n};
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
        if(nums[i]<0){
            cout<<"Enter a whole number."<<endl;
            cout<<"Enter the element at index ["<<i<<"]: ";
            cin>>nums[i];
        }
    }
    cout<<endl;
    cout<<"The elements in the array are."<<endl;
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;
    cout<<"The sorted array is."<<endl<<endl;
    sort_array(nums,n); cout<<endl;
    sum(nums, n);
    delete []nums;
    return 0;
}
void sort_array(int arr[], int s)
{
    for(int i = 0; i<s-1; i++){
        for(int j = i+1; j<s; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i<s; i++){
        cout<<arr[i]<<"  ";
    }
}
void sum(int arr[], int s)
{
    int min_sum = INT_MAX;
    int c;
    for(int i = 0; i<=1; i++){
        c = arr[0]+arr[1];
    }
    cout<<"The pair for which sum is closest to zero is ("<<arr[0]<<" , "<<arr[1]<<") and their sum is "<<c<<endl;
}
