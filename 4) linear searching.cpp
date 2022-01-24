#include<iostream>
using namespace std;
int check(int Nums[], int n, int key)
{
    for(int i = 0; i < n; i++){
        if(Nums[i] == key){
            return i;
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
    for( i = 0; i < n; i++){
        cin>>Nums[i];
    }
    int key;
    cout<<"Enter the element you want to search in the array: ";
    cin>>key;
    int c = check(Nums, n, key);
    cout<<endl;
    cout<<"The position of the "<<key<<" is "<<c<<".";
    if(c == -1){
        cout<<"It means that the key is not present in the array."<<endl;
    }
    return 0;
}
