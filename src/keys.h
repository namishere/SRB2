// SONIC ROBO BLAST 2
//-----------------------------------------------------------------------------
// Copyright (C) 1998-2000 by DooM Legacy Team.
// Copyright (C) 1999-2019 by Sonic Team Junior.
//
// This program is free software distributed under the
// terms of the GNU General Public License, version 2.
// See the 'LICENSE' file for more details.
//-----------------------------------------------------------------------------
/// \file  keys.h
/// \brief SRB2 keyboard definition

#ifndef __KEYS_H__
#define __KEYS_H__

// Lactozilla: Well, this is embarrassing
// Those key codes conflict with even Latin-1 Supplement
// At least events are 32-bits, so I can use 0x100
// Which is one bit higher than 0x80

#define KEY_NULL      0 // null key, triggers nothing
#define KEY_BACKSPACE 8
#define KEY_TAB       9
#define KEY_ENTER    13
#define KEY_ESCAPE   27
#define KEY_SPACE    32
#define KEY_MINUS    45
#define KEY_EQUALS   61

// Num lock and scroll lock
#define KEY_NUMLOCK    (0x100+1)
#define KEY_SCROLLLOCK (0x100+2)

// Keypad
#define KEY_KEYPAD7  (0x100+3)
#define KEY_KEYPAD8  (0x100+4)
#define KEY_KEYPAD9  (0x100+5)
#define KEY_MINUSPAD (0x100+6)
#define KEY_KEYPAD4  (0x100+7)
#define KEY_KEYPAD5  (0x100+8)
#define KEY_KEYPAD6  (0x100+9)
#define KEY_PLUSPAD  (0x100+10)
#define KEY_KEYPAD1  (0x100+11)
#define KEY_KEYPAD2  (0x100+12)
#define KEY_KEYPAD3  (0x100+13)
#define KEY_KEYPAD0  (0x100+14)
#define KEY_KPADDEL  (0x100+15)

// Bill Gates keys
#define KEY_LEFTWIN  (0x100+16)
#define KEY_RIGHTWIN (0x100+17)
#define KEY_MENU     (0x100+18)

#define KEY_KPADSLASH  (0x100+19)
#define KEY_HOME       (0x100+20)
#define KEY_UPARROW    (0x100+21)
#define KEY_PGUP       (0x100+22)
#define KEY_LEFTARROW  (0x100+23)
#define KEY_RIGHTARROW (0x100+24)
#define KEY_END        (0x100+25)
#define KEY_DOWNARROW  (0x100+26)
#define KEY_PGDN       (0x100+27)
#define KEY_INS        (0x100+28)
#define KEY_DEL        (0x100+29)

// Function keys
#define KEY_F1  (0x100+30)
#define KEY_F2  (0x100+31)
#define KEY_F3  (0x100+32)
#define KEY_F4  (0x100+33)
#define KEY_F5  (0x100+34)
#define KEY_F6  (0x100+35)
#define KEY_F7  (0x100+36)
#define KEY_F8  (0x100+37)
#define KEY_F9  (0x100+38)
#define KEY_F10 (0x100+39)
#define KEY_F11 (0x100+40)
#define KEY_F12 (0x100+41)

#define KEY_PAUSE 255

// these ones must be non-extended scancodes (rctrl, rshift, lalt)
#define KEY_LSHIFT (0x100+42)
#define KEY_RSHIFT (0x100+43)
#define KEY_LCTRL  (0x100+44)
#define KEY_RCTRL  (0x100+45)
#define KEY_LALT   (0x100+46)
#define KEY_RALT   (0x100+47)

#define KEY_CAPSLOCK (0x100+48)
#define KEY_CONSOLE  '`'

#define KEY_OPENBRACKETS
#define KEY_CLOSEBRACKETS

#endif
