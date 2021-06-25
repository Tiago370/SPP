#include "rect.h"

Rect::Rect(unsigned int w, unsigned int h){
    this->x = 0;
    this->y = 0;
    this->w = w;
    this->h = h;
}

Rect::~Rect(){}

void Rect::setPosition(unsigned int x, unsigned int y){
    this->x = x;
    this->y = y;
}
void Rect::down(){
    this->y--;
}
void Rect::toTheLeft(){
    this->x--;
}
void Rect::toTheRight(){
    this->x++;
}
unsigned int Rect::getX(){
    return this->x;
}
unsigned int Rect::getY(){
    return this->y;
}
unsigned int Rect::getW(){
    return this->w;
}
unsigned int Rect::getH(){
    return this->h;
}
