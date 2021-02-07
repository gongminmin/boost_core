/*
Copyright 2019 Glen Joseph Fernandes
(glenjofe@gmail.com)

Distributed under the Boost Software License, Version 1.0.
(http://www.boost.org/LICENSE_1_0.txt)
*/
#include <boost/config.hpp>
#if !defined(BOOST_NO_CXX14_CONSTEXPR)
#include <boost/core/first_scalar.hpp>

static int i1 = 0;
static_assert(boost::first_scalar(&i1) == &i1);
static int i2[4] = { };
static_assert(boost::first_scalar(i2) == &i2[0]);
static int i3[2][4][6] = { };
static_assert(boost::first_scalar(i3) == &i3[0][0][0]);
#endif
