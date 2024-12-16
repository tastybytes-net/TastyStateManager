#ifndef BETTER_CIRCLE_H
#define BETTER_CIRCLE_H

#include "Arduino.h"
#include "HT_SSD1306Wire.h"

extern SSD1306Wire display;

void drawRoundRect(int8_t x, int8_t y, uint8_t w, uint8_t h, uint8_t r);
void drawCircleQuads(int8_t xc, int8_t yc, uint8_t r, uint8_t quad);
void drawCirclePixels(int8_t xc, int8_t yc, int8_t x, int8_t y, uint8_t quad);

void drawRoundRect(int8_t x, int8_t y, uint8_t w, uint8_t h, uint8_t r) {

    drawCircleQuads(x + r, y + r, r, 0b11000000);     // top left
    drawCircleQuads(x + w - r, y + r, r, 0b00000011); // top right

    drawCircleQuads(x + r, y + h - r, r, 0b00110000);     // bottom left
    drawCircleQuads(x + w - r, y + h - r, r, 0b00001100); // bottom right

    display.drawHorizontalLine(x + r, y, w - (r * 2));
    display.drawHorizontalLine(x + r, y + h, w - (r * 2));

    display.drawVerticalLine(x, y + r, h - (r * 2));
    display.drawVerticalLine(x + w, y + r, h - (r * 2));
}

void drawCircleQuads(int8_t xc, int8_t yc, uint8_t r, uint8_t quad) {
    uint8_t x = 0;
    uint8_t y = r;
    int d = 3 - 2 * r;

    drawCirclePixels(xc, yc, x, y, quad);
    while (y >= x) {
        // for each pixel we will
        // draw all eight pixels

        x++;

        // check for decision parameter
        // and correspondingly
        // update d, x, y
        if (d > 0) {
            y--;
            d = d + 4 * (x - y) + 10;
        } else {
            d = d + 4 * x + 6;
        }
        drawCirclePixels(xc, yc, x, y, quad);
    }
}

void drawCirclePixels(int8_t xc, int8_t yc, int8_t x, int8_t y, uint8_t quad) {
    if (quad & 1) { // NNE
        display.setPixel(xc + x, yc - y);
    }
    if (quad & 2) { // NEE
        display.setPixel(xc + y, yc - x);
    }
    if (quad & 4) { // SEE
        display.setPixel(xc + y, yc + x);
    }
    if (quad & 8) { // SSE
        display.setPixel(xc + x, yc + y);
    }
    if (quad & 16) { // SSW
        display.setPixel(xc - x, yc + y);
    }
    if (quad & 32) { // SWW
        display.setPixel(xc - y, yc + x);
    }
    if (quad & 64) { // NWW
        display.setPixel(xc - y, yc - x);
    }
    if (quad & 128) { // NNW
        display.setPixel(xc - x, yc - y);
    }
}

#endif