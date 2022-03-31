# Game_Engine_Mark_I

En este primer Hito, la principal motivación es crear las bases para poder crear tipos de **juegos en 3D**, 
para esto, se implementarios los archivos Vector3D.h y .cpp, BoundingBox.h y .cpp, y Actor.h y .cpp, además de
claro un main.cpp.

##Actor
En estos archivos se definen como se construiran los actores que protagonizaran su juego. Hasta el momento estos
archivos aun estan en desarrollo, pero como un adelanto del esqueleto, un Actor tendra parametros como:
* Posición
* Velocidad
* Alto
* Ancho
* Largo
Y funciones que le permitan tanto moverse en el espacio como saber en que posición del espacio esta.

##BoundingBox
BoundingBox representará el espacio tri-dimensional que se desee trabajar, sus parametros son:
* Posición
* Largo
* Alto
* Ancho
Y también tiene funciones que le permitan moverse, y ver si esta chocando con alguna otra BoundingBox.

##Vector3D
Componente básico para el trabajo en 3D, con el se podrá tanto definir posiciones como velocidades y
realizar calculos variados.
