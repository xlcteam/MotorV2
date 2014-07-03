
MotorV2
=======

Motor is a simple Arduino library for XLCTeam intern driver.

Installation
------------

Download the Motor library and put it into a folder in your
`sketchbook/libraries` directory.

In Linux like environment you can do something like this


	~/sketchbook/libraries/ $ git clone git://github.com/xlcteam/MotorV2.git


Usage
-----

You can just include Motor library in your Arduino sketch by putting 


	#include <MotorV2.h>

Then you can define a new motor 
	
	MotorV2 motorA = MotorV2(13, 11);

where `13` is  the first pin and `11` is the second.


Next thing you might want to do is to move the motor. This can be done this way

	motorA.go(200);

where `200` is the speed. Note that the maximal value of speed is 255. You might
also want to stop the motor:

	motorA.stop();


For more detailed usage see examples directory.

(c) 2014 adman, XLC Team, licensed under GNU GPLv2 license
