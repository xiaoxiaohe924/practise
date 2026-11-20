// char pstr[]="Hello, World!";
// const char *pstr2="Hello, World!";



#include <iostream>



using namespace std;
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
    for(int n=1;n<101;n++){
        if(n%10==7){
            cout << "�V��l" << endl;
        }else if(n%7==0){
            cout << "�V��l" << endl;
        }else if((n/10)%10==7){
            cout << "�V��l" << endl;
        }else{
            cout << n << endl;
        }
    }  
    return 0;
    
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