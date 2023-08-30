#include<bits/stdc++.h>


using namespace std;

class Chandrayan3 {
private:
    vector<int> gslv3_current_position;
    string direction;
    string gslv3_current_direction;

public:
    Chandrayan3(vector<int>pos,string dir) : gslv3_current_position(pos), gslv3_current_direction(dir),direction(dir) {}


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

    void GSLV3_MOVE_LEFT(){
        if (gslv3_current_direction == "N")
            gslv3_current_direction = "W";
        else if (gslv3_current_direction == "S")
            gslv3_current_direction = "E";
        else if (gslv3_current_direction == "E")
            gslv3_current_direction = "N";
        else if (gslv3_current_direction == "W")
            gslv3_current_direction = "S";
        else if(gslv3_current_direction=="U")
        {
        if(direction=="N") gslv3_current_direction="W";
        else if(direction=="E") gslv3_current_direction="N";
        else if(direction=="S") gslv3_current_direction="E";
        else if(direction=="W") gslv3_current_direction="S";
        else gslv3_current_direction="N";
        }
        else if(gslv3_current_direction=="D"){
            if(direction=="N") gslv3_current_direction="W";
            else if(direction=="E") gslv3_current_direction="N";
            else if(direction=="S") gslv3_current_direction="E";
            else if(direction=="W") gslv3_current_direction="S";
            else gslv3_current_direction="N";
        }
    }

    void GSLV3_MOVE_RIGHT(){
        if (gslv3_current_direction == "N")
            gslv3_current_direction = "E";
        else if (gslv3_current_direction == "S")
            gslv3_current_direction = "W";
        else if (gslv3_current_direction == "E")
            gslv3_current_direction = "S";
        else if (gslv3_current_direction == "W")
            gslv3_current_direction = "N";
        else if(gslv3_current_direction=="U")
        {
            if(direction=="N") gslv3_current_direction="E";
            else if(direction=="E") gslv3_current_direction="S";
            else if(direction=="S") gslv3_current_direction="W";
            else if(direction=="W") gslv3_current_direction="N";
            else gslv3_current_direction="N";
        }
        else if(gslv3_current_direction=="D")
        {
            if(direction=="N") gslv3_current_direction="E";
            else if(direction=="E") gslv3_current_direction="S";
            else if(direction=="S") gslv3_current_direction="W";
            else if(direction=="W") gslv3_current_direction="N";
            else gslv3_current_direction="N";
        }
            
    }

    void GSLV3_MOVE_UP(){
        if (gslv3_current_direction == "N")
         {

          direction=gslv3_current_direction;
            gslv3_current_direction = "U";
         }  
        else if (gslv3_current_direction == "S")
           {

            direction=gslv3_current_direction;
            gslv3_current_direction = "U";
           }
        else if (gslv3_current_direction == "E")
           {

             direction=gslv3_current_direction;
            gslv3_current_direction = "U";
           }
        else if (gslv3_current_direction == "W")
           {

            direction=gslv3_current_direction;
            gslv3_current_direction = "U";
           }
    }

    void GSLV3_MOVE_DOWN(){
        if (gslv3_current_direction == "N"){

         direction=gslv3_current_direction;
            gslv3_current_direction = "D";
        }
        else if (gslv3_current_direction == "S")
        {

        direction=gslv3_current_direction;
            gslv3_current_direction = "D";
        } 
        else if (gslv3_current_direction == "E")
        {

         direction=gslv3_current_direction;
            gslv3_current_direction = "D";
        }
        else if (gslv3_current_direction == "W")
         {

         direction=gslv3_current_direction;
            gslv3_current_direction = "D";
         }
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
                GSLV3_MOVE_LEFT();

            }
            else if (Command == "r"){
                // function to be used for the right command execution
                GSLV3_MOVE_RIGHT();
            }
            else if (Command == "u"){
                // function to be used for the upper command execution
                GSLV3_MOVE_UP();
            }
            else if (Command == "d"){
                // function to be used for the down command execution
                GSLV3_MOVE_DOWN();
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
    vector<string> commands = {"r", "f", "b","l", "u","b"};
    Chandrayan3 GSLV3(initial_position,"N");
    GSLV3.commandFlow(commands);
    return 0;
} 
