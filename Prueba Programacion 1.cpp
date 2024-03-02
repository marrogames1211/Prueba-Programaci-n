#include <iostream>
#include <string>

using namespace std;

// Definimos la clase Camisa
class Camisa {
private:
    string color;
    string tamanio;
    string material;

public:
    void setColor(string c) {
        color = c;
    }

    void setTamanio(string t) {
        tamanio = t;
    }

    void setMaterial(string m) {
        material = m;
    }

    void imprimir() {
        cout << "Camisa - Color: " << color << ", Tama�o: " << tamanio << ", Material: " << material << endl;
    }
};

// Definimos la clase Shorts
class Shorts {
private:
    string color;
    string tamanio;
    string material;

public:
    void setColor(string c) {
        color = c;
    }

    void setTamanio(string t) {
        tamanio = t;
    }

    void setMaterial(string m) {
        material = m;
    }

    void imprimir() {
        cout << "Shorts - Color: " << color << ", Tama�o: " << tamanio << ", Material: " << material << endl;
    }
};

// Definimos  la clase Gorras
class Gorra {
private:
    string color;
    string tamanio;
    string material;

public:
    void setColor(string c) {
        color = c;
    }

    void setTamanio(string t) {
        tamanio = t;
    }

    void setMaterial(string m) {
        material = m;
    }

    void imprimir() {
        cout << "Gorra - Color: " << color << ", Tama�o: " << tamanio << ", Material: " << material << endl;
    }
};

// Definimos la clase Tenis
class Tenis {
private:
    string color;
    string tamanio;
    string material;

public:
    void setColor(string c) {
        color = c;
    }

    void setTamanio(string t) {
        tamanio = t;
    }

    void setMaterial(string m) {
        material = m;
    }

    void imprimir() {
        cout << "Tenis - Color: " << color << ", Tama�o: " << tamanio << ", Material: " << material << endl;
    }
};

// Definimos la clase Jersey
class Jersey {
private:
    string color;
    string tamanio;
    string material;

public:
    void setColor(string c) {
        color = c;
    }

    void setTamanio(string t) {
        tamanio = t;
    }

    void setMaterial(string m) {
        material = m;
    }

    void imprimir() {
        cout << "Jersey - Color: " << color << ", Tama�o: " << tamanio << ", Material: " << material << endl;
    }
};

int main() {
    // Ejemplos de cada clases 
    Camisa camisa;
    camisa.setColor("Azul");
    camisa.setTamanio("M");
    camisa.setMaterial("Algod�n");
    camisa.imprimir();

    Shorts shorts;
    shorts.setColor("Negro");
    shorts.setTamanio("L");
    shorts.setMaterial("Poli�ster");
    shorts.imprimir();

    Gorra gorra;
    gorra.setColor("Rojo");
    gorra.setTamanio("�nico");
    gorra.setMaterial("Lona");
    gorra.imprimir();

    Tenis tenis;
    tenis.setColor("Blanco");
    tenis.setTamanio("10");
    tenis.setMaterial("Cuero");
    tenis.imprimir();

    Jersey jersey;
    jersey.setColor("Verde");
    jersey.setTamanio("XL");
    jersey.setMaterial("Poli�ster");
    jersey.imprimir();

    return 0;
}

