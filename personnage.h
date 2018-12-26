#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>

class Personnage
{
    protected:
	//position
	int p_x;
	int p_y;
	//orientation du joueur
	int p_rotation;
	int p_angle_tir;
	// Carat�riqtiques
	int p_vie;
	friend std::ostream& operator<<(std::ostream &strm, const Personnage &a);

    public:

	Personnage();
	Personnage(int x, int y, int vie);
	Personnage(Personnage const& tocopy);
	~Personnage();
	void setOrientation(int angle);
	void marcher(int distance);
	void tirer(int nbDegats);


   

};





#endif // !PERSONNAGE_H

