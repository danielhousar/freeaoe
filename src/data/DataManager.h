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


#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <global/Logger.h>
#include <data/GenieGraphic.h>

#include <map>
#include <SFML/Config.hpp>

using sf::Uint32;

class GenieTerrain;
class GenieUnit;

//------------------------------------------------------------------------------
/// Class for receiving and managing data files (.dat)
//
class DataManager
{

public:
  
  static DataManager* Inst();
  
  GenieGraphic getGraphic(sf::Uint32 id);
  
private:
  DataManager();
  DataManager(const DataManager& other);
  virtual ~DataManager();
  virtual DataManager& operator=(const DataManager& other);
  
  void initialize();
  
  static Logger &log;
  
  std::map<Uint32, GenieGraphic *> graphics_;
  std::map<Uint32, GenieTerrain *> terrains_;
  std::map<Uint32, GenieUnit *> units_;
};

#endif // DATAMANAGER_H
