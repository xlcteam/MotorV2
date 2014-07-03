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

MotorV2::MotorV2(int dir, int pwm)
{
        pinMode(dir,OUTPUT);
        pinMode(pwm,OUTPUT);
        _dir = dir;
        _pwm = pwm;
}

void MotorV2::go(int speed)
{
        int type = HIGH;

        // if the speed is lower than 0, rotate to other direction
        if (speed < 0){
            type = LOW;
        }

        // speed can be from range <0,255>
        // 0 is the max speed, 255 to stops motor        
        speed = 255 - abs(speed % 256);

        // write zero to one pin and speed to second
        digitalWrite(_dir, LOW);
        analogWrite(_pwm, speed);
}

void MotorV2::stop()
{
        // to stop motors write zero to direction and 255 to pwm
        digitalWrite(_dir, LOW);
        analogWrite(_pwm, 255);
}
