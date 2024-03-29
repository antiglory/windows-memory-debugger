// intf.c (program interface)
#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "adi.c" // advanced input
#include "../def.c" // definitions

void program_interface() {
    while (1) {
        input("dll; # ", userInput, 's');
        
        // system inputs
        if (strcmp(userInput, "clear") == 1 || strcmp(userInput, "cls") == 1) {
            system("cls");
        }

        else if (strcmp(userInput, "acpid") == 1) {
            printf("[+] %lu\n", ProcessId);
        }
        else if (strcmp(userInput, "unlog") == 1) {
            if (freem() == 0) {
                printf("[!] exiting with failure\n");
                return;
            }
            else if (freem() == 1) {
                printf("[+] bye bye\n");
                return;
            }
        }
    }
}