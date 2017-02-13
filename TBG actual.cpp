#include <iostream>
#include <cstdlib>
#include <windows.h>

bool checkNorth();
bool checkSouth();
bool checkEast();
bool checkWest();
bool checkInventory();
bool checkItem();
bool look();
bool help();
bool takeitem();
bool takenb1();
bool takenb2();
bool suicide();
bool open();
bool keycard1;
bool keycard2;
bool pass;
bool note1(false);
bool note2(false);
bool note3(false);
bool note4(false);



void CorridorM();
void CorridorL();
void CorridorR();
void WardH();
void RoomC();
void LobbyM();
void PLot();
void GateM();
void Highway();
void HighwayE();
void City();
void Base();
void BaseI();
void BaseA();
void BaseA2F();
void BaseMP();
void TownS();
void Hillside();
void EntranceB();
void InteriorB();
void InteriorBL();
void RoomO();
void InteriorBR();
void QuartersL();
int EndG();

void Help();

using namespace std;

std::string(action);
string option;

int main()
{
    system("color 02");
    //cout << "===============WELCOME===============" << endl;
    //cout << "===============   TO  ===============" << endl;
    //cout << "==========THE POST-APOCALYPSE========" << endl;
    //system("pause");
    keycard1 = false;
    keycard2 = false;
    pass = false;

    cout << ">You wake up inside a dark hospital room.\n";
    cout << ">The power of the pod you slept in slowly fades away as the last of its charge   is spent.\n";
    cout << ">The equipment around you is damaged beyond repair and has accumulated layers of dust.\n";
    cout << ">There is a door to the west.\n\n";
    cout << "> Having no recollection of what happened, you should probably find out.\n";
    std::getline (cin, action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return main();
        }
    else if (checkSouth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return main();
        }
    else if (checkEast())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return main();
        }
    else if (checkWest())
        CorridorM();
    else if (checkInventory())
        {
            checkItem();
            return main();
        }
    else if (look())
        return main();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return main();
        }
    else if (help())
    {
        Help();
        return main();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return main();
        }

}
////////////////////////////////////////////////////////////////////////////////////////////
bool checkNorth()
{
 if (action == "n" || action == "N" || action == "north" || action == "North")
    return true;
}

bool checkSouth()
{
 if (action == "s" || action == "S" || action == "south" || action == "South")
    return true;
}

bool checkEast()
{
 if (action == "e" || action == "E" || action == "east" || action == "East")
    return true;
}

bool checkWest()
{
 if (action == "w" || action == "W" || action == "west" || action == "West")
    return true;
}

bool checkInventory()
{
    if (action == "inventory" || action == "Inventory")
        return true;
}

bool checkItem()
{
    if ((keycard1 == true) and (keycard2 == false))
        cout << ">  Base Keycard\n\n";
    else if ((keycard1 == false) and (keycard2 == true))
        cout << ">  Office Keycard\n\n";
    else if ((keycard1 == true) and (keycard2 == true))
    {
        cout << "> Base Keycard\n> Office Keycard\n";
    }
}

bool look()
{
    if (action == "look" || action == "Look")
        return true;
}

bool takeitem()
{
    if (action == "take" || action == "take item" || action == "Take item" || action == "Take Item" || action == "take Item")
        return true;
}

bool open()
{
    if ((action == "open door" || action == "Open door" || action == "open" || action == "Open") and keycard2 == true)
        return true;
}

bool help()
{
    if (action == "help" || action == "Help")
        return true;
}

bool suicide()
{
    if ((action == "Push button" || action == "push button" || action == "press button" || action == "Press button") && keycard1 == true)
        return true;
}

void Help()
{
    cout << "Actions : \n";
    cout << "1. North/north/N/n\n";
    cout << "2. South/south/S/s\n";
    cout << "3. East/east/E/e\n";
    cout << "4. West/west/W/w\n";
    cout << "5. Look\n";
    cout << "6. Inventory\n";
    cout << "7. Take item\n";
    cout << "9. Help\n";
}
/////////////////////////////////////////////////////////////////////////////////////////////
void CorridorM()
{
    cout << ">You emerge into a corridor that is equally as dark.\n";
    cout << ">In the dark, you can make out several furniture pieces littering the corridor.\n";
    cout << ">The corridor leads to the east and west.\n\n";
    std::getline (cin, action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return CorridorM();
        }
    else if (checkSouth())
        main();
    else if (checkEast())
        CorridorR();
    else if (checkWest())
        CorridorL();
    else if (checkInventory())
        checkItem();
    else if (look())
        return CorridorM();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return CorridorM();
        }
    else if (help())
    {
        Help();
        return CorridorM();
    }
    else
    {
        cout << ">I do not understand.\n\n";
        return CorridorM();
    }



}

void CorridorL()
{
    cout << ">The corridor takes a 90 degrees bend to the right.\n";
    cout << ">Straight ahead are doors leading into other rooms, most of which are blocked by debris.\n";
    cout << ">A soft creaking sound comes from the west. The corridor continues north.\n\n";
    std::getline (cin, action);
    cout << endl;

    if (checkNorth())
        RoomC();
    else if (checkSouth())
        CorridorM();
    else if (checkEast())
        {
            cout << "You see a wall. You ram it with your head and feel dizzy.\n\n";
            return CorridorL();
        }
    else if (checkWest())
        WardH();
    else if (checkInventory())
        {
            checkItem();
            return CorridorL();
        }
    else if (look())
        return CorridorL();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return CorridorL();
        }
    else
    {
        cout << "I do not understand.\n\n";
        return CorridorL();
    }

}

void WardH()
{
    cout << ">In the room is a pod that is similar to the one which you found yourself in    moments ago.\n";
    cout << ">The pod's power has gone out completely, trapping its lifeless occupant inside in eternal slumber.\n";
    cout << ">There is a table next to the pod. On it is a notebook.\n\n";
    std::getline (cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return WardH();
        }
    else if (checkSouth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return WardH();
        }
    else if (checkEast())
        CorridorL();
    else if (checkWest())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return WardH();
        }
    else if (checkInventory())
        checkItem();
    else if (look())
        return WardH();
    else if (takeitem())
    {
        cout << ">>June 6th, 2084 -- The escalating tension between the remaining communist   and capitalist nations have finally come to a boiling point as the world plunges once again into a cold war similar to the previous one more than a century ago.\n";
        cout << ">>The western and eastern bloc both scramble to start another technological and arms race.\n\n";
        note1 = true;
        system("pause");
        return WardH();
    }
    else
    {
        cout << ">I do not understand.\n\n";
        return CorridorM();
    }


}

void CorridorR()
{
    cout << ">The corridor is littered with medical equipment. There is a corpse on the floor dressed in military fatigues.\n";
    cout << ">He is surrounded by dried blood.\n";
    cout << ">The corridor leads north and south.\n\n";
    std::getline (cin,action);
    cout << endl;

    if (checkNorth())
        RoomC();
    else if (checkSouth())
        CorridorM();
    else if (checkEast())
    {
        cout << "There are several lock doors. No doubt behind them are rooms that are similar to yours.\n\n";
        return CorridorR();
    }
    else if (checkWest())
    {
        cout << "The soldier looks to be dead for a long time. Dried skin clings to the skeleton.\n\n";
        return CorridorR();
    }
    else if (checkInventory())
        checkItem();
    else if (look())
        return CorridorR();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return CorridorR();
        }
    else if (help())
    {
        Help();
        return CorridorR();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return CorridorR();
        }


}

void RoomC()
{
    cout << "You walk into a reception area of sorts.\n";
    cout << "There is a thick iron door to the north. Behind it is a stairwell that leads up towards the surface.\n";
    cout << "To the left and right are corridors.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        LobbyM();
    else if (checkSouth())
    {
        cout << "There counter is empty except for old dusty computers.\n\n";
        return RoomC();
    }
    else if (checkEast())
        CorridorR();
    else if (checkWest())
        CorridorL();
    else if (checkInventory())
        checkItem();
    else if (look)
        return RoomC();
    else if (takeitem())
    {
        cout << "There is nothing worth taking.\n\n";
        return RoomC();
    }
    else if (help())
    {
        Help();
        return RoomC();
    }
    else
    {
        cout << "I do not understand.\n\n";
        return RoomC();
    }

}

void LobbyM()
{
    cout << "You arrive at the main lobby of the hospital.\n";
    cout << "The entrances to the other wings of the hospital are blocked by rubble.\n";
    cout << "There is a stairway leading down and the hospital parking lot is in front of you.\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        PLot();
    else if (checkSouth())
        RoomC;
    else if (checkEast())
    {
        cout << "The is rubble blocking the way.\n\n";
        return LobbyM();
    }
    else if (checkWest())
    {
        cout << "The is rubble blocking the way.\n\n";
        return LobbyM();
    }
    else if (checkInventory())
        checkItem();
    else if (look)
        return LobbyM();
    else if (takeitem())
    {
        cout << "There is nothing worth taking.\n\n";
        return LobbyM();
    }
    else if (help())
    {
        Help();
        return LobbyM();
    }
    else
    {
        cout << "I do not understand.\n\n";
        return LobbyM();
    }

}

void PLot()
{
    cout << "You are in the hospital car park.\n The parking lot is filled with rotting cars and military vehicles.\n";
    cout << "Most of them are scavenged.\n";
    cout << "The main gate lies to the north.\n";
    cout << "It is barricaded except for a small opening.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        GateM();
    else if (checkSouth())
        LobbyM();
    else if (checkEast())
    {
        cout << "The parking lot is filled with vehicles. There is nothing of interest here.\n\n";
        return PLot();
    }
    else if (checkWest())
    {
        cout << "The parking lot is filled with vehicles. There is nothing of interest here.\n\n";
        return PLot();
    }
    else if (checkInventory())
        checkItem();
    else if (look)
        return PLot();
    else if (takeitem())
    {
        cout << "There is nothing worth taking.\n\n";
        return PLot();
    }
    else if (help())
    {
        Help();
        return PLot();
    }
    else
    {
        cout << "I do not understand.\n\n";
        return PLot();
    }

}

void GateM()
{
    cout << "You are in front of the hospital's main gate.\n";
    cout << "The tarmac is cracked and grass has started to grow between the cracks.\n";
    cout << "There are 3 roads that go in different directions, north, east and west.\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        Highway();
    else if (checkSouth())
        GateM();
    else if (checkEast())
        Base();
    else if (checkWest())
        TownS();
    else if (checkInventory())
        checkItem();
    else if (look)
        return GateM();
    else if (takeitem())
    {
        cout << "There is nothing to take.\n\n";
        return GateM();
    }
    else if (help())
    {
        Help();
        return GateM();
    }
    else
    {
        cout << "I do not understand.\n\n";
        return GateM();
    }

}

void Highway()
{
    cout << "The highway is filled with husks of cars, some with their unfortunate occupants still inside.\n";
    cout << "Tumbleweed tumbles around blown by radioactive winds.\n";
    cout << "The highway continues forward while on the right is an intersection.\n\n";
    std::getline (cin, action);
    cout << endl;

    if (checkNorth())
        City();
    else if (checkSouth())
        GateM();
    else if (checkEast())
        HighwayE();
    else if (checkWest())
        {
            cout << "The trees in the dense forest are all dead. Fallen leaves make the whole forest seem red.\n\n";
            return Highway();
        }
    else if (checkInventory())
        {
            checkItem();
            return Highway();
        }
    else if (look())
        return Highway();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return Highway();
        }
    else if (help())
    {
        Help();
        return Highway();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return Highway();
        }

}

void HighwayE()
{
    cout << ">You are standing on a strip of a deserted highway.\n";
    cout << ">It continues on to the east.\n";
    cout << ">A signboard indicates that there is a military base of some sort further in front.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">The roadside is a steep descent down to the cliff floor.\n";
            cout << ">In the distance, the ruins of a city stands solemnly, with glass shards on skyscrapers reflecting the sunlight.\n\n";
            return HighwayE();
        }
    else if (checkSouth())
        {
            cout << ">The deserted land stretches for miles with no end in sight.\n\n";
            return HighwayE();
        }
    else if (checkEast())
        Base();
    else if (checkWest())
        Highway();
    else if (checkInventory())
        {
            checkItem();
            return HighwayE();
        }
    else if (look())
        return HighwayE();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return HighwayE();
        }
    else if (help())
    {
        Help();
        return HighwayE();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return HighwayE();
        }
}

void City()
{
    cout << "You arrive at the ruins of a metropolis whose name is long forgotten.\n";
    cout << "It seems that this is where the bomb fell as the center of the city is a crater surrounded by the skeletons of buildings at least a hundred stories tall.\n";
    cout << "There is a road to the west that leads towards the hillside.\n";
    cout << "There is a billboard on the left right that has the name of the city written on it, but it has been spray painted the numbers '45'.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">As you head deeper into the city, you are shot at by an unknown assailant.\n";
            cout << ">The gunshot is followed by a shout : 'Get out of here Stalker!'\n";
            cout << ">Unarmed, you dare not proceed further.\n\n";
            return City();
        }
    else if (checkSouth())
        Highway();
    else if (checkEast())
        {
            cout << ">The wasteland stretches for miles in that direction. There is nothing out there.\n\n";
            return City();
        }
    else if (checkWest())
        Hillside();
    else if (checkInventory())
        {
            checkItem();
            return City();
        }
    else if (look())
        return City();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return City();
        }
    else if (help())
    {
        Help();
        return City();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return City();
        }

}

void Base()
{
    cout << "You reach an abandoned army base.\n";
    cout << "In it are various equipment of war left abandoned.\n";
    cout << "There is a road that leads to the north and another road to the west. A path leads deeper into the base.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        HighwayE();
    else if (checkSouth())
        {
            cout << ">You see the compound wall. You ram it with your head and feel dizzy.\n\n";
            return Base();
        }
    else if (checkEast())
        BaseI();
    else if (checkWest())
        GateM();
    else if (checkInventory())
        {
            checkItem();
            return Base();
        }
    else if (look())
        return Base();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return Base();
        }
    else if (help())
    {
        Help();
        return Base();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return Base();
        }


}

void BaseI()
{
    cout << "The interior of the base is littered with even more relics, some of which seem familiar.\n";
    cout << "There is a large administration building to the north and a motor pool to the south.\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        BaseA();
    else if (checkSouth())
        BaseMP();
    else if (checkEast())
        {
            cout << ">Further progress is halted by rubble\n";
            return BaseI();
        }
    else if (checkWest())
        Base();
    else if (checkInventory())
        {
            checkItem();
            return BaseI();
        }
    else if (look())
        return BaseI();
    else if (takeitem())
        {
            cout << ">The items here are too broken down to be of any use.\n";
            return BaseI();
        }
    else if (help())
    {
        Help();
        return BaseI();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return BaseI();
        }

}

void BaseA()
{
    cout << "You enter the building to be greeted by a dark and damp environment.\n";
    cout << "Apparently there is a leak somewhere in the building that allows the rain to enter.\n";
    cout << "Most of the documents on the table are rendered unreadable by the rain and dampness.\n";
    cout << "A flight of stairs to the north lead upwards.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
       BaseA2F();
    else if (checkSouth())
        BaseI();
    else if (checkEast())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return BaseA();
        }
    else if (checkWest())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return BaseA();
        }
    else if (checkInventory())
        {
            checkItem();
            return BaseA();
        }
    else if (look())
        return BaseA();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return BaseA();
        }
    else if (help())
    {
        Help();
        return BaseA();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return BaseA();
        }

}

void BaseA2F()
{
    cout << ">You enter a room on the second floor. It seems to be some sort of control center.\n";
    cout << ">There are rows of monitoring equipment here. On the center console, there is a red button.\n";
    cout << ">Next to the button is a slot.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">The button on the console looks tempting.\n\n";
            return BaseA2F();
        }
    else if (checkSouth())
        BaseA();
    else if (checkEast())
        {
            cout << ">Outside the window, a barren wasteland stretches on until the horizon. The view is breathtaking.\n\n";
            return BaseA2F();
        }
    else if (checkWest())
        {
            cout << ">You can see the city standing in desolate ruins.\n\n";
            return BaseA2F();
        }
    else if (checkInventory())
        {
            checkItem();
            return BaseA2F();
        }
    else if (look())
        return BaseA2F();
    else if (takeitem())
        {
            cout << "There is nothing of use here to take.\n\n";
            return BaseA2F();
        }
    else if (help())
    {
        Help();
        return BaseA2F();
    }
    else if (suicide())
    {
        cout << ">You hear the sound of mechanical devices moving.\n";
        cout << ">The ground shook and there is a white flash coming from your left.\n";
        cout << ">Turning to look, you see a mushroom cloud and then nothing...\n\n";
        cout << ">   You Died.\n";
        cout << ">Restart? (Y?N)";
        cin >> option;

        while (option != "N" && option != "n")
        {
            main();
        }

    }

    else
        {
            cout << ">I do not understand.\n\n";
            return BaseA2F();
        }


}

void BaseMP()
{
    cout << "The motorpool is filled with tanks, cars and armored personnel carriers.\n";
    std::getline(cin,action);
    cout <<endl;

    if (checkNorth())
        BaseI();
    else if (checkSouth())
        {
            cout << ">The entire compound is filled with vehicles, but none of them seem to be in working order.\n\n";
            return BaseMP();
        }
    else if (checkEast())
        {
            cout << ">The entire compound is filled with vehicles, but none of them seem to be in working order.\n\n";
            return BaseMP();
        }
    else if (checkWest())
        {
            cout << ">The entire compound is filled with vehicles, but none of them seem to be in working order.\n\n";
            return BaseMP();
        }
    else if (checkInventory())
        {
            checkItem();
            return BaseMP();
        }
    else if (look())
        {
            cout << "There is what seems to be a piece of paper stuck in one of the doors of a humvee.\n";
            return BaseMP();
        }
    else if (takeitem())
        {
            cout << ">You got the note.\n";
            cout << ">Attached to it is a keycard.\n";
            cout << "> August 4th, 2085 -- After months of heightened tension and increased fighting in third world countries, communist forces lead by China launched a full scale invasion on American soil.\n";
            cout << "> The Americans who prided on what they thought was an impenetrable defense was caught completely off-guard. The communists quickly gained large portions of the west coast and began to make their way inland.\n\n";
            keycard1 = true;
            note2 = true;
            return BaseMP();
        }
    else if (help())
    {
        Help();
        return BaseMP();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return BaseMP();
        }

}

void TownS()
{
    cout << ">You arrive at a small town by the countryside.\n";
    cout << ">Bombed out houses dots the area alongside ransacked shops.\n";
    cout << ">The road leads further north.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        Hillside();
    else if (checkSouth())
        GateM();
    else if (checkEast())
        {
            cout << ">You see a mailbox in front of one of the houses.\n";
            cout << "In it what seems to be another paper.\n\n";
            return TownS();
        }
    else if (checkWest())
    {
        cout << "There is nothing in that direction except burnt down houses.\n";
        return TownS();
    }
    else if (checkInventory())
        {
            checkItem();
            return TownS();
        }
    else if (look())
        return TownS();
    else if (takeitem())
        {
            cout << ">June 1st, 2085 -- Nearly a year after the cold war started, the threat of an all-out nuclear war loomed dangerously close.\n";
            cout << "Capitalist governments had agreed on a contingency plan in the event of a nuclear strike.\n";
            cout << "Selected personnel were to be kept in suspended animation in fallout shelters so that the government could be rebuilt.\n\n";
            note3 = true;
            return TownS();
        }
    else if (help())
    {
        Help();
        return TownS();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return TownS();
        }

}

void Hillside()
{
    cout << "You are in a countryside that looks relatively untouched by whatever catastrophe that had occurred.\n";
    cout << "In the distance is a forest of tall pines shrouded in mist.\n";
    cout << "Near the foot of the hill is a patch of grass.\n\n";
    std::getline (cin, action);
    cout << endl;

    if (checkNorth())
        return Hillside();
    else if (checkNorth() and pass == true)
        InteriorB();
    else if (checkSouth())
       TownS();
    else if (checkEast())
        City();
    else if (checkWest())
        {
            cout << "The forest is too misty. You would get lost in it.\n";
            return Hillside();
        }
    else if (checkInventory())
        {
            checkItem();
            return Hillside();
        }
    else if (look())
        return Hillside();
    else if (takeitem())
        {
            cout << ">You find an entrance to a fallout shelter.\n";
            cout << "The door is locked. On the wall is an electronic lock that requires 6 digits.\n\n";
            return Hillside();
        }
    else if (action == "060845")
        {
            cout << "The door unlocks\n\n";
            pass = true;
            system("pause");
            cout << endl;
            InteriorB();
        }
    else if (help())
    {
        Help();
        return Hillside();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return Hillside();
        }
}

void InteriorB()
{
    cout << "Emerging from the darkness of the stairs into the dimly lit interior, you can make out various communication equipment that are still powered.\n";
    cout << "The corridor in front leads to a locked door with a sign saying 'Armory'.\n";
    cout << "There are paths that lead to the left and right.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">The armory door is locked. You don't see a way to open it.\n\n";
            return InteriorB();
        }
    else if (checkSouth())
        Hillside();
    else if (checkEast())
        InteriorBR();
    else if (checkWest())
        InteriorBL();
    else if (checkInventory())
        {
            checkItem();
            return InteriorB();
        }
    else if (look())
        return InteriorB();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return InteriorB();
        }
    else if (help())
    {
        Help();
        return InteriorB();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return InteriorB();
        }



}

void InteriorBL()
{
    cout << "You walk into what seems like large office with partitioned cubicles.\n";
    cout << "To the north you can see another door.\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">The door is locked. There seems to be some sort of card reading mechanism on the wall.\n\n";
            return InteriorBL();
        }
    else if (checkSouth())
        {
            cout << ">The desks line most of the room.\n\n";
            return InteriorBL();
        }
    else if (checkEast())
        InteriorB();
    else if (checkWest())
        {
            cout << "This corner of the room is slightly emptier than the rest.\n\n";
            return InteriorBL();
        }
    else if (checkInventory())
        {
            checkItem();
            return InteriorBL();
        }
    else if (look())
        {
            cout << "There is a computer on each table in the cubicles.\n";
            cout << "Most of the tables are also stacked with files and various data storage devices.\n";
            cout << "There is a keycard on one of the tables.\n\n";
            return InteriorBL();
        }
    else if (takeitem())
        {
            cout << ">You got a keycard.\n\n";
            keycard2 = true;
            return InteriorBL();
        }
    else if (help())
    {
        Help();
        return InteriorBL();
    }
    else if (open())
    {
        cout << "The door is unlocked\n\n";
        system("pause");
        cout << endl;
        RoomO();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return InteriorBL();
        }


}

void RoomO()
{
    cout << "The room is sparsely decorated.\n";
    cout << "A table and chair takes up most of the space in the room.\n";
    cout << "On the table is a report.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return RoomO();
        }
    else if (checkSouth())
        InteriorBL();
    else if (checkEast())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return RoomO();
        }
    else if (checkWest())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return RoomO();
        }
    else if (checkInventory())
        {
            checkItem();
            return RoomO();
        }
    else if (look())
        return RoomO();
    else if (takeitem())
        {
            cout << "> April 28th, 2086 -- The day has finally arrived. Just this morning while we were finishing up preparations for this bunker, we received the bad news.\n";
            cout << "> It seems like the Chinese finally launched nuclear warheads after enduring months of stagnation on the American front.\n";
            cout << "> Several cities on the west coast had already been hit. All remaining personnel were recalled to the bunker immediately as our forces prepared to retaliate.\n";
            cout << "> As this report is being typed out, our allies have already launched their own ICBMs, ensuring Mutually Assured Destruction.\n";
            cout << "> All hope is not lost. Selected personnel for the POD programs are being put into suspended animation. They will run this country again should we fail here.\n\n";
            note4 = true;
            return RoomO();
            EndG();
        }
    else if (help())
    {
        Help();
        return RoomO();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return RoomO();
        }


}

void InteriorBR()
{
    cout << ">This area seems to be a mess hall for the occupants of the bunker.\n";
    cout << ">Plates, trays and cutlery are arranged neatly on the racks, accumulating dust.\n";
    cout << ">There is a door to the north. The sign above reads 'Living Quarters'.\n\n";

    if (checkNorth())
        QuartersL();
    else if (checkSouth())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return InteriorBR();
        }
    else if (checkEast())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return InteriorBR();
        }
    else if (checkWest())
        InteriorB();
    else if (checkInventory())
        {
            checkItem();
            return InteriorBR();
        }
    else if (look())
        return InteriorBR();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return InteriorBR();
        }
    else if (help())
    {
        Help();
        return InteriorBR();
    }
    else
        {
            cout << ">I do not understand.\n\n";
            return InteriorBR();
        }

}

void QuartersL()
{
    cout << "The living quarters are surprisingly deserted too.\n";
    cout << "The beds in each room are crisply folded, as if no one had ever slept in them.\n\n";
    std::getline(cin,action);
    cout << endl;

    if (checkNorth())
        {
            cout << ">You can go no further.\n\n";
            return QuartersL();
        }
    else if (checkSouth())
        InteriorBR;
    else if (checkEast())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return QuartersL();
        }
    else if (checkWest())
        {
            cout << ">You see a wall. You ram it with your head and feel dizzy.\n\n";
            return QuartersL();
        }
    else if (checkInventory())
        {
            checkItem();
            return QuartersL();
        }
    else if (look())
        return QuartersL();
    else if (takeitem())
        {
            cout << ">There is nothing of use here to take.\n\n";
            return QuartersL();
        }
    else if (help())
    {
        Help();
        return QuartersL();
    }
    else
    {
        cout << ">I do not understand.\n\n";
        return QuartersL();
    }
}

int EndG()
{
    if ((note1 == true) and (note2 == true) and (note3 == true) and (note4 == true))
    {
        cout << "Congratulations, you have finished the game.\n\n";
        system("pause");
        cout <<  endl;
        cout << "Do you want to restart? (Y/N)";
        cin >> option;

        while(option != "N" && option != "n")
        {
            main();
        }
    }
}
