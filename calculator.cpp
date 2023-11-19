#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    double a,b;

    Calculator(){
        a = 0;
        b = 0;
    }

    void getDetails(double num1,double num2){
        this->a = num1;
        this->b = num2;
    }

    double Additon(){
        return a + b;
    }
    double Substraction(){
        return a - b;
    }
    double Multiplication(){
        return a * b;
    }
    double Division(){
        return a / b;
    }
};
int main()
{
    double num1,num2;
    int choice;
    cout<<"Welcome to the Calcultor"<<endl;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"Enter the operation u want to perform: "<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
    Calculator obj;
    obj.getDetails(num1,num2);
    switch (choice)
    {
    case 1:
        cout<<"The result is "<<obj.Additon()<<endl;
        break;
    case 2:
        cout<<"The result is "<<obj.Substraction()<<endl;
        break;
    case 3:
        cout<<"The result is "<<obj.Multiplication()<<endl;
        break;
    case 4:
        cout<<"The result is "<<obj.Division()<<endl;
        break;
    default:
        cout << "You have entered the wrong choice "<<endl;
        break;
    }
    return main();
}