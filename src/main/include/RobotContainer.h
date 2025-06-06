// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/Commands.h>
#include <frc2/command/button/CommandXboxController.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <cameraserver/CameraServer.h>

class RobotContainer {
 public:
  RobotContainer();




 private:
  void ConfigureBindings();
  
  //controllers
  frc2::CommandXboxController _driverController{0};

  cs::UsbCamera _cameraStream; //Camera object

 
};