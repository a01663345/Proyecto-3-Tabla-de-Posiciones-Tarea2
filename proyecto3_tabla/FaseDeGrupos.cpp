#include "FaseDeGrupos.h"

void FaseDeGrupos::agregarGrupo(const string& nombre) {
    grupos.emplace(nombre, GrupoMundial(nombre));
}

GrupoMundial& FaseDeGrupos::operator[](const string& nombre) {
    return grupos.at(nombre);
}
