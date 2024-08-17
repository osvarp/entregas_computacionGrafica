#include "cola.h"

void cola::dibujarCola(float angulo, int n, float x, float y, float z) {
	glPushMatrix();
		
		//glTranslatef(-1.0, 0.0, 0.0);
		//glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
		//glTranslatef(1.0, 0.0, 0.0); 

		for (int i = 0; i < n; ++i) {

			glTranslatef(0.9, 0.0, 0.0);
			glRotatef((GLfloat)angulo, 0.5, 0, 1.0);
			glTranslatef(0.9, 0.0, 0.0);

			glPushMatrix();
				glScalef(2.0, 0.4, 1.0);
				glutSolidCube(1.0);
			glPopMatrix();
		}

	glPopMatrix();
}
