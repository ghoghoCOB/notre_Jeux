#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <iostream>

class Obstacle
{
    protected:
    //Position
    int o_x ;
    int o_y ;
    // Caractéristiques
    int o_diametre ;
    int o_hauteur ;
    // Force, j'ai choisi moi même la formule
    int o_force = o_diametre * 2 + o_hauteur ;
    
    public:

    Obstacle();
    Obstacle(int x, int y, int diametre, int hauteur);
    Obstacle(Obstacle const& tocopy);
    ~Obstacle();
	//Getters
	int getX();
	int getY();
	int getD();
	int getH();
	virtual std::string getName();
    void recevoirDegats(int nbDegats);
};

#endif