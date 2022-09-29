// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"


Shooter::Shooter() {
    
}

void Shooter::SetFlywheelOutput(double power){
    _flywheelMotor.Set(power);
}

void Shooter::SetFlywheelPrepOutput(double power){
    _flywheelPrepMotor.Set(power);


    
}