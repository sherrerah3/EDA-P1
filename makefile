# Variables
CXX = g++
CXXFLAGS = -Wall  #opción -Wall es una bandera del compilador g++ que habilita una serie de advertencias (warnings) útiles
OBJ = producto.o  
TARGET = programa

# Regla para compilar el programa
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)


# Regla para compilar persona.cpp
producto.o: producto.cpp producto.h
	$(CXX) $(CXXFLAGS) -c producto.cpp


# Limpiar archivos objeto y el ejecutable
clean:
	rm -f $(OBJ) $(TARGET)
