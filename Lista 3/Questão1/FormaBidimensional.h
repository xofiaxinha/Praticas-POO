#pragma once
#include "Forma.h"
class FormaBidimensional : public Forma{
    public:
        FormaBidimensional();
        FormaBidimensional(string cor);
        virtual float calcularArea();
};