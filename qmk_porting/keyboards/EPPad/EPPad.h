/*
Copyright 2023 SharpSnail01 <https://github.com/SharpSnail01>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"
#include "extra_keycode.h"

// clang-format off
#define LAYOUT_all( \
	                  K003, k004, k005, k006, k007, \
	                  K103, k104, k105, k106, k107, \
	K200, K201, K202, k203, k204, k205, k206, k207, \
	            K302, K303, k304 \
) \
{ \
    {KC_NO, KC_NO, KC_NO, K003, k004, k005, k006, k007}, \
    {KC_NO, KC_NO, KC_NO, K103, k104, k105, k106, k107}, \
    {K200,  K201,  K202,  k203, k204, k205, k206, k207}, \
    {KC_NO, KC_NO, K302,  K303, k304, KC_NO, KC_NO, KC_NO}, \
}
// clang-format on
