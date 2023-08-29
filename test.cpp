#define CATCH.CONFIG.MAIN
#include "catch.hpp" 
#include "code.hpp"


//TEST CASE FOR GSLV3_MOVE_FORWARD
TEST_CASE("Test Case 1") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_FORWARD();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, 1, 0});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "N");
}

//TEST CASE FOR GSLV3_MOVE_BACKWARD

TEST_CASE("Test Case 2") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_BACKWARD();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, -1, 0});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "N");
}


// TEST CASE FOR GSLV3_MOVE_LEFT
TEST_CASE("Test Case 3") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_LEFT();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "W");
}

// TEST CASE FOR GSLV3_MOVE_RIGHT
TEST_CASE("Test Case 4") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_RIGHT();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, 0, 0});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "E");
}

// TEST CASE FOR GSLV3_MOVE_UP
TEST_CASE("Test Case 5") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_UP();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, 0, 1});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "N");
}

// TEST CASE FOR GSLV3_MOVE_DOWN

TEST_CASE("Test Case 6") {
    vector<int> pos = {0, 0, 0};
    string dir = "N";
    Chandrayan3 chandrayan3(pos, dir);
    chandrayan3.GSLV3_MOVE_DOWN();
    REQUIRE(chandrayan3.get_gslv3_current_position() == vector<int>{0, 0, -1});
    REQUIRE(chandrayan3.get_gslv3_current_direction() == "N");
}



