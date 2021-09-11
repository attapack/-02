#include <stdbool.h>

bool mx_isdigit(int c){
    if(c >= 30 && c <= 39){
        return 1;
    }
    else{
        return 0;
    }
}
