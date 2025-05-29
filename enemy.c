//
// Created by qiguo on 25-5-25.
//
#include "enemy.h"
#include <stdlib.h>

void InitEnemies(Enemy *enemies) {
    for (int i = 0; i < MAX_ENEMIES; i++) {
        enemies[i].position = (Vector2){rand() % 700 + 50, rand() % 200};
        enemies[i].hp = 3;
        enemies[i].active = true;
    }
}

void UpdateEnemies(Enemy *enemies) {
    for (int i = 0; i < MAX_ENEMIES; i++) {
        if (enemies[i].active) {
            enemies[i].position.y += 1; // 慢慢向下
        }
    }
}

void DrawEnemies(Enemy *enemies) {
    for (int i = 0; i < MAX_ENEMIES; i++) {
        if (enemies[i].active) {
            DrawCircleV(enemies[i].position, 32, BLUE);
        }
    }
}
