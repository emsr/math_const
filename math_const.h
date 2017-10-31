
namespace std {
namespace math_constants {

  /// Euler constant @f$ e = 2.71828... @f$
  /// <a href="https://oeis.org/A001113"> (OEIS A001113) </a>
  template<typename _Tp>
    inline constexpr _Tp
    e_v         = _Tp{2.7182'81828'45904'52353'60287'47135'26624'97759e+0L};

  /// The base-2 logarithm of the Euler constant @f$ log_2(e) @f$
  /// <a href="https://oeis.org/A181171"> (OEIS A181171) </a>
  template<typename _Tp>
    inline constexpr _Tp
    log2e_v     = _Tp{1.4426'95040'88896'34073'59924'68100'18921'37427e+0L};

  /// The base-10 logarithm of the Euler constant @f$ log_{10}(e) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename _Tp>
    inline constexpr _Tp
    log10e_v    = _Tp{4.3429'44819'03251'82765'11289'18916'60508'22940e-1L};

  /// The Archimedean constant @f$ \pi = 3.1415... @f$
  /// <a href="https://oeis.org/A000796"> (OEIS A000796) </a>
  template<typename _Tp>
    inline constexpr _Tp
    pi_v        = _Tp{3.1415'92653'58979'32384'62643'38327'95028'84195e+0L};
              //= _Tp{0x3.243'F6A8'885A'308D'3131'98A2'E037'0734'4A40'9382'2299'F31Dp+0L}

  /// The reciprocal of Archimedes' constant @f$ 1/\pi @f$
  /// <a href="https://oeis.org/A049541"> (OEIS A049541)</a>
  template<typename _Tp>
    inline constexpr _Tp
    invpi_v     = _Tp{3.1830'98861'83790'67153'77675'26745'02872'40691e-1L};

  /// The reciprocal square root of Archimedes' constant @f$ 1/\sqrt{\pi} @f$
  /// <a href="https://oeis.org/A087197"> (OEIS A087197) </a>
  template<typename _Tp>
    inline constexpr _Tp
    invsqrtpi_v = _Tp{5.6418'95835'47756'28694'80794'51560'77258'58438e-1L};

  /// The Napierian logarithm of 2 @f$ ln(2) @f$
  /// <a href="https://oeis.org/A002162"> (OEIS A002162) </a>
  template<typename _Tp>
    inline constexpr _Tp
    ln2_v       = _Tp{6.9314'71805'59945'30941'72321'21458'17656'80748e-1L};

  /// The Napierian logarithm of 10 @f$ ln(10) @f$
  /// <a href="https://oeis.org/A002392"> (OEIS A002392) </a>
  template<typename _Tp>
    inline constexpr _Tp
    ln10_v      = _Tp{2.3025'85092'99404'56840'17991'45468'43642'07602e+0L};

  /// The square root of 2 @f$ \sqrt{2} @f$
  /// <a href="https://oeis.org/A002193"> (OEIS A002193) </a>
  template<typename _Tp>
    inline constexpr _Tp
    sqrt2_v     = _Tp{1.4142'13562'37309'50488'01688'72420'96980'78569e+0L};

  /// The square root of 3 @f$ \sqrt{3} @f$
  /// <a href="https://oeis.org/A002194"> (OEIS A002194) </a>
  template<typename _Tp>
    inline constexpr _Tp
    sqrt3_v     = _Tp{1.7320'50807'56887'72935'27446'34150'58723'66945e+0L};

  /// The reciprocal square root of 3 @f$ 1 / \sqrt{3} @f$
  /// <a href="https://oeis.org/A020760"> (OEIS A020760) </a>
  template<typename _Tp>
    inline constexpr _Tp
    invsqrt3_v  = _Tp{5.7735'02691'89625'76450'91487'80501'95745'56475e-1L};

  /// The radians per degree conversion factor @f$ \pi / 180 @f$
  /// <a href="https://oeis.org/A019685"> (OEIS A019685) </a>
  template<typename _Tp>
    inline constexpr _Tp
    radian_v    = _Tp{1.7453'29251'99432'95769'23690'76848'86127'13443e-2L};

  /// The Euler-Mascheroni constant @f$ \gamma_E @f$
  /// <a href="https://oeis.org/A001620"> (OEIS A001620) </a>
  template<typename _Tp>
    inline constexpr _Tp
    egamma_v    = _Tp{5.7721'56649'01532'86060'65120'90082'40243'10432e-1L};

  /// The golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  /// <a href="https://oeis.org/A001622"> (OEIS A001622)
  template<typename _Tp>
    inline constexpr _Tp
    phi_v       = _Tp{1.6180'33988'74989'48482'04586'83436'56381'17720e+0L};

  /// Catalan's constant @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  /// <a href="https://oeis.org/A006752"> (OEIS A006752) </a>
  template<typename _Tp>
    inline constexpr _Tp
    catalan_v   = _Tp{9.1596'55941'77219'01505'46035'14932'38411'07741e-1L};

  /// Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  /// <a href="https://oeis.org/A002117"> (OEIS A002117) </a>
  template<typename _Tp>
    inline constexpr _Tp
    apery_v     = _Tp{1.2020'56903'15959'42853'99738'16151'14499'90768e+0L};

  /// Glaisher's constant @f$ A = e^{\frac{1}{12} - \zeta'(-1)} @f$
  /// <a href="https://oeis.org/A074962"> (OEIS A074962) </a>
  template<typename _Tp>
    inline constexpr _Tp
    glaisher_v  = _Tp{1.2824'27129'10062'26368'75342'56886'97917'27767e+0L};

  // float "specializations"

  /// The \c float version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr float
  ef = e_v<float>;

  /// The \c float version of the base-2 logarithm of the Euler constant
  /// @f$ log_2(e) @f$
  inline constexpr float
  log2ef = log2e_v<float>;

  /// The \c float version of the base-10 logarithm of the Euler constant
  /// @f$ log_{10}(e) @f$
  inline constexpr float
  log10ef = log10e_v<float>;

  /// The \c float version of the Archimedean constant @f$ \pi = 3.1415... @f$
  inline constexpr float
  pif = pi_v<float>;

  /// The \c float version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr float
  invpif = invpi_v<float>;

  /// The \c float version of the reciprocal square root of Archimedes' constant
  /// @f$ 1/\sqrt{\pi} @f$
  inline constexpr float
  invsqrtpif = invsqrtpi_v<float>;

  /// The \c float version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr float
  ln2f = ln2_v<float>;

  /// The \c float version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr float
  ln10f = ln10_v<float>;

  /// The \c float version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr float
  sqrt2f = sqrt2_v<float>;

  /// The \c float version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr float
  sqrt3f = sqrt3_v<float>;

  /// The \c float version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr float
  invsqrt3f = invsqrt3_v<float>;

  /// The \c float version of the radians per degree conversion factor
  /// @f$ \pi / 180 @f$
  inline constexpr float
  radianf = radian_v<float>;

  /// The \c float version of the Euler-Mascheroni constant @f$ \gamma_E @f$
  inline constexpr float
  egammaf = egamma_v<float>;

  /// The \c float version of the golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr float
  phif = phi_v<float>;

  /// The \c float version of Catalan's constant
  /// @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  inline constexpr float
  catalanf = catalan_v<float>;

  /// The \c float version of Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  inline constexpr float
  aperyf = apery_v<float>;

  /// The \c float version of Glaisher's constant
  /// @f$ A = e^{\frac{1}{12} - \zeta'(-1)} @f$
  inline constexpr float
  glaisherf = glaisher_v<float>;

  // double "specializations"

  /// The \c double version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr double
  e = e_v<double>;

  /// The \c double version of the base-2 logarithm of the Euler constant
  inline constexpr double
  log2e = log2e_v<double>;

  /// The \c double version of the base-10 logarithm of the Euler constant
  inline constexpr double
  log10e = log10e_v<double>;

  /// The \c double version of the Archimedean constant @f$ \pi = 3.1415... @f$
  inline constexpr double
  pi = pi_v<double>;

  /// The \c double version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr double
  invpi = invpi_v<double>;

  /// The \c double version of the reciprocal square root of Archimedes'
  /// constant @f$ 1/\sqrt{\pi} @f$
  inline constexpr double
  invsqrtpi = invsqrtpi_v<double>;

  /// The \c double version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr double
  ln2 = ln2_v<double>;

  /// The \c double version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr double
  ln10 = ln10_v<double>;

  /// The \c double version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr double
  sqrt2 = sqrt2_v<double>;

  /// The \c double version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr double
  sqrt3 = sqrt3_v<double>;

  /// The \c double version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr double
  invsqrt3 = invsqrt3_v<double>;

  /// The \c double version of the radians per degree conversion factor
  /// @f$ \pi / 180 @f$
  inline constexpr double
  radian = radian_v<double>;

  /// The \c double version of the Euler-Mascheroni constant @f$ \gamma_E @f$
  inline constexpr double
  egamma = egamma_v<double>;

  /// The \c double version of the golden ratio @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr double
  phi = phi_v<double>;

  /// The \c double version of Catalan's constant
  /// @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  inline constexpr double
  catalan = catalan_v<double>;

  /// The \c double version of Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  inline constexpr double
  apery = apery_v<double>;

  /// The \c double version of Glaisher's constant
  /// @f$ A = e^{\frac{1}{12} - \zeta'(-1)} @f$
  inline constexpr double
  glaisher = glaisher_v<double>;

  // long double "specializations"

  /// The \c long double version of the Euler constant @f$ e = 2.71828... @f$
  inline constexpr long double
  el = e_v<long double>;

  /// The \c long double version of the base-2 logarithm of the Euler constant
  inline constexpr long double
  log2el = log2e_v<long double>;

  /// The \c long double version of the base-10 logarithm of the Euler constant
  inline constexpr long double
  log10el = log10e_v<long double>;

  /// The \c long double version of the Archimedean constant
  /// @f$ \pi = 3.1415... @f$
  inline constexpr long double
  pil = pi_v<long double>;

  /// The \c long double version of the reciprocal of Archimedes' constant
  /// @f$ 1/\pi @f$
  inline constexpr long double
  invpil = invpi_v<long double>;

  /// The \c long double version of the reciprocal square root of Archimedes'
  /// constant @f$ 1/\sqrt{\pi} @f$
  inline constexpr long double
  invsqrtpil = invsqrtpi_v<long double>;

  /// The \c long double version of the Napierian logarithm of 2 @f$ ln(2) @f$
  inline constexpr long double
  ln2l = ln2_v<long double>;

  /// The \c long double version of the Napierian logarithm of 10 @f$ ln(10) @f$
  inline constexpr long double
  ln10l = ln10_v<long double>;

  /// The \c long double version of the square root of 2 @f$ \sqrt{2} @f$
  inline constexpr long double
  sqrt2l = sqrt2_v<long double>;

  /// The \c long double version of the square root of 3 @f$ \sqrt{3} @f$
  inline constexpr long double
  sqrt3l = sqrt3_v<long double>;

  /// The \c long double version of the reciprocal square root of 3
  /// @f$ 1 / \sqrt{3} @f$
  inline constexpr long double
  invsqrt3l = invsqrt3_v<long double>;

  /// The \c long double version of the radians per degree conversion factor
  /// @f$ \pi / 180 @f$
  inline constexpr long double
  radianl = radian_v<long double>;

  /// The \c long double version of the Euler-Mascheroni constant
  /// @f$ \gamma_E @f$
  inline constexpr long double
  egammal = egamma_v<long double>;

  /// The \c long double version of the golden ratio
  /// @f$ \phi = (\sqrt{5} + 1)/2 @f$
  inline constexpr long double
  phil = phi_v<long double>;

  /// The \c long double version of Catalan's constant
  /// @f$ G = 1 - 1/9 + 1/25 - 1/49 + 1/81 - ... @f$
  inline constexpr long double
  catalanl = catalan_v<long double>;

  /// The \c long double version of Ape'ry's constant @f$ \zeta(3) = \pi^2/6 @f$
  inline constexpr long double
  aperyl = apery_v<long double>;

  /// The \c long double version of Glaisher's constant
  /// @f$ A = e^{\frac{1}{12} - \zeta'(-1)} @f$
  inline constexpr long double
  glaisherl = glaisher_v<long double>;

} // namespace math_constants
} // namespace std
