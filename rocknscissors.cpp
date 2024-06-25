#include<iostream>
#include<ctime>
using namespace std;

string rocknscissors();
string userchoice();
void showwinner(string c, string uop);
void playagain();

int main()
{
    int Playagain;
    std::string userschoice;
    string c= rocknscissors();
    string uop=userchoice();
    cout<<"computer chooses"<<": "<<c<< std::endl;
    cout<<"you choose"<<": "<<uop<< std::endl;
    showwinner(c, uop);
    cout<<"Do You Want To play Again : 1 = YES / 2 = NO ";
    cin>>Playagain;
    switch (Playagain)
    {
    case 1:
        /* code */
        playagain();
        break;
    
    default:
        break;
    }
    return 0;
}


string rocknscissors()
{

    std::string cpuout;
    srand(time(NULL));
    int num1 = rand() % 3 + 1;
    if(num1==1)
    {
        cpuout="Rock";
        return cpuout;
    }
    else if(num1==2)
    {
        cpuout="Paper";
        return cpuout;
    }
    else{
        cpuout="Scissors";
        return cpuout;
    }
}


string userchoice()
{
    std::string userschoice;
    int choice;
    cout<<"************Game started************"<< std::endl;
    cout<<"You have 3 choices"<< std::endl;
    cout<<" choose between 1 2 3"<< std::endl;
    cout<<" 1 = Rock"<< std::endl;
    cout<<" 2 = Paper"<< std::endl;
    cout<<" 3 = Scissors"<< std::endl;
    cout<<"Enter Your Choice :";
    cin>>choice;
    switch (choice)
    {
    case 1:
        userschoice ="Rock";
        return userschoice;
        break;
    case 2:
        userschoice= "Paper";
        return userschoice;
        break;
    case 3:
        userschoice= "Scissors";
        return userschoice;
        break;
    default: 
        cout<<"***********************(Invalid choice)*******************"<<std::endl;
        cout<<"**********************---Game Restarted---********************"<<std::endl;
        cout<<"*********************---Make A Valid Choice---********************"<<std::endl<<"\n";
        userchoice();

        break;
    }

}
void showwinner(string c, string uop)
{
    string userout = c;
    string compout = uop;
    int choice;
    if(userout=="Rock")
    {
        choice =1;
    }else if(userout=="Paper"){
        choice=2;
    }else if(userout=="Scissors"){
        choice=3;
    }
    switch (choice)
    {
    case 1:
        /* code */
        if(compout=="Rock"){
            std::cout<<"DRAW !!!"<<std::endl;
        }
        else if(compout=="Paper")
        {
            std::cout<<"You lost"<<std::endl;
        }
        else{
            std::cout<<"You Won !!!"<<std::endl;
        }
        break;
    case 2:
        /* code */
        if(compout=="Paper"){
            std::cout<<"DRAW !!!"<< std::endl;
        }
        else if(compout=="Scissors")
        {
            std::cout<<"You lost"<< std::endl;
        }
        else{
            std::cout<<"You Won !!!"<< std::endl;
        }
        break;
    case 3:
        /* code */
        if(compout=="Scissors"){
            std::cout<<"DRAW !!!"<< std::endl;
        }
        else if(compout=="Paper")
        {
            std::cout<<"You lost"<< std::endl;
        }
        else{
            std::cout<<"You Won !!!"<< std::endl;
        }
        break;
    
    default:
        break;
    }
    // cout<<userout<<std::endl;
    // cout<<compout<<std::endl;
    
}

void playagain()
{
    int Playagain;
    std::string userschoice;
    string c= rocknscissors();
    string uop=userchoice();
    cout<<"computer chooses"<<": "<<c<< std::endl;
    cout<<"you choose"<<": "<<uop<< std::endl;
    showwinner(c, uop);
    cout<<"Do You Want To play Again : 1 = YES / 2 = NO " <<std::endl;
    cin>>Playagain;
    switch (Playagain)
    {
    case 1:
        /* code */
        playagain();
        break;
    
    default:
        break;
    }
}