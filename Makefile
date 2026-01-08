# Compilateur et options
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Nom de l'exécutable
TARGET = hotel

# Fichiers sources et objets
SOURCES = main.cpp Date.cpp Client.cpp Chambre.cpp Hotel.cpp Reservation.cpp
HEADERS = Date.h Client.h Chambre.h Hotel.h Reservation.h
OBJECTS = $(SOURCES:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Création de l'exécutable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compilation des fichiers objets
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJECTS)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(TARGET)

# Recompilation complète
re: fclean all

# Déclaration des cibles qui ne sont pas des fichiers
.PHONY: all clean fclean re
