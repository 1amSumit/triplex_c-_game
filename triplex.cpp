#include <iostream>
using namespace std;

void PrintIntroduction(){
    cout<<"Your secret agent breaking into a secure server room ..."<<endl;
    cout<<"Enter the correct code to continue"<<endl;
    cout<<endl;
}

void PlayGame(){
    PrintIntroduction();
    const int codeA = 4;
    const int codeB = 8;
    const int codeC = 3;

    const int CodeSum = codeA + codeB + codeC;
    const int Codeproduct = codeA*codeB*codeC;
    
    cout<<"+ There are 3 numbers in the code"<<endl;
    cout<<"+ The code add-up to: "<<CodeSum<<endl;
    cout<<"+ The code multiply to give: "<<Codeproduct<<endl;

    int GuessA, GuessB, GuessC;
    cin>>GuessA>>GuessB>>GuessC;
    cout<<"You entered: "<<GuessA<<GuessB<<GuessC<<endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(CodeSum == GuessSum && Codeproduct == GuessProduct){
        cout<<"You win !";
    }else{
        cout<<"You loose!";
    }
}

int main(){
    PlayGame();
    return 0;
}