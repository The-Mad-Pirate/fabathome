/*---------------------------------------------------------------------------*\
 This file is part of the Fab@Home Project.
 Fab@Home operates under the BSD Open Source License.

 Copyright (c) 2010, Karl Gluck (kwg8@cornell.edu)
               2010, Jeremy Cohen (jrc352@cornell.edu)

 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the Fab@Home nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNERS OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\*---------------------------------------------------------------------------*/
#pragma once

#include "shared/fabathome-constants.h"

struct PositionAndOrientation{
    double x;
    double y;
    bool isRotated;
};

/**
 * This method returns a list of positions and orientations that minimize the total
 * area of the current items on the tray
 * @param  footprints  A list of items of the type FAHLoopInXYPlane that
 * @param  traywidth  The width of the tray.
 * @return  A list of minimum x and y values for each item and a boolean whether
 *          it is rotated from its original position
 **/
QList<PositionAndOrientation> arrangeBuildTray(const QList<FAHLoopInXYPlane>& footprints, double trayWidth);

