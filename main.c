//
// Created by qiguo on 25-5-24.
//
#include "raylib.h"
#include "movement.h"
#include "bullet.h"

int main(void) {
    const int screen_width = 800;
    const int screen_height = 1600;
    int x = 50;
    int y = 50;

    InitWindow(screen_width, screen_height, "test");
    SetTargetFPS(60);
    Texture plane = LoadTexture("../rsc/plane.png");

    InitBullets();  // 初始化炮弹系统

    while (!WindowShouldClose()) {
        movement(&x, &y);

        if (IsKeyPressed(KEY_J)) {
            FireBullet(x, y);  // 发射一颗新炮弹
        }

        BeginDrawing();
        ClearBackground(WHITE);

        DrawTexture(plane, x, y, WHITE);
        UpdateAndDrawBullets();  // 更新并绘制所有炮弹

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
