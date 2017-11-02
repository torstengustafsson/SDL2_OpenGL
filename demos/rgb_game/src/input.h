#pragma once

#include "linalg/Vector.h"
#include "input/inc/InputCommand.h"

class ChangeBGColorCommand : public InputCommand {
public:
  ChangeBGColorCommand(linalg::Vec4 _color);
  void execute() override;
private:
  linalg::Vec4 color;
};
