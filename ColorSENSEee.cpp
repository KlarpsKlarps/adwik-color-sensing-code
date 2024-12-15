#include "main.h"
#include "pros/optical.hpp"

void opcontrol() {
	pros::Optical helloadwik(1); //if your are not using optical sensor then whoops
	pros::Motor FlapToEjectTheRingImAssumingYouAreUsing(2);


	while (true) {
		double yay = (helloadwik.get_hue());
		
		if (yay == 0){//detets red hue
			FlapToEjectTheRingImAssumingYouAreUsing.move(100); //use this if you wanna eject redss (so you are blue team)
		}

		else if (yay==240){//and does the same for blue
			FlapToEjectTheRingImAssumingYouAreUsing.move(100); //use this if you are red team (ejects bloo)
		}
		else{
			FlapToEjectTheRingImAssumingYouAreUsing.brake();
		}


	}
}
