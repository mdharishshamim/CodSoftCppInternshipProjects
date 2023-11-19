#include<bits/stdc++.h>
using namespace std;

int main(){
     cout<<"               Welcome to the Guessing Number Game          " << endl;
     cout<<"          You need to guess the number between 1 to 100        "<<endl;
     while(1){
     bool hit = false;
     int choice;
     int randomNumber = (rand() % (100-1) + 1);
     int n  = 7;
     int guess;
     cout<<"Choose your difficulty: "<<endl;
     cout<<"1?2?3?:";
     cin>>choice;

     switch (choice)
     {
     case 1:
        /* code */
         for(int i=0;i<n;i++){
            cout<<"Guess the number: "<<endl;
            cin>>guess;
            if(i == n-1){
                break;
            }
            else{
            if(guess == randomNumber){
                hit = true;
                cout<<"Good job! You have guessed the number correctly"<<endl;
                break;
            }
            else if(guess > randomNumber){
                cout<<"Try Lower"<<endl;
            }
            else if (guess < randomNumber){
                cout << "Try Higher" <<endl;
            }
            else{
                cout<<"OHH YOU LOSE !!Better luck next time"<<endl;
            }
        }
        }
        if (hit == false){
                cout << "OH YOU LOSE !! BETTER LUCK NEXT TIME" <<endl;
            }
        break;
     case 2:
            n = n - 2;
             for(int i=0;i<n;i++){
            cout<<"Guess the number: "<<endl;
            cin>>guess;
            if(i == n-1){
                break;
            }
            else{
            if(guess == randomNumber){
                hit = true;
                cout<<"Good job! You have guessed the number correctly"<<endl;
                break;
            }
            else if(guess > randomNumber){
                cout<<"Try Lower"<<endl;
            }
            else if (guess < randomNumber){
                cout << "Try Higher" <<endl;
            }
            else{
                cout<<"OHH YOU LOSE !!Better luck next time"<<endl;
            }
        }
        }
        if(hit == false){
                cout<<"OHH YOU LOSE !!Better luck next time"<<endl;
            }
        break;
     case 3:
        n = n - 4;
        for(int i=0;i<n;i++){
            cout<<"Guess the number: "<<endl;
            cin>>guess;
            if(i == n-1){
                break;
            }
            else{
            if(guess == randomNumber){
                hit = true;
                cout<<"Good job! You have guessed the number correctly"<<endl;
                break;
            }
            else if(guess > randomNumber){
                cout<<"Try Lower"<<endl;
            }
            else if (guess < randomNumber){
                cout << "Try Higher" <<endl;
            }
            else{
                cout<<"OHH YOU LOSE !!Better luck next time"<<endl;
            }
        }
        }
        if( hit == false )
            {
                cout << "OHH YOU LOSE !!Better luck next time"<<endl;
            }
        break;
     default:
        cout<<"Please choose the correct option"<<endl;
        break;
        }
    }
}