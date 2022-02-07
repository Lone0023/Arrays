#include<iostream>
using namespace std;
void sort_arr(int nums[], int s);
int main()
{
    int s;
    cout<<"Enter the size of your array: "; cin>>s; cout<<endl;
    int *nums = new int[s];
    for(int i = 0; i<s; i++){
        cout<<"Enter the element of the array at index ["<<i<<"]: ";
        cin>>nums[i];
        if(nums[i]>1 || nums[i]<0){
            cout<<"Enter a number less than or equal to 1 and more than or equal to 0."<<endl;
            cout<<"Enter the element of the array at index ["<<i<<"]: ";
            cin>>nums[i];
        }
    }
    cout<<endl;
    cout<<"The elements present in your array is."<<endl;
    for(int i = 0; i<s; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;;
    sort_arr(nums, s);
    return 0;
}
void sort_arr(int nums[], int s)
{
    for(int i = 0; i<s-1; i++){
        for(int j = i+1; j<s; j++){
            if(nums[j]< nums[i]){
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }
    }
    cout<<"The sorted array is."<<endl;
     for(int i = 0; i<s; i++){
        cout<<nums[i]<<"  ";
    }

}
