/*
 * main.cc
 *
 *  Created on: 7 ����. 2020 �.
 *      Author: unyuu
 */

/*
 	 ������ ���������:
 	 ��� Windows / MinGW:
 	 mingw32
 	 SDL2main
 	 SDL2
 	 SDL2_image
 	 opengl32
 	 glu32
 	 � ��������� �� (����� Android, ��� SDL2main ���� �����):
 	 SDL2
 	 SDL2_image
 	 GL
 	 GLU
 	 OpenGL - Open Graphics Language / Graphics Library
 	 SGI IRIS - Interactive Raster Imaging System
 	 IRIS GL -> OpenGL
 	 ������� ������ - 4.6
 	 "������" ������ - 1.x - 2.x    - ����� �������� ����
 	 "�����"  ������ - 3.x - 4.6    - VBO/VAO + �������, ��� OpenGL ����� ����� �� ����� :)
 */

#include <iostream>
#include <stdexcept>
#include <SDL2/SDL.h>

#include "GLDemoWindow.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING); // �������������� SDL, ���� �� �� ��� ����~~

	try {
		GLDemoWindow w;

		w.main_loop();

	} catch (const std::exception &e) {
		std::cerr << "��� ���������� ��������� ��������� ������:"
				<< std::endl
				<< e.what()
				<< std::endl;
		return 1;
	} catch (...) {
		std::cerr << "��� ���������� ��������� ��������� ����������� ������!"
				<< std::endl;
		return 1;
	}

	return 0;
}

