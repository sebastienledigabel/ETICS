/*-------------------------------------------------------------------------------*/
/*  SOLAR - The solar thermal power plant simulator                              */
/*  https://github.com/bbopt/solar                                               */
/*                                                                               */
/*  Miguel Diago, Sebastien Le Digabel, Mathieu Lemyre-Garneau, Bastien Talgorn  */
/*                                                                               */
/*  Polytechnique Montreal / GERAD                                               */
/*  sebastien.le-digabel@polymtl.ca                                              */
/*                                                                               */
/*  This program is free software: you can redistribute it and/or modify it      */
/*  under the terms of the GNU Lesser General Public License as published by     */
/*  the Free Software Foundation, either version 3 of the License, or (at your   */
/*  option) any later version.                                                   */
/*                                                                               */
/*  This program is distributed in the hope that it will be useful, but WITHOUT  */
/*  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        */
/*  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  */
/*  for more details.                                                            */
/*                                                                               */
/*  You should have received a copy of the GNU Lesser General Public License     */
/*  along with this program. If not, see <http://www.gnu.org/licenses/>.         */
/*                                                                               */
/*-------------------------------------------------------------------------------*/
#ifndef __PARASITICS_H__
#define __PARASITICS_H__

#include <vector>

struct Parasitics {

  std::vector<double> _recPressure;   // Pa
  std::vector<double> _recFlow;       // kg/s
  std::vector<double> _sGenMsPressure;
  std::vector<double> _sGenMsFlow;    // kg/s
  std::vector<double> _turbineStRate; // kg/s
  std::vector<double> _sGenStPressure;
  std::vector<double> _vRecPumpPower;
  std::vector<double> _vSGenMsPumpPower;
  std::vector<double> _vSGenStPumpPower;
  std::vector<double> _vCoolerPumpPower;
  std::vector<double> _vCompressorPower;
  std::vector<double> _vHelConsPower;
  double _recPumpNrg;
  double _sGenMsNrg;
  double _sGenStNrg;
  double _coolerNrg;
  double _compressNrg;
  double _helConsNrg;

  Parasitics();
};

#endif
