/*
 * NotebookCapture.cpp
 *
 * Copyright (C) 2009-16 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#include "NotebookCapture.hpp"

namespace rstudio {
namespace session {
namespace modules {
namespace rmarkdown {
namespace notebook {

NotebookCapture::NotebookCapture():
   connected_(false)
{}

NotebookCapture::~NotebookCapture()
{
   if (connected_)
      disconnect();
}

void NotebookCapture::connect()
{
   connected_ = true;
}

void NotebookCapture::disconnect()
{
   connected_ = false;
}

bool NotebookCapture::connected()
{
   return connected_;
}

void NotebookCapture::onExprComplete()
{
   // stub implementation
}

} // namespace notebook
} // namespace rmarkdown
} // namespace modules
} // namespace session
} // namespace rstudio

