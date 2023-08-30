#define CATCH_CONFIG_MAIN
#include "catch.hpp" 
#include "code.hpp"

//Base Example TEST CASE 
/* Command {f,r,u,b,l} dir=N */
TEST_CASE("Test Case 1") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");
}

//Base Example TEST CASE For Another Direction 
/* Command {f,r,u,b,l} dir=S */
TEST_CASE("Test Case 2") {
    vector<int> pos = {0, 0, 0};
    string dir = "S";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, -1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "S");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, -1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "W");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, -1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, -1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, -1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "S");
}
/* Command {f,r,u,b,l} dir=W */
TEST_CASE("Test Case 3") {
    vector<int> pos = {0, 0, 0};
    string dir = "W";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{-1,0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "W");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{-1, 0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{-1, 0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{-1,0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{-1,0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "W");
}

/* Command {f,r,u,b,l} dir=E */
TEST_CASE("Test Case 4") {
    vector<int> pos = {0, 0, 0};
    string dir = "E";
    Chandrayan3 chandrayan3(pos, dir);

    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1,0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1, 0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "S");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1, 0,0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1,0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1,0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");
}

/* Commands ={ r,f,b,l,u} DIR="N"*/
TEST_CASE("Test Case 5"){
    vector<int>pos={0,0,0};
    string dir="N";
    Chandrayan3 chandrayan3(pos,dir);
    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{1, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");   
}


/* Commands ={r,r,u,l} dir="N"*/
TEST_CASE("Test Case 6"){
    vector<int>pos={0,0,0};
    string dir="N";
    Chandrayan3 chandrayan3(pos,dir);

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "S");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");   
    
    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

}
/* "f", "r", "u","b", "l","f","b" dir=N*/
TEST_CASE("Test Case 7"){
    vector<int>pos={0,0,0};
    string dir="N";
    Chandrayan3 chandrayan3(pos,dir);

    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0,1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{ 0,1, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");   

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0,1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");   

    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0,1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");   
    
    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 2, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");
    
    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

}

/* "r", "r", "u","b", "l","f","b" DIR=W */
TEST_CASE("Test Case 8"){
    vector<int>pos={0,0,0};
    string dir="W";
    Chandrayan3 chandrayan3(pos,dir);

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "E");

    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");   
    
    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "U");
    
    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 1, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");

    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.getCurrentPositions() == vector<int>{0, 0, -1});
    REQUIRE(chandrayan3.getCurrentDirection() == "N");


}


