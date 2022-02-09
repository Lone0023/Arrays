#include<iostream>
using namespace std;
int sum_check(int nums[], int s)
{
    int sum_of_odd_places=0;
    for(int i=0; i<s; i++){
        if(i%2!=0){
            sum_of_odd_places = sum_of_odd_places + nums[i];
        }
    }
    int sum_of_even_places=0;
    for(int j = 0; j<s; j++){
        if(j%2==0){
            sum_of_even_places = sum_of_even_places + nums[j];
        }
    }
    if(sum_of_odd_places > sum_of_even_places){
        return sum_of_odd_places;
    }
    else if(sum_of_even_places>sum_of_odd_places){
        return sum_of_even_places;
    }
    else{
        cout<<"The sum of odd places and even places is equal."<<endl;
        return sum_of_even_places , sum_of_even_places;
    }
}
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
    int c = sum_check(nums, n);
    cout<<"The sum is "<<c<<endl;
    delete[]nums;
    nums= NULL;
    return 0;
}

