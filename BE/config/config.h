#ifndef SERVER_PROJECT_CONFIG_H
#define SERVER_PROJECT_CONFIG_H

// 포트 번호 정의
#define SERVER_PORT 8080
#define ADMIN_PORT 9090

// 데이터 디렉토리 경로 정의
#define USER_DATA_DIR "../data/user/"
#define USER_LIST_FILE "../data/user/user_list.txt"
#define GAME_HISTORY "../data/game/%d/history.txt"

// 방 관련 디렉토리 및 파일 경로 정의
#define ROOM_LIST_FILE "../data/rooms/room_list.txt"

#define USER_IMAGE_FILE "../data/user_image.txt"


extern const char *cors_headers;

// 로그 파일 경로 포맷 정의
#define LOG_FILE_PATH_FORMAT "../data/game/%d/game_log.txt"

// 토큰 길이 정의
#define TOKEN_LENGTH 37

#include <stdbool.h>
extern bool is_game_over;

#endif //SERVER_PROJECT_CONFIG_H
