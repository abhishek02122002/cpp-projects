#include <iostream>
#include <cmath> // for math ka kaam , ab isme dkehna padga aur kay kaya akrta hai ye.
using namespace std;

int main(){
    cout<<"\n\t------------------------------------\n";
    cout << "\t                CALCULATOR          \n";
    cout <<"\t--------------------------------------\n";
    cout << "t1:Addition\t\t"<<"               t8:Sin"<<endl;
    cout<<"t2:Subtraction\t\t"<<"           t9:Cos"<<endl;
    cout<<"t3:Multiplication\t\t"<<"       t10:Tan"<<endl;
    cout<<"t4:Division\t\t"<<"               t11:Inverse of sin"<<endl;
    cout<<"t5:Exponent\t\t"<<"               t12:Inverse of cos"<<endl;
    cout<<"t6:Square\t\t"<<"               t13:Inverse of tan"<<endl;
    cout<<"t7:Log\t\t"<<"                   t14:Exist"<<endl;
    cout <<"t15:Quadratic solutions";

    float x,y;
    float PI = 3.14159265;
    int choice;

    do{
        cout<<"\n\t Enter the operation number ";
        cin >> choice;
        switch(choice){
            case 1:
                cout <<"Enter first number - ";
                cin >> x;
                cout <<"Enter second number - ";
                cin >> y;
                cout <<"The result is " << ( x+y ) << endl;
                break;
            case 2 :
                cout << "Enter the first number";
                cin >> x;
                cout <<"enter the second number";
                cin>>y;
                cout << "The result is " << (x-y)<<endl;
                break;
            case 3:
                cout << "Enter the first number";
                cin >> x;
                cout <<"enter the second number";
                cin>>y;
                cout << "The result is " << (x*y)<<endl;
                break;
            case 4:
                cout << "Enter the first number";
                cin >> x;
                cout <<"enter the second number";
                cin>>y;
                cout << "The result is " << (x/y)<<endl;
                break;
            case 5:
                cout << "Enter the first number";
                cin >> x;
                cout <<"enter the second number";
                cin>>y;
                cout << "The result is " << pow(x,y)<<endl;
                break;
            case 6:
                cout << "Enter the first number";
                cin >> x;
                cout << "The Square is " << sqrt(x) <<endl;
                break;
            case 7:
                cout << "Enter the first number";
                cin >> x;
                cout << "The result is " << log(x) <<endl;
                break;
            case 8:
                cout << "Enter the first number";
                cin >> x;
                cout << "The result is " << sin(x) <<endl;
                break;
            case 9:
                cout << "Enter the first number";
                cin >> x;
                cout << "The result is " << cos(x) <<endl;
                break;
            case 10 :
                cout << "Enter the first number";
                cin >> x;
                cout << "The result is " << tan(x) <<endl;
                break;
            case 11 :
                cout << "Enter the first number";
                cin >> x;
                if(x >= -1 && x <=1){
                cout << "The result is " << asin(x)*180.0/PI  <<" angle "<<endl;
                }
                else{
                    cout <<"Input value is out of domain of asin() and it is [-1,1] "<<endl;
                }
                break;
            case 12 :
                cout << "Enter the first number";
                cin >> x;
                if(x >= -1 && x<=1){
                cout << "The result is " << acos(x)*180.0/PI <<endl;
                }
                else{
                    cout <<"Out of domain of acos() which is [-1,1] " << endl;
                }
                break;
            case 13 :
                cout <<"Enter the first number- ";
                cin >>x;
                cout <<"the answer is "<< atan(x)*180.0/PI<<endl;
                break;
            case 14:
                break;
            default :
            cout<<"Enter the right options "<<endl;
            break;
                

        }
    }while(choice != 14);









    return 0;
}