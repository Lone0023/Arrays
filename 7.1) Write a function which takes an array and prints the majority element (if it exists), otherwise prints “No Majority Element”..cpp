//A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
#include<iostream>
using namespace std;
void check(int nums[],int n)
{
    int sum;
    for(int i = 0; i<n; i++){
            sum = 1;
            for(int j = i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    sum = sum+1;
                }
            }
        if(sum>n/2){
            cout<<"The majority element in this array is "<<nums[i]<<".";
            break;
        }
    }
    if(sum<n/2){
        cout<<"No majority element present in this array.";
    }
}

int main()
{
    int Size;
    cout<<"Enter the size of your array: "; cin>>Size;
    int *nums = new int[Size];
    for(int i = 0; i<Size; i++){
        cout<<"Enter the element for position ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<"The elements of your array is."<<endl;
    for(int i = 0; i<Size; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl;
    check(nums, Size);
    delete[]nums;
    nums = NULL;
    return 0;
}
