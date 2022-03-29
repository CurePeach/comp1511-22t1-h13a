#include <stdio.h>

struct alarm {
    int time;
    int volume;
};

void print_alarms(struct alarm alarms[]) {
    int count = 0;
    while (count < length) {
        printf("WAKE UP THE TIME IS %d!!!\n", alarms[count].volume);
    }
}

int main(void) {
    struct alarm alarms[4] = 0;
    // We need to wake up at 9
    alarms[1].time = 900;
    alarms[1].volume = 40;
    // Okay but maybe if that doesn't work we'll set another one
    alarms[2].time = 905;
    alarms[2].volume = 50;
    // If we don't wake up past this we're in trouble
    alarms[3].time = 910;
    alarms[3].volume = 60;
    // WAKE UP PLEASE
    alarms[4].time = 915;
    alarms[4].volume = 100;

    print_pets_status(alarms[4]);
    return 0;
}