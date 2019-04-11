/*
 * maratona.c
 * 
 * Copyright 2018 117210375 MATHEUS SILVA ARAUJO <matheussa@lcc3-33>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){

    int num_participantes, num_questoes;

    cin >> num_questoes;

    int pont_questoes[num_questoes];

    for(int i = 0; i < num_questoes; i++){

        cin >> pont_questoes[i];

    }

  

    cin >> num_participantes;

    char respostas[num_questoes];

    int pontos_max = 0, participante_max = 0;

    for(int i = 0; i < num_participantes; i++){

        int pontos = 0;

        for(int j = 0; j < num_questoes; j++){

            cin >> respostas[j];

            if(respostas[j] == 'V'){

                pontos += pont_questoes[j];

            }

        }

        if(pontos > pontos_max){

            pontos_max = pontos;

            participante_max = i;

        }

    }

    cout << participante_max + 1 << ":" << pontos_max << endl;

    return 0;

}
