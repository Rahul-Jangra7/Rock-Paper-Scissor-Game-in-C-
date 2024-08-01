#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PlayGame();
void Rules();
void Exit();

void PlayGame(){
    cout<<"Welcome User"<<endl;
    cout<<"Select:     1 - Rock        2 - Paper      3 - Scissor"<<endl;
    int User;
    cin>>User;

    srand(time(0));
    int COMPUTER = rand()%3+1;

    while(User == 1){
    if(User == 1 && COMPUTER == 2){ cout<<"YOU LOSE!"<<endl;}
       else if(User == 1 && COMPUTER == 3){cout<<"YOU WON!"<<endl;}
       else{cout<<"It is DRAWN"<<endl;}
       switch(COMPUTER){
        case 1:
        cout<<"COMPUTER choose: ROCK"<<endl;
        break;

        case 2:
        cout<<"COMPUTER choose: Paper"<<endl;
        break;

        case 3:
        cout<<"COMPUTER choose: Scissor"<<endl;
        break;
       }
       break;
    }

    while(User == 2){
        if(User == 2 && COMPUTER == 3){ cout<<"YOU LOSE!"<<endl;}
       else if(User ==2 && COMPUTER == 1){cout<<"YOU WON!"<<endl;}
       else{cout<<"It is DRAWN"<<endl;}
        switch(COMPUTER){
        case 1:
        cout<<"COMPUTER choose: ROCK"<<endl;
        break;

        case 2:
        cout<<"COMPUTER choose: Paper"<<endl;
        break;

        case 3:
        cout<<"COMPUTER choose: Scissor"<<endl;
        break;
       }
       break;
    }
    
     while(User == 3){
        if(User == 3 && COMPUTER == 1){ cout<<"YOU LOSE!"<<endl;}
        else if(User == 3 && COMPUTER == 2){cout<<"YOU WON!"<<endl;}
       else{cout<<"It is DRAWN"<<endl;}
        switch(COMPUTER){
        case 1:
        cout<<"COMPUTER choose: ROCK"<<endl;
        break;

        case 2:
        cout<<"COMPUTER choose: Paper"<<endl;
        break;

        case 3:
        cout<<"COMPUTER choose: Scissor"<<endl;
        break;
       }
       break;
    }



}

void Rules(){
    cout<<"------Rules of the Game------"<<endl;
    cout<<"Rock VS Paper ->  Paper Won"<<endl;
    cout<<"Scissor VS Paper ->  Scissor Won"<<endl;
    cout<<"Rock VS Scissor ->  Rock Won"<<endl;

}

void Exit(){
    cout<<"Game Quit"<<endl;
    exit(EXIT_SUCCESS);
}

int main(){
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"--------Welcome to the Rock, Paper, Scissor Game--------"<<endl;
    cout<<"--------------------------------------------------------"<<endl;


    cout<<"Press Enter to continue"<<endl;
    cin.get();

    cout<<"Select"<<endl;
    cout<<"1. Play"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Exit Game"<<endl;
    int a;
    cin>>a;

    switch(a){
        case 1:
        PlayGame();
        break;

        case 2:
        Rules();
        break;

        case 3:
        Exit();
        break;

        default:
        cout<<"Wrong Input"<<endl;
        break;
    }
    return 0;
}