#include <iostream>
#include <vector>


using namespace std;

void battleship(char letter){
    if(letter=='B'||letter=='b'){
        cout<<"BattleShip"<<endl;
    }
    else if(letter=='C'||letter=='c'){
        cout<<"Cruiser"<<endl;
    }
    else if(letter=='D'||letter=='d'){
        cout<<"Destroyer"<<endl;
    }
    else if(letter=='F'||letter=='f'){
        cout<<"Frigate"<<endl;
    }
}

int main(){
    int numbers=0;
    vector<char> vect;
    cin>>numbers;
    for(int i=0;i<numbers;i++){
        char temp;
        cin>>temp;
        vect.push_back(temp);
    }
    for(int i=0;i<vect.size();i++){
        char temp = vect[i];
        battleship(temp);
    }
}