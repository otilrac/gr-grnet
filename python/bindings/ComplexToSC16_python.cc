/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(ComplexToSC16.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a9c94b48caf6b317e7cc9974d81a8fe0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <grnet/ComplexToSC16.h>
// pydoc.h is automatically generated in the build directory
#include <ComplexToSC16_pydoc.h>

void bind_ComplexToSC16(py::module& m)
{

    using ComplexToSC16    = ::gr::grnet::ComplexToSC16;


    py::class_<ComplexToSC16, gr::sync_interpolator,
        std::shared_ptr<ComplexToSC16>>(m, "ComplexToSC16", D(ComplexToSC16))

        .def(py::init(&ComplexToSC16::make),
           D(ComplexToSC16,make)
        )
        



        ;




}








