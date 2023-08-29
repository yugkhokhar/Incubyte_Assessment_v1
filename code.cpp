#include<bits/stdc++.h>


using namespace std;

class Chandrayan3 {
private:
    vector<int> gslv3_current_position;
    string gslv3_current_direction;

public:
    Chandrayan3(vector<int>pos,string dir) : gslv3_current_position(pos), gslv3_current_direction(dir) {}


    //THIS FUNCTION CHANGES THE COORDINATES OF THE GSLV WHEN IT MOVES FORWARD
     void GSLV3_MOVE_FORWARD() {
        if (gslv3_current_direction == "N")
            gslv3_current_position[1] += 1;
        else if (gslv3_current_direction == "S")
            gslv3_current_position[1] -= 1;
        else if (gslv3_current_direction == "E")
            gslv3_current_position[0] += 1;
        else if (gslv3_current_direction == "W")
            gslv3_current_position[0] -= 1;
        else if (gslv3_current_direction == "U")
            gslv3_current_position[2] += 1;
        else if (gslv3_current_direction == "D")
            gslv3_current_position[2] -= 1;
    }

    void GSLV3_MOVE_BACKWARD(){
        if (gslv3_current_direction == "N")
            gslv3_current_position[1] -= 1;
        else if (gslv3_current_direction == "S")
            gslv3_current_position[1] += 1;
        else if (gslv3_current_direction == "E")
            gslv3_current_position[0] -= 1;
        else if (gslv3_current_direction == "W")
            gslv3_current_position[0] += 1;
        else if (gslv3_current_direction == "U")
            gslv3_current_position[2] -= 1;
        else if (gslv3_current_direction == "D")
            gslv3_current_position[2] += 1;
    }



    void commandFlow(vector<string> Commands) {
        for (auto Command : Commands) {
            if (Command == "f"){
                // function to be used for the forward command execution
                GSLV3_MOVE_FORWARD();
            }
            else if (Command == "b"){
                // function to be used for the backward command execution
                GSLV3_MOVE_BACKWARD();
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

            //print the current position of the GSLV3 along with direction after each command execution
            cout<<"The current position of the GSLV3 is: ";
            for(int i=0;i<gslv3_current_position.size();i++){
                cout<<gslv3_current_position[i]<<" ";
            }
            cout<<endl;
            cout<<"The current direction of the GSLV3 is: "<<gslv3_current_direction<<endl;

        }
    }


    //this function will return the current position of the  GSLV3
    vector<int> getCurrentPositions(){
        return gslv3_current_position;
    }

    // this function will return the current direction of the GSLV3    
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
