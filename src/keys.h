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
#define KEY_XTMASK (0x100)

#define KEY_NULL      0 // null key, triggers nothing
#define KEY_BACKSPACE 8
#define KEY_TAB       9
#define KEY_ENTER    13
#define KEY_ESCAPE   27
#define KEY_SPACE    32
#define KEY_MINUS    45
#define KEY_EQUALS   61

// Num lock and scroll lock
#define KEY_NUMLOCK    (KEY_XTMASK+1)
#define KEY_SCROLLLOCK (KEY_XTMASK+2)

// Keypad
#define KEY_KEYPAD7  (KEY_XTMASK+3)
#define KEY_KEYPAD8  (KEY_XTMASK+4)
#define KEY_KEYPAD9  (KEY_XTMASK+5)
#define KEY_MINUSPAD (KEY_XTMASK+6)
#define KEY_KEYPAD4  (KEY_XTMASK+7)
#define KEY_KEYPAD5  (KEY_XTMASK+8)
#define KEY_KEYPAD6  (KEY_XTMASK+9)
#define KEY_PLUSPAD  (KEY_XTMASK+10)
#define KEY_KEYPAD1  (KEY_XTMASK+11)
#define KEY_KEYPAD2  (KEY_XTMASK+12)
#define KEY_KEYPAD3  (KEY_XTMASK+13)
#define KEY_KEYPAD0  (KEY_XTMASK+14)
#define KEY_KPADDEL  (KEY_XTMASK+15)

// Bill Gates keys
#define KEY_LEFTWIN  (KEY_XTMASK+16)
#define KEY_RIGHTWIN (KEY_XTMASK+17)
#define KEY_MENU     (KEY_XTMASK+18) // Context Menu

#define KEY_KPADSLASH  (KEY_XTMASK+19)
#define KEY_HOME       (KEY_XTMASK+20)
#define KEY_UPARROW    (KEY_XTMASK+21)
#define KEY_PGUP       (KEY_XTMASK+22)
#define KEY_LEFTARROW  (KEY_XTMASK+23)
#define KEY_RIGHTARROW (KEY_XTMASK+24)
#define KEY_END        (KEY_XTMASK+25)
#define KEY_DOWNARROW  (KEY_XTMASK+26)
#define KEY_PGDN       (KEY_XTMASK+27)
#define KEY_INS        (KEY_XTMASK+28)
#define KEY_DEL        (KEY_XTMASK+29)

// Function keys
#define KEY_F1  (KEY_XTMASK+30)
#define KEY_F2  (KEY_XTMASK+31)
#define KEY_F3  (KEY_XTMASK+32)
#define KEY_F4  (KEY_XTMASK+33)
#define KEY_F5  (KEY_XTMASK+34)
#define KEY_F6  (KEY_XTMASK+35)
#define KEY_F7  (KEY_XTMASK+36)
#define KEY_F8  (KEY_XTMASK+37)
#define KEY_F9  (KEY_XTMASK+38)
#define KEY_F10 (KEY_XTMASK+39)
#define KEY_F11 (KEY_XTMASK+40)
#define KEY_F12 (KEY_XTMASK+41)

#define KEY_CAPSLOCK (KEY_XTMASK+42)
#define KEY_CONSOLE KEY_MENU // (KEY_XTMASK+43)
#define KEY_PAUSE (KEY_XTMASK+44)
#define KEY_PRTSC (KEY_XTMASK+45)

// Modifiers
#define KEY_LSHIFT (KEY_XTMASK+46)
#define KEY_RSHIFT (KEY_XTMASK+47)
#define KEY_LCTRL  (KEY_XTMASK+48)
#define KEY_RCTRL  (KEY_XTMASK+49)
#define KEY_LALT   (KEY_XTMASK+50)
#define KEY_RALT   (KEY_XTMASK+51)

#endif
