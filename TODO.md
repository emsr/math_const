# C++ Math Constants

/emsr/cxx_math_const.svg?branch=master)](https://travis-ci.org/emsr/cxx_math_const)
Implement standard and Gnu extension math constants.
The OpenGL folks have [ideas about C++ constants](https://raw.githubusercontent.com/KhronosGroup/libclcxx/master/include/opencl_math_constants).

##Goals and Ideas:
  1. [x] Implement Lev's ideas.

  2. [ ] Comment OEIS everywhere if available and findable.

  3. [ ] Implement multi-word constants.
         One way to view a constant implemented as an unevaluated sum of several floating-
         point values is as a polynomial in t = B^-q where B is the base of the floating-point number and 
         q <= p where p is the precision of the number.

         For double we could use full 53-bit constants and t = 2^{-53}.

         We could use 52-bit constants expressed as 13-digit hex constants
         and t = 2^{-52}.

  4. [ ] Consider rounding.
         For the standard we need to consider this in "commitee".
         We should leave room for it in a future standard.
         We might have to say something about what you get now though.

  5. [ ] I think the presence of invsqrt3_t and not invsqrt3_t in Lev's proposal is an oversight.
