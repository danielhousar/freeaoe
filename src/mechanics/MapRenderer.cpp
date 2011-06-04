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


#include "MapRenderer.h"
#include <SFML/Graphics/Sprite.hpp>
#include <resource/Graphic.h>
#include <resource/ResourceManager.h>

MapRenderer::MapRenderer(sf::RenderTarget *rt)
{
  render_ = rt;
}

MapRenderer::~MapRenderer()
{

}

void MapRenderer::setMap(Map* map)
{
  map_ = map; 
  
}

void MapRenderer::Draw()
{
  int x, y, x_start, y_start;
  x_start = y_start = x = y = 100;
  
  for (int col = 0; col < map_->getCols(); col++)
  {
    x = x_start;
    y = y_start;
    
    for (int row = 0; row < map_->getRows(); row++)
    {
      sf::Sprite spr;
      
      spr.SetX(x);
      spr.SetY(y);
      
      GenieTerrain ter = map_->getTerrain(col, row);
      
      std::auto_ptr<Graphic> ptr = 
        ResourceManager::Inst()->getGraphic(ter.slp_id);
      
      spr.SetImage(*ptr->getImage());
      
      render_->Draw(spr);
      
      x += 48;
      y += 24;
      
    }
    
    x_start -= 48;
    y_start += 24;
  }
}

