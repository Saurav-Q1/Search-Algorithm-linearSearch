#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int num){
    for (int i = 0; i < 10;i++){
      if (arr[i] == num){
        return i;
    }
    //return -1;
 }
 return -1;
}
int main(void){
    int num;
    int myarr[10];
    int output;
    cout << "Enter the numbers ";
    for (int i = 0; i < 10;i++){
        cin >> myarr[i];
    }
    cout << "Enter the number you want to search = ";
    cin >> num;
    output = linearsearch(myarr, num);
    if(output==-1){
        cout << "match not found" << endl;
    }
    else{
        cout << "match found in index = " << output << endl;
    }
    return 0;
}