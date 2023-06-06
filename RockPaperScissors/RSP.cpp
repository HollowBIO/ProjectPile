#include <iostream>
#include <cmath>
#include <ctime>// bib dlya vremeni
using namespace std;
using txt  = std::string;
char botguess();
void showChoises(char pg, char bg);
char playerChoise();
void showPoints(int playerPoints, int botPoints);
int winner(char pg, char bg, int playerPoints, int botPoints);
int main(){
    char pg, bg;
    int point = 0;
    int coint = 0;
    int playerPoints=0, botPoints=0;
    int round = 1;
    int win, allpoints;
    cout<<"**************\n";
    cout<<"welcome to RPS\n";
    do{
        cout<<"Round "<<round<<'\n'<<'\n';
        showPoints(playerPoints, botPoints);
        cout<<'\n';
        pg = playerChoise();
        bg = botguess();
        showChoises(pg,bg);
        cout<<'\n';
        win = winner(pg,bg,playerPoints,botPoints);
        switch (win)
        {
        case 1:
            break;
        case 2:
            playerPoints++;
            break;
        case 3:
            botPoints++;
            break;
        }
        allpoints = playerPoints + botPoints;
        round++;
    }while (allpoints !=3);
    
    showPoints(playerPoints, botPoints);
   if (playerPoints>botPoints)
   {
    cout<<" ####                  #### \n";
    cout<<"  ####      ####      ####  \n";
    cout<<"   ####    ######    ####   \n";
    cout<<"    ####  ########  ####    \n";
    cout<<"     ########  ########     \n";
    cout<<"      ######    ######      \n";
    cout<<"       ####      ####       \n";
   }
   else if (playerPoints<botPoints)
   {
    cout<<"####\n";
    cout<<"####\n";
    cout<<"####\n";
    cout<<"####\n";
    cout<<"####\n";
    cout<<"#########\n";
    cout<<"#########\n";
   }
   
   
}
char botguess(){
    srand(time(0));
    int rnum = (rand() % 3)+1;
    switch (rnum)
    {
        case 1:
            return 's';
        case 2:
            return 'p';
        case 3:
            return 'r';
    }
    return 0;
}
char playerChoise(){
    char pg;
    do{
    cout<<"PLease, choose between rock(r), paper(p) and scissors(s)\n";
    cin>>pg;
    }while (pg!='s' && pg!='p' && pg!='r');
    return pg;
}
int winner(char pg, char bg, int point,int coint){
    switch (pg)
    {
    case 'r':
        if (bg == 'r')
        {
            cout<<"It`s draw both of you chose rock\n";
            return 1;
        }
        else if (bg == 's')
        {
            cout<<"COngrats, you`ve won\n";
            return 2;
        }
        else if (bg == 'p')
        {
            cout<<"you`ve lost\n";
            return 3;
        }
        break;
    case 'p':
        if (bg == 'p')
        {
            cout<<"It`s draw both of you chose paper\n";
            return 1;
        }
        else if (bg == 'r')
        {
            cout<<"COngrats, you`ve won\n";
            return 2;
        }
        else if (bg == 's')
        {
            cout<<"you`ve lost\n";
            return 3;
        }
        break;       
    case 's':
        if (bg == 's')
        {
            cout<<"It`s draw both of you chose scissors\n";
            return 1;
        }
        else if (bg == 'r')
        {
            cout<<"COngrats, you`ve won\n";
            return 2;
        }
        else if (bg == 'p')
        {
            cout<<"you`ve lost\n";
            return 3;
        }
        break;
    }
    return 0;
}
void showChoises(char pg, char bg){
    cout<<"your choise is "<<pg<<'\n';
    cout<<"Bot`s choise is "<<bg<<'\n';
}
void showPoints(int playerPoints, int botPoints){
    cout<<"Your points: "<< playerPoints<<'\n';
    cout<<"Bot`s points: "<< botPoints<<'\n';
}