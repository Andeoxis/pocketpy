#ifndef GPIO_BRIDGE_H
#define GPIO_BRIDGE_H

#include <iostream>

class HardwareBridge {
public:
    HardwareBridge() {
        std::cout << "[Hardware Bridge] Inicializando pines virtuales de robótica..." << std::endl;
    }

    void move_servo(int pin, int angle) {
        if (angle < 0 || angle > 180) {
            std::cout << "[Error] El ángulo debe estar entre 0 y 180 grados." << std::endl;
            return;
        }
        std::cout << "[GPIO Pin " << pin << "] Ejecutando movimiento a " << angle << " grados." << std::endl;
    }
};

#endif
