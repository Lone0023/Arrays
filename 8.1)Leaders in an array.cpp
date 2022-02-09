#include<iostream>
using namespace std;
void leader_check(int nums[], int s);
int main()
{
int n;
    cout<<"Enter the size of array: "; cin>>n; cout<<endl;
    int *nums = new int[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements in this array is [ ";
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
    cout<<"The leaders of this array are: ";
    leader_check(nums, n);
    delete[]nums;
    nums = NULL;
    return 0;
}
void leader_check(int nums[], int s)
{
    for(int i = 0; i<s; i++){
        int j;
        for(j = i+1; j<s; j++){
                if(nums[i]>nums[j]){

                }
                else{
                    break;
                }
        }
        if(j==s){
          cout<<nums[i]<<" ";
        }
    }
}
