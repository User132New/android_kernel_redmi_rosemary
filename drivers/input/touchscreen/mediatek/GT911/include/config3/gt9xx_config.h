/*
 *  Driver for Goodix Touchscreens
 *
 *  Copyright (c) 2014 Red Hat Inc.
 *  Copyright (c) 2015 K. Merker <merker@debian.org>
 *
 *  This code is based on gt9xx.c authored by andrew@goodix.com:
 *
 *  2010 - 2012 Goodix Technology.
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; version 2 of the License.
 */
#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

#define CTP_CFG_GROUP1                                                         \
	{                                                                      \
		0x42, 0x20, 0x03, 0x00, 0x05, 0x05, 0x38, 0x06, 0x01, 0x88,    \
			0x28, 0x07, 0x55, 0x37, 0x03, 0x04, 0x01, 0x01, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x17, 0x19, 0x20, 0x14, 0x8C,  \
			0x2E, 0x0E, 0x2B, 0x29, 0xA0, 0x0B, 0x00, 0x00, 0x00,  \
			0x99, 0x03, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x42, 0x94, 0xC5,  \
			0x02, 0x05, 0x00, 0x00, 0x04, 0xB4, 0x1C, 0x00, 0x97,  \
			0x22, 0x00, 0x80, 0x29, 0x00, 0x6C, 0x32, 0x00, 0x5D,  \
			0x3C, 0x00, 0x5D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x28, 0x28, 0x03, 0x06, 0x00, 0x31, 0x85, 0x0D, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C,  \
			0x0E, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1A, 0x1C, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x18, 0x1C,  \
			0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x24, 0x26, 0x28,  \
			0x29, 0x2A, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C,  \
			0x0F, 0x10, 0x12, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  \
			0x00, 0x00, 0x00, 0x60, 0x01                           \
	}

#define CTP_CFG_GROUP1_CHARGER                                                 \
	{                                                                      \
	}

#define CTP_CFG_GROUP2                                                         \
	{                                                                      \
	}

#define CTP_CFG_GROUP2_CHARGER                                                 \
	{                                                                      \
	}

#define CTP_CFG_GROUP3                                                         \
	{                                                                      \
	}

#define CTP_CFG_GROUP3_CHARGER                                                 \
	{                                                                      \
	}

#define CTP_CFG_GROUP4                                                         \
	{                                                                      \
	}

#define CTP_CFG_GROUP5                                                         \
	{                                                                      \
	}

#define CTP_CFG_GROUP6                                                         \
	{                                                                      \
	}

#endif
