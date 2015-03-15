// Copyright 2015 SimpleThings, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CANOPY_MIN_INCLUDED
#define CANOPY_MIN_INCLUDED

#include	<canopy_min.h>

/*
 * This is ifdefed out in case this file gets included somewhere before we
 * populate it from canopy_min.h
 */

// This is used to verify that programs compiled using this version of the
// header also link with the same version number of the library.
#define CANOPY_MIN_HEADER_VERSION "15.02.30"


/*
 * Procedures related to canopy_remote's
 */
canopy_error canopy_cleanup_remote(canopy_remote_t *remote);


#endif
