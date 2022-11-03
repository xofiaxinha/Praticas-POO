#pragma once
#include "Forma.h"
class FormaTridimensional : public Forma{
    public:
        FormaTridimensional();
        FormaTridimensional(string cor);
        virtual float calcularArea();
        virtual float calcularVolume();
    private:
};