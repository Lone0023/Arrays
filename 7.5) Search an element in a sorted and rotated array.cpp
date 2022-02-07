#include<iostream>
using namespace std;
int binarySearch(int Nums[], int n, int key)
{
    int startPosition = 0;
    int endPosition = n;

    while(startPosition <= endPosition){
        int midPosition = (startPosition + endPosition)/2;
        if(Nums[midPosition]==key){
            return midPosition;
        }
        else if(Nums[midPosition] > key){
            endPosition = midPosition - 1;
        }
        else{
            startPosition = midPosition + 1;
        }
    }
    return -1;
}
void sorting(int nums[], int s)
{
     for(int i = 0; i < s-1; i++){
        for(int j = i+1; j < s; j++){
            if(nums[j] < nums[i]){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    cout<<"The sorted array is."<<endl;
    for(int i = 0; i<s; i++){
        cout<<nums[i]<<"  ";
    }

}
int main()
{
    int s;
    cout<<"Enter the size of the array: "; cin>>s; cout<<endl;
    int *nums = new int[s];
    for(int i = 0; i<s; i++){
        cout<<"Enter the value of element at index ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements present in this array is "<<endl;
    for(int i = 0; i<s; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;
    sorting(nums, s);
    int key; cout<<endl<<endl;;
    cout<<"Enter the element you would like to find the position of: "; cin>>key;
    int key_position =binarySearch(nums,s,key);cout<<endl;
    if(key_position!=-1){
        cout<<"The position for the key is: "<<key_position<<endl;
    }
    if(key_position == -1){
        cout<<"key not present in the array."<<endl;
    }
    delete []nums;
    nums = NULL;
    return 0;
}
