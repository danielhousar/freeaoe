/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2011  <copyright holder> <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef MAPRENDERER_H
#define MAPRENDERER_H
#include "Map.h"
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics.hpp>

// Warning: Still experimental
// TODO: Move to render dir
// TODO: Use GenieGraphics instead of SlpFiles
class MapRenderer : public sf::RenderTarget
{

public:
  MapRenderer(sf::RenderTarget *rt);
  virtual ~MapRenderer();
  
  virtual unsigned int GetHeight() const { return 400; }
  virtual unsigned int GetWidth() const { return 400; }
  virtual bool Activate(bool Active) {}
  
  void setMap(Map *map); 
  
  void Draw();
  
private:
  Map *map_;
  sf::RenderTarget *render_;
  //sf:: *image;
};

#endif // MAPRENDERER_H
