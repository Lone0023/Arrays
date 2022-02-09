#include<iostream>
using namespace std;
void Reverse_array(int nums[], int s,int sp, int ep);
int main()
{
    int n;
    cout<<"Enter the size of array: "; cin>>n;
    int *nums = new int[n];
    int sp = 0;
    int ep = n-1; cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements in this array is [ ";
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"]"<<endl;
    Reverse_array(nums,n,sp,ep);
    delete[] nums;
    nums = NULL;
    return 0;
}
void Reverse_array(int nums[], int s,int sp, int ep)
{
    while(sp<ep){
        int temp;
        temp = nums[sp];
        nums[sp] = nums[ep];
        nums[ep] = temp;

        sp = sp + 1;
        ep = ep - 1;
    }
    cout<<endl;
    cout<<"The reversed array is [ ";
    for(int i = 0; i<s; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"]"<<endl;
}
