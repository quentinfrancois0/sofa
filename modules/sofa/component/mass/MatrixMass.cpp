/*******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 beta 1       *
*                (c) 2006-2007 MGH, INRIA, USTL, UJF, CNRS                     *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Contact information: contact@sofa-framework.org                              *
*                                                                              *
* Authors: J. Allard, P-J. Bensoussan, S. Cotin, C. Duriez, H. Delingette,     *
* F. Faure, S. Fonteneau, L. Heigeas, C. Mendoza, M. Nesme, P. Neumann,        *
* and F. Poyer                                                                 *
*******************************************************************************/
#include <sofa/component/mass/MatrixMass.inl>
#include <sofa/core/ObjectFactory.h>
#include <sofa/defaulttype/Mat.h>
#include <sofa/defaulttype/Vec3Types.h>

namespace sofa
{

namespace component
{

namespace mass
{

using namespace sofa::defaulttype;



SOFA_DECL_CLASS(MatrixMass)


// Register in the Factory
int MatrixMassClass = core::RegisterObject("Define a specific mass for each particle")
//.addAlias("MatrixMass")
// .add< MatrixMass<Vec3dTypes,double> >()
// .add< MatrixMass<Vec3fTypes,float> >()
// .add< MatrixMass<Vec2dTypes,double> >()
// .add< MatrixMass<Vec2fTypes,float> >()
        .add< MatrixMass<Vec3dTypes,Mat3x3d> >()
        .add< MatrixMass<Vec3fTypes,Mat3x3f> >()
        .add< MatrixMass<Vec2dTypes,Mat2x2d> >()
        .add< MatrixMass<Vec2fTypes,Mat2x2f> >()
        ;

template class MatrixMass<Vec3dTypes,Mat3x3d>;
template class MatrixMass<Vec3fTypes,Mat3x3f>;
template class MatrixMass<Vec2dTypes,Mat2x2d>;
template class MatrixMass<Vec2fTypes,Mat2x2f>;

} // namespace mass

} // namespace component

} // namespace sofa

