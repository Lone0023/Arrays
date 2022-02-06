/*
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
Example:

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4
*/
//Array should be arithmatic
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of the array: "; cin>>n; cout<<endl;
    int *nums= new int[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at position ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements stored in this array is."<<endl;
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;
    int cd;
    cout<<"Enter the common difference: "; cin>>cd; cout<<endl;
    for(i = 1; i < n; i++){
        if(nums[i]-nums[i-1] != cd){
            cout<<"The missing number is "<<nums[i]-cd<<endl;
        }
    }
    return 0;
}


