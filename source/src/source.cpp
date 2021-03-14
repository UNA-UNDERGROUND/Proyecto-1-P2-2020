#include <conmenu/menu.hpp>
#include <iostream>

using std::cin;
using std::cout;

class opcionDummy : public opcion {
  public:
	explicit opcionDummy(const std::string &nombre) : opcion(nombre) {}
	bool ejecutar() override {
		cout << "hola, me llamo: \"" << getNombre() << "\".\n";
		cin.ignore();
		return true;
	}
};

int main(int, char **) {
	menu principal("menu principal");
	menu *sub1 = new menu("seguridad y administracion de roles");
	menu *sub2 = new menu("Mantenimiento General a Nivel de Registro");
	menu *sub3 = new menu("Mantenimiento por Escuela");
	menu *sub4 = new menu("Matricula e historiales");
	menu *sub5 = new menu("Registro de actas");
	sub1->agregarOpcion(new opcionDummy("Crear Usuario"));
	sub1->agregarOpcion(new opcionDummy("Mostrar Usuarios"));
	sub2->agregarOpcion(
	    new opcionDummy("Mantenimiento de Años y Ciclos Lectivos"));
	sub2->agregarOpcion(new opcionDummy("Mantenimiento de Carreras y Cursos"));
	sub2->agregarOpcion(new opcionDummy("Empadronamiento"));
	sub3->agregarOpcion(
	    new opcionDummy("Consulta de Plan de Estudios Vigente por Carrera"));
	sub3->agregarOpcion(new opcionDummy("Proceso de Asignación de Grupos"));
	sub3->agregarOpcion(new opcionDummy("Consulta General de Matricula"));
	sub3->agregarOpcion(new opcionDummy("Mantenimiento de Académicos"));
	sub4->agregarOpcion(new opcionDummy("Proceso de Matricula"));
	sub4->agregarOpcion(
	    new opcionDummy("Consulta de matricula por Estudiante"));
	sub4->agregarOpcion(new opcionDummy("Historial Académico por Estudiante"));
	sub5->agregarOpcion(new opcionDummy("Proceso de Registro de Actas"));
	principal.agregarSubMenu(sub1);
	principal.agregarSubMenu(sub2);
	principal.agregarSubMenu(sub3);
	principal.agregarSubMenu(sub4);
	principal.agregarSubMenu(sub5);
	principal.mostrar();
}