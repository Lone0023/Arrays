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
int main()
{
    int n,i;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int Nums[n];
    cout<<"Enter the elements of your array one by one: "<<endl;
    for(i = 0; i < n; i++){
        cin>>Nums[i];
    }
    int key;
    cout<<"Enter the element you want to search in the array: ";
    cin>>key;
    int c = binarySearch(Nums, n, key );
    cout<<endl;
    cout<<"The position of the "<<key<<" is "<<c<<".";
    if(c == -1){
        cout<<" It means that the key is not present in the array."<<endl;
    }
    return 0;
}



