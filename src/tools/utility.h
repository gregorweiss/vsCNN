/*

MIT License

Copyright (c) 2020, R. Gregor Weiß, Benjamin Ries

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE
*/

#ifndef CLUSTERING_CLUSTERING_TOOLS_H
#define CLUSTERING_CLUSTERING_TOOLS_H

#include <iostream>

#include <cstdlib>
#include <cmath>
#include <vector>
#include <utility>

#include "../datatypes.h"

using namespace std;

namespace Clustering {

    namespace Utility {

        void sortNclean(vector<vector<unsigned int> > &clusters,
                        unsigned int Nkeep);

        ////////////// HIERARCHICAL CLUSTERING UTILITY ///////////////
        // Build a hierarchy plan
        vector<clstep>
        hierarchy(const unsigned int nsteps,
                  const float cut,
                  const float delta_cut,
                  const unsigned int sim,
                  const unsigned int delta_sim);

    }
};

#endif //CLUSTERING_CLUSTERING_TOOLS_H
