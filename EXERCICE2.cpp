// Classe abstraite de base
class Vehicle {
protected:
    int speed;
public:
    Vehicle(int s = 0) : speed(s) {}
    virtual ~Vehicle() {}

    // Méthodes abstraites
    virtual void avancer() = 0;
    virtual void reculer() = 0;

    // Getters et setters
    int getSpeed() const { return speed; }
    void setSpeed(int s) { speed = s; }
};

// Classe concrète intermédiaire
class Car : public Vehicle {
public:
    Car(int s = 0) : Vehicle(s) {}

    void avancer() override {
        // Implémentation
    }

    void reculer() override {
        // Implémentation
    }
};

// Classe concrète dérivée
class SportCar : public Car {
private:
    bool turboMode;
public:
    SportCar(int s = 0, bool turbo = false)
        : Car(s), turboMode(turbo) {
    }

    void activerTurbo() {
        turboMode = true;
    }
};