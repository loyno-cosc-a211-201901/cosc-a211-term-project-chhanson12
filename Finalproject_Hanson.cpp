//Program Name: Final Project New Orleans Adventure 
//Program Description: A text-based game to find the fluer de lis token 
//Author: Christian Hanson 
//Date Last Modified: 11/29/2019

#include <iostream>
#include <cstdlib>
using namespace std; 
void introMission();
void riverCross();
void streetCar();
void superDome(); 
void jerseyChoice(); 
//bool start game ending = false 
int main()
{
    // Do you accept the mission 
introMission();
// do you cross the river to go to the Westbank
riverCross();
// how long do you take the street car 
streetCar();
// Do you enter the superdome
superDome();
// do you pick the right jersy
jerseyChoice();
    return 0; 
}

void introMission() {
    string name; 
    string job;
    bool death=true; 

    // Get the user to enter their name 
    cout << "Enter your name" << endl; 
    cin >> name;
    
    
    // intro 
    cout << "So I guess your name is " << name << " then" << endl; 
    cout << "I'm guessing you are wondering what you are doing here. You are here to retrieve a valuable item to bring joy and life back to the city of New Orleans." << endl;
   do{
    cout << "Do you accept this job, " << name<< "? ";
    cin >> job;

    if (job=="yes"||job=="Yes"){
        cout << "The story continues, and you head to the river" << endl;
        death=false;
    }
    else if (job=="no"||job=="No"){
        cout << name << ", you died by a self-destruct message; New Orleans floods and goes under Sea Level" << endl; 
        death=true;
        // I mean if they say no what's the point of the program they have to do something. 
        cout << "Try again" << endl; 
        continue;
    }
    else{
        cout << "Please enter yes or no..." << endl;
    }
    
    }while(death);
return;
}
//Crossing the river 
void riverCross() {
    string decision;
    bool death=true;
    cout << " Welcome to the river " <<endl; 
    cout << " you have an important choice to make. " << endl; 
    cout << "Do you want to cross the river or do you decide to stay on the east bank?" << endl; 
    do{
    cout << "Do you cross the river?" << endl; 
    cin >> decision; 

    if (decision=="yes"||decision=="Yes"){
        cout << "You start crossing the river, and all the sudden ..." << endl; 
        cout << "a gator attacks you and bites your head off" << endl;
        cout << "you died, and a hurricane hits the city." << endl; 
        cout << "Never go to the Westbank " << endl; 
        death=true;
        // If they fail they try again because that's what life's all about 
        cout << "Try again" << endl; 
    }
    else if(decision=="no"||decision=="No"){
        cout << "You turn back, and you see the street car and hop on." << endl; 
        cout << "The story continues ..." << endl;
        death=false;
        continue; 
    }
    else{
        cout << "Please enter yes or no..." << endl;
    }
    }while(death);
    return; 
}
// You made it to the street car 
void streetCar() {
    int time; 
    bool death=true; 
    cout << "You are on the street car and realize it is getting faster and faster." << endl;
    cout << "The street car only has two stops -- the 15 min stop and the 30 min stop. " << endl; 
    cout << "They say the longer you are on the street car, the faster the good times roll." << endl; 
do{
    cout << " You have the decision, do you stay on the street car for 15 or 30 min?" << endl;
    cin >> time; 

    if(time==15){
        cout << "You get off the street car and see the Superdome in the distance." << endl; 
        cout << "You see something glowing and hear people chanting... you head over there to investigate." << endl; 
        cout << "The story continues ..." << endl; 
        death=false; 
        continue; 
    }

    if(time==30){
        cout << "You stay on the street car and remain on it after it stops at the first stop." << endl; 
        cout << "The street car continues to go faster and faster until you realize you are in the French Quarter." << endl; 
        cout << "You have passed your destinantion and you have gotten distracted with the festivities on Bourbon." << endl; 
        cout << "You lose track of time and all the sudden you find yourself on a plane to Alberquerque, New Mexico, to go see the balloon festival with a random kid." << endl; 
        cout << "You arrive to Alberquerue and hop on a balloon the balloon pops and you fall to your death." << endl; 
        cout << "The kid is supposed to save the day now, but he runs into a cactus." << endl; 
        cout << "The city of New Orleans is doomed because of your failure, and zombies take over due to Voodoo Magic." << endl; 
        death=true; 
        // Just don't go to New Mexico 
        cout << "Try Again" << endl; 
    }
    else{
        cout << "Please enter 15 or 30..." << endl;
    }
    }while(death);
    return; 
}

// Do you enter the Superdome
void superDome() {
    string goDome; 
    bool death=true;
    cout << " You made it to the Superdome," << endl; 
    cout << "you hear all the chanting and cheers, and there is a parade in the distance. " << endl; 
    cout << "The Saints just beat the New England Patriots for their second superbowl." << endl; 
    cout << "Drew Brees has announced his retirement, and there is a bittersweet feeling in the air. " << endl; 
    cout << "You see all this going on, but you also see the Superdome doors open. " << endl; 
    do{
    cout << "Do you go into the Dome? " << endl; 
    cin >> goDome;

    if(goDome=="yes"||goDome=="Yes"){
        cout << " You walk into the Superdome with all of its glory" << endl;
        cout << "You hear the city's heart beat and the pride of black and gold " << endl;
        cout << "You see two jerseys on the field of the Superdome, and you head that way" << endl;
        cout << "The story continues ...." << endl; 
        death=false;
        continue;

    }
    else if(goDome=="no"||goDome=="No"){
        cout << " You decide to go and watch the parade." << endl; 
        cout << " Everyone around you is happy until all the sudden you run into some Atlanta Falcons fans" << endl; 
        cout << " They see you and can tell you are up to something; they're here to stop you on your mission" << endl; 
        cout << " All of a sudden you see a gigantic figure in the distance, a phreistoric bird they call the death falcon" << endl; 
        cout << "You try to run away but it picks you up and flies you away to its nest" << endl; 
        cout << "You get eaten by baby death falcons." << endl; 
        cout << "The city is in devastation, and the death falcon overtakes the city; falcon fans steal the trophies that the proud Brees had once won" << endl; 
        death=true; 
        // don't let the falcons win 
        cout << "Try again" << endl; 
    }    
    else{
        cout << "Please enter yes or no..." << endl;
    }

    }while(death);
    return; 
}

void jerseyChoice(){
    int lifeChoice;
    cout << "You are on the field of the Superdome" << endl; 
    cout << "All of the sudden you hear a noise that sounds like it is tearing apart the roof of the Dome" << endl;
    cout << "You look up and all of a sudden you hear a battle cry of Rise Up" << endl; 
    cout << "Only the power of the fleur de lis token will be able to save the city " << endl; 
    cout << "The battle cry is getting louder, and you can hear the heartbeat of the city starting to fade" << endl; 
    cout << "You run to the two jerseys, " << endl;
    cout << "The first has a note on it that says if you take this, you become the most powerful person in the world, " << endl; 
    cout << " and you will have all the riches of the world" << endl;
    cout << "The second says this jersey gives you the power to bring hope and help build others to become prosperous " << endl; 
    cout << " What jersey do you choose: 1 or 2" << endl; 
    cin >> lifeChoice;

    if (lifeChoice==1){
        cout << "You feel this incredible amount of power." << endl;
        cout << "The falcon comes in the Superdome, and you easily destroy it" << endl;
        cout << "You become the hero of New Orleans, and everyone loves you." << endl; 
        cout << " The economy is still struggling, and eventually the city falls into bankruptcy" << endl; 
        cout << endl; 
        cout << " You gained all the power so the whole city asked you to make decisions for them; you had no help" << endl; 
        cout << " If you messed up it was on you. " << endl; 
        cout << " The city ends up going underwater after a couple of years, but you settle down on some nice land in California " << endl; 
        cout << endl;
        cout << " You saved the day, but you still feel empty " << endl; 
        cout << " You hide it with riches and parties and go on that way for the rest of your life " << endl;
        cout << endl;
        cout << " You won .... well that's up to you" << endl; 
    }

    else if(lifeChoice==2){
        cout << "You feel nothing, but you hear the heartbeat of the city in the background get stronger." << endl; 
        cout << "All of the sudden jazz musicians, resturaunt owners, and locals who love there city come together and stand next to you " << endl; 
        cout << "You hear a sudden chant of Who Dats, start getting louder and louder" << endl; 
        cout << "Saint fans and players take the field, standing next to you" << endl; 
        cout << "You feel strong and tell the crowd to pick you up" << endl; 
        cout << endl;
        cout << "They start raising you closer and closer to the death falcon " << endl;
        cout << "You then say that you stand with your city and, with the city behind you, throw one last punch against the creature " << endl;
        cout << "The death falcon falls to its defeat, but you fall as your support has lost its balance" << endl; 
        cout << " As you are falling to the ground, you look into your hand and you see the token of the fleur de lis " << endl; 
        cout << "You stop falling; the crowd below you has caught you" << endl; 
        cout << endl;
        cout << "You saved the city and united others, reminding them what made this city so great" << endl; 
        cout << "You become a leader, and the friends that had helped you come up with different ways to help the city grow" << endl; 
        cout << " They figured out how to make New Orleans land level and created many entreprenuership oppurtunities " << endl; 
        cout << " The economy was booming, and you had a feeling of togetherness; you gave everyone hope and created something special " << endl; 
        cout << "You live in a small house and are loved by friends and family" << endl; 
        cout << endl; 
        cout << " Congrats, you won... " << endl;
        cout << "Well that's my personal opinion" << endl; 
    }

    else{
        cout << "Please enter 1 or 2 ....." << endl;
    }
    return;
}

