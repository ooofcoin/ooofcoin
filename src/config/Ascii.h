// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n   ____              __________      _    \n" 
        "  / __ \\____  ____  / __/ ____/___  (_)___ \n"
        " / / / / __ \\/ __ \\/ /_/ /   / __ \\/ / __ \\\n"
        "/ /_/ / /_/ / /_/ / __/ /___/ /_/ / / / / /\n"
        "\\____/\\____/\\____/_/  \\____/\\____/_/_/ /_/\n";
                                           



const std::string nonWindowsAsciiArt = 
      "\n   ____              __________      _    \n" 
        "  / __ \\____  ____  / __/ ____/___  (_)___ \n"
        " / / / / __ \\/ __ \\/ /_/ /   / __ \\/ / __ \\\n"
        "/ /_/ / /_/ / /_/ / __/ /___/ /_/ / / / / /\n"
        "\\____/\\____/\\____/_/  \\____/\\____/_/_/ /_/\n";     

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
