#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include "config.h"
#include "game.h"

void* game_thread(void* arg) {
    int room_id = ((int*)arg)[0];
    int* forfeit = &((int*)arg)[1];
    free(arg);

    char log_file_path[256];
    snprintf(log_file_path, sizeof(log_file_path), LOG_FILE_PATH_FORMAT, room_id);

    FILE *log_file = fopen(log_file_path, "a");
    if (!log_file) {
        perror("fopen failed");
        return NULL;
    }

    fprintf(log_file, "Game started in room %d\n", room_id);
    fflush(log_file);

    while (1) {
        printf("Updating game state in room %d\n", room_id);

        if (*forfeit) {
            fprintf(log_file, "Player forfeited. Game in room %d ended\n", room_id);
            fflush(log_file);
            break;
        }

        fprintf(log_file, "Player moved piece from A to B\n");
        fflush(log_file);

        sleep(1);
    }

    fclose(log_file);
    printf("Game in room %d has ended\n", room_id);

    pthread_exit(NULL);
}