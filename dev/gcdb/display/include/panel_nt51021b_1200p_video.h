/* Copyright (c) 2013-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT51021B_1200P_VIDEO_H_

#define _PANEL_NT51021B_1200P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
#if 0
static struct panel_config nt51021b_1200p_video_panel_data = {
  "qcom,mdss_dsi_nt51021b_1200p_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,
  "qcom,mdss_dsi_nt51021b_1200p_video"
};
#endif
static struct panel_config nt51021b_1200p_video_panel_data = {
  "qcom,mdss_dsi_nt51021b_1200p_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 1,5, 0, 0, 0, 0, 0,0,NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,03/14/2016,1806036,
//modify DPT lcd timming and init code

static struct panel_resolution nt51021b_1200p_video_panel_res = {
  1200, 1920, 44, 32, 4, 0, 35, 25, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt51021b_1200p_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
#if 1
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,03/14/2016,1806036,
//modify DPT lcd timming and init code

static char nt51021b_1200p_video_on_cmd0[] = {
0x8f, 0xa5, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd1[] = {
0x01, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd2[] = {
0x8f, 0xa5, 0xa5, 0x80
	};
static char nt51021b_1200p_video_on_cmd3[] = {
0x83, 0xaa, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd4[] = {
0x84, 0x11, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd5[] = {
0xa9, 0x4b, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd6[] = {
0x83, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd7[] = {
0x84, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd8[] = {
0x8f, 0x00, 0xa5, 0x80
	};
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,04/01/2016,1899100,
//disable sync signal and delect 11 29
#if 0
static char nt51021b_1200p_video_on_cmd9[] = {
0x11, 0x00, 0x05, 0x80
	};
static char nt51021b_1200p_video_on_cmd10[] = {
0x29, 0x00, 0x05, 0x80
	};
#endif
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

#if 0
static char nt51021b_1200p_video_on_cmd10[] = {
0x8f, 0xa5, 0x15, 0x80
	};

static char nt51021b_1200p_video_on_cmd11[] = {
0x91, 0x06, 0x15, 0x80
	};
#endif
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,04/01/2016,1899100,
//disable sync signal and delect 11 29

static struct mipi_dsi_cmd nt51021b_1200p_video_on_command[] = {
	{0x4, nt51021b_1200p_video_on_cmd0, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd1, 0x20},
	{0x4, nt51021b_1200p_video_on_cmd2, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd3, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd4, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd5, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd6, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd7, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd8, 0x10}
	//{0x4, nt51021b_1200p_video_on_cmd9, 0xa0},
	//{0x4, nt51021b_1200p_video_on_cmd10,0xf0}
	//{0x4, nt51021b_1200p_video_on_cmd11,0xf0}
};
#define NT5021B_1200P_VIDEO_ON_COMMAND 9
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

#endif
#if 0
static char nt51021b_1200p_video_on_cmd0[] = {
0x8f, 0xa5, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd1[] = {
0x8c, 0x80, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd2[] = {
0xc0, 0x01, 0xa5, 0x80
	};
static char nt51021b_1200p_video_on_cmd3[] = {
0xc1, 0xa0, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd4[] = {
0xc2, 0x40, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd5[] = {
0xc3, 0x0c, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd6[] = {
0xc4, 0x01, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd7[] = {
0xc5, 0x21, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd8[] = {
0xc6, 0x29, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd9[] = {
0xc7, 0x49, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd10[] = {
0xc8, 0xf0, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd11[] = {
0xc9, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd12[] = {
0xca, 0x18, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd13[] = {
0xcb, 0x0c, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd14[] = {
0xcc, 0x01, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd15[] = {
0xcd, 0x7c, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd16[] = {
0xce, 0xc0, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd17[] = {
0xcf, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd18[] = {
0xd0, 0x01, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd19[] = {
0xd1, 0x44, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd20[] = {
0xd2, 0x01, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd21[] = {
0xd3, 0x44, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd22[] = {
0xd4, 0x18, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd23[] = {
0xd5, 0x0c, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd24[] = {
0xd6, 0x01, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd25[] = {
0xd7, 0x04, 0x15, 0x80
	};

static char nt51021b_1200p_video_on_cmd26[] = {
0xd8, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd27[] = {
0xd9, 0x09, 0x15, 0x80
	};

static char nt51021b_1200p_video_on_cmd28[] = {
0xda, 0x03, 0x15, 0x80
	};

static char nt51021b_1200p_video_on_cmd29[] = {
0xdb, 0x61, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd30[] = {
0xdc, 0x02, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd31[] = {
0xdd, 0x02, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd32[] = {
0xde, 0x02, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd33[] = {
0xdf, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd34[] = {
0x83, 0xaa, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd35[] = {
0x84, 0x11, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd36[] = {
0xa9, 0x4b, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd37[] = {
0x83, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd38[] = {
0x84, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd39[] = {
0x8f, 0x00, 0x15, 0x80
	};
static char nt51021b_1200p_video_on_cmd40[] = {
0x11, 0x00, 0x05, 0x80
	};
static char nt51021b_1200p_video_on_cmd41[] = {
0x29, 0x00, 0x05, 0x80
	};
/*
static char nt51021b_1200p_video_on_cmdtest[] = {
0x91, 0x00, 0x15, 0x80
	};
*/
static struct mipi_dsi_cmd nt51021b_1200p_video_on_command[] = {
	{0x4, nt51021b_1200p_video_on_cmd0, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd1, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd2, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd3, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd4, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd5, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd6, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd7, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd8, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd9, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd10, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd11, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd12, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd13, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd14, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd15, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd16, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd17, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd18, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd19, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd20, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd21, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd22, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd23, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd24, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd25, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd26, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd27, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd28, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd29, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd30, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd31, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd32, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd33, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd34, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd35, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd36, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd37, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd38, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd39, 0x10},
	{0x4, nt51021b_1200p_video_on_cmd40, 0xa0},
	{0x4, nt51021b_1200p_video_on_cmd41, 0xa0}
	//{0x4, nt51021b_1200p_video_on_cmdtest, 0x10}
};
#define NT5021B_1200P_VIDEO_ON_COMMAND 42//42
#endif
static char nt51021b_1200p_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char nt51021b_1200p_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd nt51021b_1200p_video_off_command[] = {
{ 0x4 , nt51021b_1200p_videooff_cmd0,0x78},
{ 0x4 , nt51021b_1200p_videooff_cmd1,0x78}
};
#define NT51021B_1200PVIDEO_OFF_COMMAND 2


static struct command_state nt51021b_1200p_video_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info nt51021b_1200p_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,03/14/2016,1806036,
//disable bllp_power_mode 

static struct videopanel_info nt51021b_1200p_video_video_panel = {
  1, 0, 0, 0, 1, 0, 2, 0, 0x9
};
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration nt51021b_1200p_video_lane_config = {
  4, 0, 1, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
#if 0
const uint32_t nt51021b_1200p_video_timings[] = {
  0xf7, 0x3c, 0x28, 0x00, 0x6e, 0x70, 0x2e, 0x40, 0x31, 0x03, 0x04, 0x00
};
#endif
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,03/14/2016,1806036,
//modify DPT lcd timming and init code

const uint32_t nt51021b_1200p_video_timings[] = {
  0xeb, 0x38, 0x26, 0x00, 0x6a, 0x6e, 0x2c, 0x3c, 0x2f, 0x03, 0x04, 0x00
};

static struct panel_timing nt51021b_1200p_video_timing_info = {
  0, 2, 0x02, 0x2c
};
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

static struct panel_reset_sequence nt51021b_1200p_video_panel_reset_seq = {
{ 1, 0, 1, }, { 20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight nt51021b_1200p_video_backlight = {
  1, 1, 4095, 100, 1, "PMIC_8941"
};

#define NT51021B_1200P_VIDEO_SIGNATURE 0xFFFF

#endif /*_PANEL_NT51021B_1200P_VIDEO_H_*/
