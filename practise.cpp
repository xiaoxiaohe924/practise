// #include <iostream>
// using namespace std;
// int one;
// int two;
// int three;
// int main(){
//     cout << "Please input three numbers: ";
//     cin >> one >> two >> three;
//     if(cin.fail()){
//         cout << "Invalid input. Please enter valid integers." << endl;
//         cin.clear();
//         cin.ignore(100,'\n');
//     }else{
//         if (one>two){
//             if (one>three){
//                 cout << "The largest number is: " << one << endl;
//             }else{
//                 cout << "The largest number is: " << three << endl;
//             }
//         }else{
//             if (two>three){
//                 cout << "The largest number is: " << two << endl;
//             }else{
//                 cout << "The largest number is: " << three << endl;
//             }
//         }
//     }
//     int x;
//     x=one<two?two:one;
//     cout << "The  x number  is: " << x << endl;
    
    
//     cout << cin.fail()<< endl;
//     system("pause");
//     return 0;
// }

// #include <ctime>

#include "myheader.h"
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
void myFunction() {
    cout << "This is a function from myheader.h" << endl;
}

int main(){
//     srand((unsigned)time(NULL));
//     int number=rand()%100+1;
//     int input_number;
    
//    do{
//         cout << "Please input a number: ";
//         cin>> input_number;
//         if (cin.fail()){
//             cout << "Invalid input. Please enter a valid integer." << endl;
//             cin.clear();
//             cin.ignore(100,'\n');
            
//         }else{
            
        
        
//         if(input_number>number){
//             cout<<"big"<<endl;
            
            

//         }else if(input_number<number){
//                 cout<<"small"<<endl;
                
                
//         }

//     } }while(input_number!=number);
//     cout << "Congratulations! You guessed the correct number: " << number << endl;
    int num1=add(10,20);
    myFunction();
    cout << "The sum of 10 and 20 is: " << num1 << endl;
    system("pause");
    return 0;
    }


    
