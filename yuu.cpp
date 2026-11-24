// char pstr[]="Hello, World!";
// const char *pstr2="Hello, World!";
#include "myheader.h"
// int main() {
//     int num1;
//     int num2;
//     cout << "Please input two numbers: ";
//     cin >> num1 >> num2;
//     int a=num1<num2;
//     int b;
//     // long long b=100e10;
//     if (a==1){
//         b=num2-num1;
//     }else{
//         b=num1-num2;
//     }
    
//     double c=100e-7;
//     string str;
//     cout << "Please input a string: ";
//     cin >> str;
//     int count=num1+num2;
//     cout << "Sum: " << count << endl;
//     if (count>=80){
//         cout << "The sum is greater than or equal to 80." << endl;
//     }else if (60<=count&&count<80){
//         cout << "The sum is greater than 60 but less than 80." << endl;
//     }else{
//         cout << "The sum is less than 60." << endl;
//     }
//     cout << "Difference: " << b << endl;
//     cout << "Product: " << num1 * num2 << endl;
//     if (a==0){
//         cout << "Quotient: " << num1 / num2 << endl;
//     }
    
//     cout << "num1 <= num2: " << (num1 <= num2) << endl;

//     // cin.get();
//     // cout << "a+1=\t" << ++a << endl;
//     cout << "a=\t" << a << endl;
//     cout << "b=\t" << b << endl;
//     cout << "c=\t" << c << endl;
//     cout << "str=\t" << str << endl;
//     return 0;
    
// }
// int main(){
//     int num1=100;
//     int num2;
//     int num3;
//     int num4;
//     do{
//         num1++;
//         num2=num1%10;       
//         num3=(num1/10)%10;
//         num4=num1/100;
//         if(num2*num2*num2+num3*num3*num3+num4*num4*num4==num1){
//             cout<< num1 << endl;
//         }
//     }while(num1<999);

//     return 0;
// }
// int main(){
//     int num1=100;
//     if(bool(num1)==1){
//         cout<<"_True\a"<<endl;
        
//     }
//     return 0;
    
// }
int main(){
    // for(int n=1;n<101;n++){
    //     if(n%10==7){
    //         cout << "click" << endl;
    //     }else if(n%7==0){
    //         cout << "click" << endl;
    //     }else if((n/10)%10==7){
    //         cout << "click " << endl;
    //     }else{
    //         cout << n << endl;
    //     }
    // }  
    // int arr[5][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}};
    // cout << "二维数组大小： " << sizeof(arr) << endl;
	// cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
	// cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;

	// cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	// cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// //地址
	// cout << "二维数组首地址：" << arr << endl;
    // // "二维数组第一行地址：" 
	// cout << dec << arr[0] << endl;
	// cout << "二维数组第二行地址：" << arr[1] << endl;

	// cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
	// cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;
    // int arr[3][3]={{100,100,100},{90,50,100},{60,70,80}};
    // string name[3] = {"chan_sang", "li_si", "wang_wu"};
    // for(int i=0;i<3;i++){
    //     int sums=0;
    //     for(int j=0;j<3;j++){
    //         // cout<<arr[i][j]<<' ';
    //         sums+=arr[i][j];
            

    //     }
    //     cout<<name[i]<<": "<<sums<<endl;
    //     cout<<endl;
    // }
    int a=10;
    // int * p = (int *)0x1100;
    // cout << *p << endl;
    // p=NULL;
    // cout << *p << endl;
    // return 0;
    int *p = &a;
    cout << "a的地址：" << p << endl;
    
 }
// int main(){
//     int num1=1;
    
//     int num3;
//     while(num1<=9){
//         int num2=0;
//         while(num1>num2){
//             if(num2!=num1){
//                 num2++;
//             } 
            
//             num3=num1*num2;
//             cout<<num1<<'*'<<num2<<'='<<num3<<'\t';
            
//         }
//         cout<<'\n';
//         num1++;
        
//     }
//     return 0;
// }