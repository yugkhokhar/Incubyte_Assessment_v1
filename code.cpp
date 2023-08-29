#include<bits/stdc++.h>


using namespace std;

class Chandrayan3 {
private:
    vector<int> gslv3_current_position;
    string gslv3_current_direction;

public:
    Chandrayan3(vector<int>intialposition,string dir) : gslv3_current_position(intialposition), gslv3_current_direction(dir) {}


    void commandFlow(vector<string> Commands) {
        for (auto Command : Commands) {
            if (Command == "f"){
                // function to be used for the forward command execution
                cout << "The GSLV3 is moving forward" << endl;
            }
            else if (Command == "b"){
                // function to be used for the backward command execution
                cout << "The GSLV3 is moving backward" << endl;
            }
            else if (Command == "l"){
                // function to be used for the left command execution
                cout << "The GSLV3 is moving left" << endl;

            }
            else if (Command == "r"){
                // function to be used for the right command execution
                cout << "The GSLV3 is moving right" << endl;
            }
            else if (Command == "u"){
                // function to be used for the upper command execution
                cout << "The GSLV3 is moving up" << endl;
            }
            else if (Command == "d"){
                // function to be used for the down command execution
                cout << "The GSLV3 is moving down" << endl;
            }

        }
    }


//this function will return the current position of the pragyan GSLV3
    vector<int> getCurrentPositions(){
        return gslv3_current_position;
    }

// this function will return the current direction of the pragyan GSLV3    
    string getCurrentDirection(){
        return gslv3_current_direction;
    }

};

int main() {
    vector<int> initial_position = {0, 0, 0};
    vector<string> commands = {"f", "r", "u", "b", "l"};
    Chandrayan3 GSLV3(initial_position,"N");
    GSLV3.commandFlow(commands);
    return 0;
}
