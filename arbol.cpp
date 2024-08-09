#include "arbol.h"


void Arbol::DibujarArbol(float x, float y, float z){

    glPushMatrix();
        glTranslatef(-1.5, 0, 0);
        glRotatef(90, 1, 0, 0);
        glutWireSphere(0.5, 20, 20);
        glutSolidCylinder(0.25, 1, 20, 20);

    glPopMatrix();


}