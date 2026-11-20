#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	// cout << "1" << endl;

	// goto FLAG;

	// cout << "2" << endl;
	// cout << "3" << endl;
	// cout << "4" << endl;

	// FLAG:

	// cout << "5" << endl;

	// system("pause");
    // int arr[5] = {300,350,200,400,250};
    // int max=arr[0];
    // for(int i=1;i<5;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    // cout << "Maximum value: " << max << endl;
    int arr[5]={1,2,3,4,5};
    int num;
    for(int i=0;i<5;i++){
        num=arr[(4-i)];
        cout<<num<<' ';
    }
	return 0;
}