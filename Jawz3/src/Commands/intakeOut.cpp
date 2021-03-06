// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "intakeOut.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

intakeOut::intakeOut(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::intake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	lSpeed = 0;
	rSpeed = 0;
	button5Pressed = false;
}// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void intakeOut::Initialize() {
	lSpeed = 0;
	rSpeed = 0;
	button5Pressed = false;

}

// Called repeatedly when this Command is scheduled to run
void intakeOut::Execute() {
	button5Pressed = Robot::oi->getController()->GetRawButton(5);

		if (button5Pressed) {
			lSpeed = 0.6;
			rSpeed = -0.6;
			Robot::intake->IntakeOut(lSpeed, rSpeed);
		}

		else {
			lSpeed = 0;
			rSpeed = 0;
			Robot::intake->IntakeOut(lSpeed, rSpeed);
		}
}

// Make this return true when this Command no longer needs to run execute()
bool intakeOut::IsFinished() {


    return false;
}

// Called once after isFinished returns true
void intakeOut::End() {


}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void intakeOut::Interrupted() {

}
