// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ctre/Phoenix.h"


#include "DriveBaseSub.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/Drive.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveBaseSub::DriveBaseSub() : frc::Subsystem("DriveBaseSub") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    frontLeft = RobotMap::driveBaseSubfrontLeft;
    rearLeft = RobotMap::driveBaseSubrearLeft;
    frontRight = RobotMap::driveBaseSubfrontRight;
    rearRight = RobotMap::driveBaseSubrearRight;
    navX = RobotMap::driveBaseSubgyro;
    m_drive = RobotMap::driveBaseSubm_drive;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveBaseSub::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new Drive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveBaseSub::Periodic() {
    // Put code here to be run every loop

}

void DriveBaseSub::mecanumDrive(float x, float y, float rot, float gyro){

	m_drive->DriveCartesian(x,y,rot,gyro);

}

void DriveBaseSub::ResetGyro(){
	navX->ZeroYaw();

}


// Put methods for controlling this subsystem
// here. Call these from Commands.

