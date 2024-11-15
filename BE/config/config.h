#ifndef SERVER_PROJECT_CONFIG_H
#define SERVER_PROJECT_CONFIG_H

// 포트 번호 정의
#define SERVER_PORT 8080
#define ADMIN_PORT 9090

// 데이터 디렉토리 경로 정의
#define USER_DATA_DIR "../data/user/"
#define USER_LIST_FILE "../data/user/user_list.txt"

// 방 관련 디렉토리 및 파일 경로 정의
#define ROOM_LIST_FILE "../data/rooms/room_list.txt"

extern const char *cors_headers;


// 토큰 길이 정의
#define TOKEN_LENGTH 32

#endif //SERVER_PROJECT_CONFIG_H
