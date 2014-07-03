/*
 * MotorV2.h - Library for controling DC motors connected to new drivers
 * This file is part of Motor
 *
 * Copyright (C) 2014, Adrian Matejov, XLC Team
 *
 * Motor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Motor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Motor; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA  02110-1301  USA
 */


#ifndef MotorV2_H
#define MotorV2_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class MotorV2
{
	public:
		MotorV2(int dir, int pwm);
		void go(int speed);
		void stop();
	private:
		int _dir;
		int _pwm;
};

#endif
