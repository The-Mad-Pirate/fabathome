/*---------------------------------------------------------------------------*\
 This file is part of the Fab@Home Project.
 Fab@Home operates under the BSD Open Source License.

 Copyright (c) 2009, Karl Gluck (kwg8@cornell.edu)

 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the <organization> nor the
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
#include "toolscripttool.h"
#include "toolscriptsetting.h"


ToolScriptTool::ToolScriptTool(const QString& tool_name,
                               const QString& material_name,
                               bool is_support_material,
                               const QString& script_variable)
    : name_(tool_name),
      material_name_(material_name),
      is_support_material_(is_support_material),
      script_variable_(script_variable) {
  if (material_name_.isEmpty()) {
    material_name_ = name_;
  }
}


ToolScriptTool::~ToolScriptTool() {
  for (int i = 0; i < settings_.size(); ++i) {
    delete settings_.at(i);
  }
  settings_.clear();
}


void ToolScriptTool::addSetting(ToolScriptSetting* setting) {
  settings_.push_back(setting);
}


const QList<ToolScriptSetting*>& ToolScriptTool::settings() const {
  return settings_;
}



QString ToolScriptTool::name() const {
  return name_;
}



QString ToolScriptTool::materialName() const {
  return material_name_;
}


bool ToolScriptTool::isSupportMaterial() const {
  return is_support_material_;
}


QString ToolScriptTool::scriptVariable() const {
  return script_variable_;
}
