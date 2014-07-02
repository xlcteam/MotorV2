/*
 * MotorV2.cpp
 * This file is part of MotorV2
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

#include "MotorV2.h"

MotorV2::MotorV2(int pin1, int pin2)
{
        pinMode(pin1,OUTPUT);
        pinMode(pin2,OUTPUT);
        _pin1 = pin1;
        _pin2 = pin2;
}

void MotorV2::go(int speed)
{
        //use speed values only from range <0,255>
        speed = abs(speed % 256);

        //write direction
        if (speed < 0){
	            digitalWrite(_pin1, LOW);
	            analogWrite(_pin2, speed);
        } else {
                analogWrite(_pin1, speed);
                digitalWrite(_pin2, LOW);
        }
}

void Motor::stop()
{
	    digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
}


