#include "inventory.h"

int count_args(char *command, char **comm, char **arg) {
    char *chars_array = strtok(command, " ");
    char *buffcomm = *comm;
    char *buffarg = *arg;
    int count = 0;
    if(chars_array != NULL) {
        strcpy(buffcomm, chars_array);
        while (chars_array != NULL) {
            chars_array = strtok(NULL, " ");
            if((std::string(buffcomm) == "insert" || std::string(buffcomm) == "remove") && count == 0) {
                if(chars_array == NULL) {
                    count = -1;
                    break;
                }
                strcpy(buffarg, chars_array);
            }
            count++;
        }
    }
    return count;
}
