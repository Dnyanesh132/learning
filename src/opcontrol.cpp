#include "main.h"

//USELESS TBH


//driving our robot around...

/*
void opcontrol() {
    pros::Controller master(pros::E_CONTROLLER_MASTER);
    pros::MotorGroup left_mg({1, -2, 3});    // Creates a motor group with forwards ports 1 & 3 and reversed port 2
    pros::MotorGroup right_mg({-4, 5, -6});  // Creates a motor group with forwards port 5 and reversed ports 4 & 6

    while (true) {
    //    killtask();
        //kill previoustask at start
        // PLEASE ADD //
        //I ADDED THIS JUST TO SEE HOW GIT CHANGES//


pros::lcd::print(0, "%d %d %d", (pros::lcd::read_buttons() & LCD_BTN_LEFT) >> 2,
                         (pros::lcd::read_buttons() & LCD_BTN_CENTER) >> 1,
                         (pros::lcd::read_buttons() & LCD_BTN_RIGHT) >> 0);  // Prints status of the emulated screen LCDs

        // Arcade control scheme
        int dir = master.get_analog(ANALOG_LEFT_Y);    // Gets amount forward/backward from left joystick
        int turn = master.get_analog(ANALOG_RIGHT_X);  // Gets the turn left/right from right joystick
        left_mg.move(dir - turn);                      // Sets left motor voltage
        right_mg.move(dir + turn);                     // Sets right motor voltage
        pros::delay(20);                               // Run for 20 ms then update


    //some code to control drive-
        setDriveMotors();

    //some code to control intake/belt-
        setIntakeMotors();

    //some code to control mogo
    //NEED TO CHECK OVER MY CODE HERE
    // HOW DO YOU DO PNUEMATICS!!!
        setMogoSolenoids(); //WHHOOPS need to make toggle.. 

        pros::delay(10); //good to add delay becuz.. 

        
   
    }

    
}

*/