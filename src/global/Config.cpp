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


#include "Config.h"

//------------------------------------------------------------------------------
Config* Config::Inst()
{
  static Config config;
  return &config;
}

//------------------------------------------------------------------------------
std::string Config::getGamePath()
{
  return Config::game_dir_;
}

//------------------------------------------------------------------------------
std::string Config::getDataPath()
{
  return Config::game_dir_ + "Data/";
}

//------------------------------------------------------------------------------
Config::Config()
{
  game_dir_ = "aoe2/";
}

//------------------------------------------------------------------------------
Config::Config(const Config& other)
{

}

//------------------------------------------------------------------------------
Config::~Config()
{

}

