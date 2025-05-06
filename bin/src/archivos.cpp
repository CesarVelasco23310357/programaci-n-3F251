using namespace std;
 
 struct Persona
 {
 	char nombre [12];
 	int edad;
 };
 
 int main(int argc, char const *argv[])
 {
 	ofstream archivoSalida("archivo.txt");
  int main(int argc, char const *argv[])
 	}
 	archivoEntrada.close();
 
 	//------------------------------------------------------------------------------------
 	// Escritura de archivos Binarios
 	ofstream archivoSalidaBinario("archivo.bin",ios::binary);
 	if (!archivoSalidaBinario)
 	{
 		cerr << "Error al leer archivo" << endl;
 		return 1; // finalizar error
 	}
 
 	Persona p1 = {"Juan", 20};
 	Persona p2 = {"Pedro", 30};
 	Persona p3 = {"Maria", 40};
 
 	archivoSalidaBinario.write((char*)(&p1),sizeof(Persona));
 	archivoSalidaBinario.write((char*)(&p2),sizeof(Persona));
 	archivoSalidaBinario.write((char*)(&p3),sizeof(Persona));
 
 	archivoSalidaBinario.close();
 	return 0;
 }