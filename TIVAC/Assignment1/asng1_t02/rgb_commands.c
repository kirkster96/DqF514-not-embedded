//*****************************************************************************
//
// rgb_commands.c - Command line functionality implementation
//
// Copyright (c) 2012-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "drivers/rgb.h"
#include "inc/hw_types.h"
#include "utils/ustdlib.h"
#include "utils/uartstdio.h"
#include "utils/cmdline.h"
#include "rgb_commands.h"
#include "asng1_t02_TIVAC123g.h"

//*****************************************************************************
//
// Table of valid command strings, callback functions and help messages.  This
// is used by the cmdline module.
//
//*****************************************************************************
tCmdLineEntry g_psCmdTable[] =
{
    {"help",     CMD_help,      " : Display list of commands" },
    {"R",      CMD_R,       " : Enable Red LED"},
    {"r",     CMD_r,      " : Disable Red LED"},
    {"G",       CMD_G, " : Enable Green LED"},
    {"g",      CMD_g,       " : Disable Green LED"},
    {"B",      CMD_B,       " : Enable Blue LED"},
    {"b",     CMD_b,      " : Disable Blue LED"},
    {"T",   CMD_T, " : Read Tempurature Centigrade"},
    {"t",      CMD_t,       " : Read Tempurature Fahrenheit"},
    {"S",      CMD_S,       " : Read status of RGB LEDs"},
    { 0, 0, 0 }
};

//*****************************************************************************
//
// Command: help
//
// Print the help strings for all commands.
//
//*****************************************************************************
int
CMD_help(int argc, char **argv)
{
    int32_t i32Index;

    (void)argc;
    (void)argv;

    //
    // Start at the beginning of the command table
    //
    i32Index = 0;

    //
    // Get to the start of a clean line on the serial output.
    //
    UARTprintf("\nAvailable Commands\n------------------\n\n");

    //
    // Display strings until we run out of them.
    //
    while(g_psCmdTable[i32Index].pcCmd)
    {
      UARTprintf("%17s %s\n", g_psCmdTable[i32Index].pcCmd,
                 g_psCmdTable[i32Index].pcHelp);
      i32Index++;
    }

    //
    // Leave a blank line after the help strings.
    //
    UARTprintf("\n");

    return (0);
}

int
CMD_R(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    EnableRed();
    return (0);
}

int
CMD_r(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    DisableRed();
    return (0);
}

int
CMD_G(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    EnableGreen();
    return (0);
}

int
CMD_g(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    DisableGreen();
    return (0);
}

int
CMD_B(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    EnableBlue();
    return (0);
}

int
CMD_b(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    DisableBlue();
    return (0);
}

int
CMD_T(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    printCel();
    return (0);
}

int
CMD_t(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    printFar();
    return (0);
}

int
CMD_S(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    PrintStatus();
    return (0);
}
