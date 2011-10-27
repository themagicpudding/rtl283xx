/*
 * DigitalNow Quad DVB-T remote controller keytable
 *
 * Copyright (C) 2011 Saul Dickinson <sauldickinson@gmail.com>
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License along
 *    with this program; if not, write to the Free Software Foundation, Inc.,
 *    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <media/rc-map.h>


static struct rc_map_table digitalnow_quad[] = {
	{ 0x40bf, KEY_POWER2 },        /* TV POWER */
	{ 0x08f7, KEY_POWER },         /* PC POWER */
	{ 0x58a7, KEY_REWIND },        /* REWIND */
	{ 0xd827, KEY_PLAY },          /* PLAY */
	{ 0x22dd, KEY_FASTFORWARD },   /* FAST FORWARD */
	{ 0x02fd, KEY_STOP },          /* STOP */
	{ 0x5aa5, KEY_PREVIOUS },      /* SKIP BACK */
	{ 0x42bd, KEY_PLAYPAUSE },     /* PAUSE */
	{ 0xa25d, KEY_NEXT },          /* SKIP FOWARD */
	{ 0x12ed, KEY_RECORD },        /* RECORD */
	{ 0x28d7, KEY_BACK },          /* BACK */
	{ 0xa857, KEY_INFO },          /* MORE */
/*	{ 0x28d7, BTN_LEFT },       */ /* MOUSE LEFT BUTTON */
/*	{ 0xa857, BTN_RIGHT },      */ /* MOUSE RIGHT BUTTON */
	{ 0x6897, KEY_UP},             /* UP */
	{ 0x48b7, KEY_DOWN},           /* DOWN */
	{ 0xe817, KEY_LEFT },          /* LEFT */
	{ 0x30cf, KEY_RIGHT },         /* RIGHT */
	{ 0x18e7, KEY_OK },            /* OK */
	{ 0xc23d, KEY_ZOOM },          /* ASPECT */
/*	{ 0xea15, KEY_??? },        */ /* MOUSE */
	{ 0x708f, KEY_RED },           /* RED  */
	{ 0xc837, KEY_GREEN },         /* GREEN  */
	{ 0x8877, KEY_YELLOW },        /* YELLOW */
	{ 0x9867, KEY_BLUE },          /* BLUE */
	{ 0x807f, KEY_VOLUMEUP },      /* VOL UP  */
	{ 0x7887, KEY_VOLUMEDOWN },    /* VOL DOWN  */
	{ 0xb04f, KEY_HOME },          /* HOME */
	{ 0x00ff, KEY_MUTE },          /* MUTE */
	{ 0xd22d, KEY_CHANNELUP },     /* CH UP */
	{ 0xf20d, KEY_CHANNELDOWN },   /* CH DOWN */
	{ 0x50af, KEY_0 },             /* 0 */
	{ 0xf807, KEY_1 },             /* 1 */
	{ 0xc03f, KEY_2 },             /* 2 */
	{ 0x20df, KEY_3 },             /* 3 */
	{ 0xa05f, KEY_4 },             /* 4 */
	{ 0x38c7, KEY_5 },             /* 5 */
	{ 0x609f, KEY_6 },             /* 6 */
	{ 0xe01f, KEY_7 },             /* 7 */
	{ 0x10ef, KEY_8 },             /* 8 */
	{ 0xb847, KEY_9 },             /* 9 */
	{ 0x906f, KEY_NUMERIC_STAR },  /* * */
	{ 0xd02f, KEY_NUMERIC_POUND }, /* # */
	{ 0x52ad, KEY_EPG },           /* GUIDE */
	{ 0x926d, KEY_VIDEO },         /* RTV */
	{ 0x32cd, KEY_HELP },          /* HELP */
	{ 0xca35, KEY_CYCLEWINDOWS },  /* PIP(?) */
	{ 0xb24d, KEY_RADIO },         /* RADIO */
	{ 0x0af5, KEY_DVD },           /* DVD */
	{ 0x8a75, KEY_AUDIO },         /* AUDIO */
	{ 0x4ab5, KEY_TITLE }          /* TITLE */
};

static struct rc_map_list digitalnow_quad_map = {
	.map = {
		.scan    = digitalnow_quad,
		.size    = ARRAY_SIZE(digitalnow_quad),
		.rc_type = RC_TYPE_NEC,
		.name    = RC_MAP_DIGITALNOW_QUAD,
	}
};

static int __init init_rc_map_digitalnow_quad(void)
{
	return rc_map_register(&digitalnow_quad_map);
}

static void __exit exit_rc_map_digitalnow_quad(void)
{
	rc_map_unregister(&digitalnow_quad_map);
}

module_init(init_rc_map_digitalnow_quad)
module_exit(exit_rc_map_digitalnow_quad)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Saul Dickinson <sauldickinson@gmail.com>");
