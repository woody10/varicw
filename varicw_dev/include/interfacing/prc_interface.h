/* ====================================================================

VariCW v0.0.1
Copyright (C) 2015

author(s): Corbin Matschull
maintainer(s): Dave Harris
email(s): c.matschull@icloud.com, jushamn@readytek.net

See § 1.2 for documentation on this file.

-----------------------------------------------------------------------
LICENSE (GNU):

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

==================================================================== */
#ifndef PRC_INTERFACE_H_
#define PRC_INTERFACE_H_

    #ifdef RAD_HAS_NO_COMM
    #   define  COMM_STRAT_PASS_BY_REFERENCE 1
    #   define  COMM_DEF_HAS_NO_ARGUMENTS 1
        int rad_val = 1;
        static long INTER_UUID = 1UL;
    #endif

    /*
        Brief-
            Passes command to current active COM interface

        Params-
            arg - argument number
            *cmd[] - Command to pass to interface

        Returns-
            Nothing
    */
    void *pass_interface_command(int arg, char *cmd[]);

    /*
    
    */
    int *time_alive(float tla, char proc_code[]);

#endif