 llvm::KnownBits sub_partial_solution_0_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen0){
   APInt autogen1 = arg0.Zero;
   APInt autogen2 = arg0.One;
   APInt autogen3 = autogen0.Zero;
   APInt autogen4 = autogen0.One;
   APInt autogen5(autogen4.getBitWidth(),1);
   APInt autogen6(autogen4.getBitWidth(),1);
  unsigned autogen7_autocast = autogen1.countr_zero();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
   APInt autogen8 = autogen3-autogen1;
   APInt autogen9 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen9.clearHighBits(autogen6.getZExtValue());
  else
    autogen9.clearHighBits(autogen6.getBitWidth());
  unsigned autogen10_autocast = autogen8.countr_zero();
  APInt autogen10(autogen8.getBitWidth(),autogen10_autocast);
   APInt autogen11 = smax(autogen9,autogen4);
   APInt autogen12 = autogen5&autogen11;
   APInt autogen13 = umax(autogen10,autogen10);
   APInt autogen14 = autogen3;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen14.clearLowBits(autogen7.getZExtValue());
  else
    autogen14.clearLowBits(autogen7.getBitWidth());
   APInt autogen15 = autogen12;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen15.clearLowBits(autogen13.getZExtValue());
  else
    autogen15.clearLowBits(autogen13.getBitWidth());
   APInt autogen16 = autogen14&autogen5;
  llvm::KnownBits autogen17;
  autogen17.Zero = autogen16;
  autogen17.One = autogen15;
  return autogen17;
}
 llvm::KnownBits sub_partial_solution_1_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen18){
   APInt autogen19 = arg0.Zero;
   APInt autogen20 = arg0.One;
   APInt autogen21 = autogen18.One;
   APInt autogen22(autogen21.getBitWidth(),0);
   APInt autogen23(autogen21.getBitWidth(),1);
   APInt autogen24(autogen21.getBitWidth(),0);
   APInt autogen25(autogen21.getBitWidth(),1);
   APInt autogen26 = autogen25.eq(autogen24);
   APInt autogen27 = autogen23&autogen19;
   APInt autogen28 = autogen22;
  autogen28.setSignBit();
   APInt autogen29 = autogen26 ? autogen23 : autogen19 ;
  unsigned autogen30_autocast = autogen28.countr_zero();
  APInt autogen30(autogen28.getBitWidth(),autogen30_autocast);
   APInt autogen31 = autogen19|autogen27;
   APInt autogen32 = autogen31&autogen21;
   APInt autogen33 = autogen31+autogen21;
   APInt autogen34;
  if (autogen22 == 0) {
    autogen34 = autogen20;
  } else {
    autogen34 = autogen20.urem(autogen22);
  }
   APInt autogen35 = autogen34&autogen29;
   APInt autogen36 = autogen33&autogen31;
   APInt autogen37;
  if (autogen30.uge(autogen30.getBitWidth())) {
    autogen37 = APInt(autogen35.getBitWidth(), 0);
  } else {
    autogen37 = autogen35.shl(autogen30.getZExtValue());
  }
   APInt autogen38 = autogen32&autogen36;
  llvm::KnownBits autogen39;
  autogen39.Zero = autogen38;
  autogen39.One = autogen37;
  return autogen39;
}
 llvm::KnownBits sub_partial_solution_2_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen40){
   APInt autogen41 = arg0.One;
   APInt autogen42 = autogen40.Zero;
   APInt autogen43 = autogen40.One;
   APInt autogen44(autogen43.getBitWidth(),1);
   APInt autogen45(autogen43.getBitWidth(),1);
   APInt autogen46 = autogen43&autogen41;
   APInt autogen47 = autogen46;
  if (autogen45.ule(autogen45.getBitWidth()))
    autogen47.setLowBits(autogen45.getZExtValue());
  else
    autogen47.setLowBits(autogen45.getBitWidth());
   APInt autogen48 = autogen41^autogen47;
   APInt autogen49 = autogen42+autogen48;
   APInt autogen50;
  if (autogen44 == 0) {
    autogen50 = autogen44;
  } else {
    autogen50 = autogen44.srem(autogen44);
  }
   APInt autogen51 = autogen49&autogen46;
  llvm::KnownBits autogen52;
  autogen52.Zero = autogen51;
  autogen52.One = autogen50;
  return autogen52;
}
 llvm::KnownBits sub_partial_solution_3_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen53){
   APInt autogen54 = arg0.One;
   APInt autogen55 = autogen53.Zero;
   APInt autogen56 = autogen53.One;
   APInt autogen57(autogen56.getBitWidth(),1);
   APInt autogen58 = autogen55+autogen57;
   APInt autogen59 = umin(autogen56,autogen58);
   APInt autogen60 = autogen58&autogen56;
   APInt autogen61 = autogen60&autogen54;
   APInt autogen62 = autogen61;
  autogen62.clearSignBit();
   APInt autogen63;
  if (autogen59 == 0) {
    autogen63 = autogen59;
  } else {
    autogen63 = autogen59.urem(autogen59);
  }
   APInt autogen64 = autogen62|autogen61;
  llvm::KnownBits autogen65;
  autogen65.Zero = autogen64;
  autogen65.One = autogen63;
  return autogen65;
}
 llvm::KnownBits sub_partial_solution_4_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen66){
   APInt autogen67 = arg0.Zero;
   APInt autogen68 = arg0.One;
   APInt autogen69 = autogen66.One;
   APInt autogen70(autogen69.getBitWidth(),0);
   APInt autogen71(autogen69.getBitWidth(),1);
   APInt autogen72 = APInt::getAllOnes(autogen69.getBitWidth());
   APInt autogen73 = autogen71+autogen68;
   APInt autogen74 = smin(autogen72,autogen71);
   APInt autogen75 = autogen69&autogen73;
   APInt autogen76 = smax(autogen72,autogen70);
   APInt autogen77 = umin(autogen67,autogen74);
   APInt autogen78 = autogen75&autogen77;
   APInt autogen79 = autogen76^autogen76;
  llvm::KnownBits autogen80;
  autogen80.Zero = autogen79;
  autogen80.One = autogen78;
  return autogen80;
}
 llvm::KnownBits sub_partial_solution_5_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen81){
   APInt autogen82 = arg0.Zero;
   APInt autogen83 = arg0.One;
   APInt autogen84 = autogen81.Zero;
   APInt autogen85 = autogen81.One;
   APInt autogen86(autogen85.getBitWidth(),0);
   APInt autogen87(autogen85.getBitWidth(),1);
   APInt autogen88 = autogen82&autogen85;
   APInt autogen89 = autogen84&autogen83;
   APInt autogen90;
  if (autogen87.uge(autogen87.getBitWidth())) {
    autogen90 = APInt(autogen89.getBitWidth(), 0);
  } else {
    autogen90 = autogen89.shl(autogen87.getZExtValue());
  }
   APInt autogen91 = autogen86;
  autogen91.setSignBit();
   APInt autogen92 = autogen88&autogen89;
   APInt autogen93 = autogen88&autogen90;
   APInt autogen94;
  if (autogen91 == 0) {
    autogen94 = autogen92;
  } else {
    autogen94 = autogen92.srem(autogen91);
  }
  llvm::KnownBits autogen95;
  autogen95.Zero = autogen94;
  autogen95.One = autogen93;
  return autogen95;
}
 llvm::KnownBits sub_partial_solution_6_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen96){
   APInt autogen97 = arg0.One;
   APInt autogen98 = autogen96.Zero;
   APInt autogen99 = autogen96.One;
  unsigned autogen100_autocast = autogen99.getBitWidth();
  APInt autogen100(autogen99.getBitWidth(),autogen100_autocast);
   APInt autogen101 = autogen99&autogen98;
  unsigned autogen102_autocast = autogen98.countr_one();
  APInt autogen102(autogen98.getBitWidth(),autogen102_autocast);
   APInt autogen103 = autogen99;
  autogen103.clearSignBit();
   APInt autogen104 = autogen100-autogen102;
   APInt autogen105 = autogen97;
  if (autogen104.ule(autogen104.getBitWidth()))
    autogen105.clearHighBits(autogen104.getZExtValue());
  else
    autogen105.clearHighBits(autogen104.getBitWidth());
   APInt autogen106 = autogen103*autogen101;
  llvm::KnownBits autogen107;
  autogen107.Zero = autogen106;
  autogen107.One = autogen105;
  return autogen107;
}
 llvm::KnownBits sub_partial_solution_7_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen108){
   APInt autogen109 = arg0.Zero;
   APInt autogen110 = autogen108.Zero;
   APInt autogen111 = autogen108.One;
   APInt autogen112(autogen111.getBitWidth(),0);
   APInt autogen113(autogen111.getBitWidth(),1);
  unsigned autogen114_autocast = autogen111.getBitWidth();
  APInt autogen114(autogen111.getBitWidth(),autogen114_autocast);
  unsigned autogen115_autocast = autogen110.countr_one();
  APInt autogen115(autogen110.getBitWidth(),autogen115_autocast);
   APInt autogen116 = autogen109|autogen113;
   APInt autogen117 = autogen114-autogen115;
   APInt autogen118;
  if (autogen114.uge(autogen114.getBitWidth()) && autogen112.isSignBitSet()) {
    autogen118 = APInt(autogen112.getBitWidth(), -1);
  } else if (autogen114.uge(autogen114.getBitWidth()) && autogen112.isSignBitClear()) {
    autogen118 = APInt(autogen112.getBitWidth(), 0);
  } else {
    autogen118 = autogen112.ashr(autogen114.getZExtValue());
  }
   APInt autogen119;
  if (autogen118.isMinSignedValue() && autogen116 == -1) {
    autogen119 = APInt::getSignedMinValue(autogen118.getBitWidth());
  } else if (autogen116 == 0 && autogen118.isNonNegative()) {
    autogen119 = APInt(autogen118.getBitWidth(), -1);
  } else if (autogen116 == 0 && autogen118.isNegative()) {
    autogen119 = APInt(autogen118.getBitWidth(), 1);
  } else {
    autogen119 = autogen118.sdiv(autogen116);
  }
   APInt autogen120 = autogen109;
  if (autogen117.ule(autogen117.getBitWidth()))
    autogen120.clearHighBits(autogen117.getZExtValue());
  else
    autogen120.clearHighBits(autogen117.getBitWidth());
  llvm::KnownBits autogen121;
  autogen121.Zero = autogen120;
  autogen121.One = autogen119;
  return autogen121;
}
 llvm::KnownBits sub_partial_solution_8_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen122){
   APInt autogen123 = arg0.Zero;
   APInt autogen124 = arg0.One;
   APInt autogen125 = autogen122.Zero;
   APInt autogen126 = autogen122.One;
   APInt autogen127(autogen126.getBitWidth(),1);
   APInt autogen128 = APInt::getAllOnes(autogen126.getBitWidth());
   APInt autogen129 = autogen124+autogen127;
   APInt autogen130;
  if (autogen126 == 0) {
    autogen130 = autogen127;
  } else {
    autogen130 = autogen127.urem(autogen126);
  }
   APInt autogen131 = autogen130+autogen128;
   APInt autogen132 = autogen125&autogen123;
   APInt autogen133 = smin(autogen130,autogen128);
   APInt autogen134 = autogen129&autogen132;
   APInt autogen135 = autogen130&autogen131;
   APInt autogen136 = autogen133&autogen134;
  llvm::KnownBits autogen137;
  autogen137.Zero = autogen136;
  autogen137.One = autogen135;
  return autogen137;
}
 llvm::KnownBits sub_partial_solution_9_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen138){
   APInt autogen139 = arg0.Zero;
   APInt autogen140 = arg0.One;
   APInt autogen141 = autogen138.Zero;
   APInt autogen142 = autogen138.One;
   APInt autogen143(autogen142.getBitWidth(),1);
  unsigned autogen144_autocast = autogen142.getBitWidth();
  APInt autogen144(autogen142.getBitWidth(),autogen144_autocast);
   APInt autogen145 = autogen143;
  autogen145.clearSignBit();
   APInt autogen146 = autogen140;
  if (autogen144.ule(autogen144.getBitWidth()))
    autogen146.setHighBits(autogen144.getZExtValue());
  else
    autogen146.setHighBits(autogen144.getBitWidth());
   APInt autogen147 = autogen139&autogen142;
   APInt autogen148 = autogen145+autogen141;
   APInt autogen149 = umin(autogen146,autogen147);
   APInt autogen150 = autogen149&autogen148;
   APInt autogen151 = autogen141&autogen150;
  llvm::KnownBits autogen152;
  autogen152.Zero = autogen151;
  autogen152.One = autogen150;
  return autogen152;
}
 llvm::KnownBits sub_partial_solution_10_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen153){
   APInt autogen154 = arg0.Zero;
   APInt autogen155 = arg0.One;
   APInt autogen156 = autogen153.One;
   APInt autogen157(autogen156.getBitWidth(),1);
   APInt autogen158 = autogen157&autogen155;
   APInt autogen159 = autogen154&autogen156;
   APInt autogen160 = autogen158+autogen157;
   APInt autogen161 = autogen155;
  autogen161.clearSignBit();
   APInt autogen162 = autogen160&autogen156;
   APInt autogen163 = autogen161&autogen159;
   APInt autogen164 = autogen162&autogen161;
  llvm::KnownBits autogen165;
  autogen165.Zero = autogen164;
  autogen165.One = autogen163;
  return autogen165;
}
 llvm::KnownBits sub_partial_solution_11_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen166){
   APInt autogen167 = arg0.Zero;
   APInt autogen168 = arg0.One;
   APInt autogen169 = autogen166.Zero;
   APInt autogen170 = autogen166.One;
   APInt autogen171(autogen170.getBitWidth(),1);
   APInt autogen172 = APInt::getAllOnes(autogen170.getBitWidth());
  unsigned autogen173_autocast = autogen170.getBitWidth();
  APInt autogen173(autogen170.getBitWidth(),autogen173_autocast);
   APInt autogen174 = autogen167+autogen170;
   APInt autogen175 = autogen168;
  if (autogen173.ule(autogen173.getBitWidth()))
    autogen175.setHighBits(autogen173.getZExtValue());
  else
    autogen175.setHighBits(autogen173.getBitWidth());
   APInt autogen176;
  if (autogen174.isMinSignedValue() && autogen175 == -1) {
    autogen176 = APInt::getSignedMinValue(autogen174.getBitWidth());
  } else if (autogen175 == 0 && autogen174.isNonNegative()) {
    autogen176 = APInt(autogen174.getBitWidth(), -1);
  } else if (autogen175 == 0 && autogen174.isNegative()) {
    autogen176 = APInt(autogen174.getBitWidth(), 1);
  } else {
    autogen176 = autogen174.sdiv(autogen175);
  }
   APInt autogen177 = smax(autogen176,autogen171);
   APInt autogen178 = autogen174&autogen169;
   APInt autogen179 = autogen168&autogen178;
   APInt autogen180 = autogen176&autogen171;
   APInt autogen181;
  if (autogen172 == 0) {
    autogen181 = autogen180;
  } else {
    autogen181 = autogen180.srem(autogen172);
  }
   APInt autogen182 = autogen177&autogen179;
  llvm::KnownBits autogen183;
  autogen183.Zero = autogen182;
  autogen183.One = autogen181;
  return autogen183;
}
 llvm::KnownBits sub_partial_solution_12_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen184){
   APInt autogen185 = arg0.One;
   APInt autogen186 = autogen184.Zero;
   APInt autogen187 = autogen184.One;
   APInt autogen188(autogen187.getBitWidth(),1);
   APInt autogen189 = APInt::getAllOnes(autogen187.getBitWidth());
   APInt autogen190 = autogen185;
  autogen190.setSignBit();
   APInt autogen191 = autogen186+autogen189;
   APInt autogen192;
  if (autogen191 == 0) {
    autogen192 = autogen191;
  } else {
    autogen192 = autogen191.srem(autogen191);
  }
   APInt autogen193 = autogen192&autogen188;
   APInt autogen194 = autogen193&autogen190;
   APInt autogen195 = autogen187&autogen185;
   APInt autogen196 = autogen185&autogen194;
  llvm::KnownBits autogen197;
  autogen197.Zero = autogen196;
  autogen197.One = autogen195;
  return autogen197;
}
 APInt sub_partial_solution_12_cond( llvm::KnownBits &autogen198, llvm::KnownBits &autogen199){
   APInt autogen200 = autogen198.Zero;
   APInt autogen201 = autogen199.One;
   APInt autogen202 = APInt::getAllOnes(autogen201.getBitWidth());
   APInt autogen203 = autogen200*autogen202;
   APInt autogen204 = autogen203.eq(autogen201);
  return autogen204;
}
 llvm::KnownBits sub_partial_solution_13_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen205){
   APInt autogen206 = arg0.One;
   APInt autogen207 = autogen205.Zero;
   APInt autogen208 = autogen205.One;
   APInt autogen209(autogen208.getBitWidth(),0);
   APInt autogen210 = APInt::getAllOnes(autogen208.getBitWidth());
   APInt autogen211(autogen208.getBitWidth(),1);
  unsigned autogen212_autocast = autogen208.getBitWidth();
  APInt autogen212(autogen208.getBitWidth(),autogen212_autocast);
   APInt autogen213 = umin(autogen211,autogen212);
   APInt autogen214;
  if (autogen212.uge(autogen212.getBitWidth())) {
    autogen214 = APInt(autogen206.getBitWidth(), 0);
  } else {
    autogen214 = autogen206.lshr(autogen212.getZExtValue());
  }
  unsigned autogen215_autocast = autogen214.countl_one();
  APInt autogen215(autogen214.getBitWidth(),autogen215_autocast);
   APInt autogen216 = autogen214;
  if (autogen211.ule(autogen211.getBitWidth()))
    autogen216.clearLowBits(autogen211.getZExtValue());
  else
    autogen216.clearLowBits(autogen211.getBitWidth());
   APInt autogen217 = autogen209;
  if (autogen215.ule(autogen215.getBitWidth()))
    autogen217.setHighBits(autogen215.getZExtValue());
  else
    autogen217.setHighBits(autogen215.getBitWidth());
   APInt autogen218;
  if (autogen211.uge(autogen211.getBitWidth()) && autogen214.isSignBitSet()) {
    autogen218 = APInt(autogen214.getBitWidth(), -1);
  } else if (autogen211.uge(autogen211.getBitWidth()) && autogen214.isSignBitClear()) {
    autogen218 = APInt(autogen214.getBitWidth(), 0);
  } else {
    autogen218 = autogen214.ashr(autogen211.getZExtValue());
  }
   APInt autogen219 = umin(autogen213,autogen211);
   APInt autogen220 = autogen210.ule(autogen206);
   APInt autogen221 = autogen211+autogen211;
   APInt autogen222 = autogen217-autogen216;
   APInt autogen223 = autogen219-autogen212;
   APInt autogen224 = autogen221.eq(autogen223);
   APInt autogen225 = autogen224 ? autogen223 : autogen213 ;
   APInt autogen226 = autogen220 ? autogen207 : autogen222 ;
   APInt autogen227;
  if (autogen225.uge(autogen225.getBitWidth())) {
    autogen227 = APInt(autogen218.getBitWidth(), 0);
  } else {
    autogen227 = autogen218.lshr(autogen225.getZExtValue());
  }
  llvm::KnownBits autogen228;
  autogen228.Zero = autogen227;
  autogen228.One = autogen226;
  return autogen228;
}
 llvm::KnownBits sub_partial_solution_14_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen229){
   APInt autogen230 = arg0.One;
   APInt autogen231 = autogen229.Zero;
   APInt autogen232 = autogen229.One;
   APInt autogen233(autogen232.getBitWidth(),0);
   APInt autogen234 = APInt::getAllOnes(autogen232.getBitWidth());
   APInt autogen235 = autogen230.eq(autogen234);
   APInt autogen236;
  if (autogen233 == 0) {
    autogen236 = autogen233;
  } else {
    autogen236 = autogen233.urem(autogen233);
  }
   APInt autogen237 = autogen231+autogen236;
   APInt autogen238 = autogen237&autogen236;
   APInt autogen239 = autogen235 ? autogen232 : autogen238 ;
  llvm::KnownBits autogen240;
  autogen240.Zero = autogen239;
  autogen240.One = autogen238;
  return autogen240;
}
 llvm::KnownBits sub_partial_solution_15_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen241){
   APInt autogen242 = arg0.Zero;
   APInt autogen243 = autogen241.Zero;
   APInt autogen244 = autogen241.One;
   APInt autogen245(autogen244.getBitWidth(),1);
  unsigned autogen246_autocast = autogen244.getBitWidth();
  APInt autogen246(autogen244.getBitWidth(),autogen246_autocast);
   APInt autogen247;
  if (autogen246.uge(autogen246.getBitWidth())) {
    autogen247 = APInt(autogen243.getBitWidth(), 0);
  } else {
    autogen247 = autogen243.lshr(autogen246.getZExtValue());
  }
   APInt autogen248 = umax(autogen245,autogen246);
   APInt autogen249 = autogen243;
  autogen249.clearSignBit();
   APInt autogen250 = umax(autogen245,autogen246);
   APInt autogen251 = autogen248-autogen250;
   APInt autogen252 = autogen247;
  if (autogen251.ule(autogen251.getBitWidth()))
    autogen252.setLowBits(autogen251.getZExtValue());
  else
    autogen252.setLowBits(autogen251.getBitWidth());
   APInt autogen253 = autogen242&autogen249;
  llvm::KnownBits autogen254;
  autogen254.Zero = autogen253;
  autogen254.One = autogen252;
  return autogen254;
}
 APInt sub_partial_solution_15_cond( llvm::KnownBits &autogen255, llvm::KnownBits &autogen256){
   APInt autogen257 = autogen255.One;
   APInt autogen258 = autogen256.Zero;
   APInt autogen259 = autogen256.One;
   APInt autogen260(autogen259.getBitWidth(),0);
   APInt autogen261 = autogen258+autogen257;
   APInt autogen262 = autogen260.eq(autogen261);
  return autogen262;
}
 llvm::KnownBits sub_partial_solution_0( llvm::KnownBits &autogen263, llvm::KnownBits &autogen264){
   llvm::KnownBits autogen265 = sub_partial_solution_0_body(autogen263,autogen264);
  return autogen265;
}
 llvm::KnownBits sub_partial_solution_1( llvm::KnownBits &autogen266, llvm::KnownBits &autogen267){
   llvm::KnownBits autogen268 = sub_partial_solution_1_body(autogen266,autogen267);
  return autogen268;
}
 llvm::KnownBits sub_partial_solution_2( llvm::KnownBits &autogen269, llvm::KnownBits &autogen270){
   llvm::KnownBits autogen271 = sub_partial_solution_2_body(autogen269,autogen270);
  return autogen271;
}
 llvm::KnownBits sub_partial_solution_3( llvm::KnownBits &autogen272, llvm::KnownBits &autogen273){
   llvm::KnownBits autogen274 = sub_partial_solution_3_body(autogen272,autogen273);
  return autogen274;
}
 llvm::KnownBits sub_partial_solution_4( llvm::KnownBits &autogen275, llvm::KnownBits &autogen276){
   llvm::KnownBits autogen277 = sub_partial_solution_4_body(autogen275,autogen276);
  return autogen277;
}
 llvm::KnownBits sub_partial_solution_5( llvm::KnownBits &autogen278, llvm::KnownBits &autogen279){
   llvm::KnownBits autogen280 = sub_partial_solution_5_body(autogen278,autogen279);
  return autogen280;
}
 llvm::KnownBits sub_partial_solution_6( llvm::KnownBits &autogen281, llvm::KnownBits &autogen282){
   llvm::KnownBits autogen283 = sub_partial_solution_6_body(autogen281,autogen282);
  return autogen283;
}
 llvm::KnownBits sub_partial_solution_7( llvm::KnownBits &autogen284, llvm::KnownBits &autogen285){
   llvm::KnownBits autogen286 = sub_partial_solution_7_body(autogen284,autogen285);
  return autogen286;
}
 llvm::KnownBits sub_partial_solution_8( llvm::KnownBits &autogen287, llvm::KnownBits &autogen288){
   llvm::KnownBits autogen289 = sub_partial_solution_8_body(autogen287,autogen288);
  return autogen289;
}
 llvm::KnownBits sub_partial_solution_9( llvm::KnownBits &autogen290, llvm::KnownBits &autogen291){
   llvm::KnownBits autogen292 = sub_partial_solution_9_body(autogen290,autogen291);
  return autogen292;
}
 llvm::KnownBits sub_partial_solution_10( llvm::KnownBits &autogen293, llvm::KnownBits &autogen294){
   llvm::KnownBits autogen295 = sub_partial_solution_10_body(autogen293,autogen294);
  return autogen295;
}
 llvm::KnownBits sub_partial_solution_11( llvm::KnownBits &autogen296, llvm::KnownBits &autogen297){
   llvm::KnownBits autogen298 = sub_partial_solution_11_body(autogen296,autogen297);
  return autogen298;
}
 llvm::KnownBits sub_partial_solution_12( llvm::KnownBits &autogen299, llvm::KnownBits &autogen300){
   llvm::KnownBits autogen301 = getTop(autogen299);
   APInt autogen302 = autogen301.Zero;
   APInt autogen303 = autogen301.One;
   llvm::KnownBits autogen304 = sub_partial_solution_12_body(autogen299,autogen300);
   APInt autogen305 = autogen304.Zero;
   APInt autogen306 = autogen304.One;
   APInt autogen307 = sub_partial_solution_12_cond(autogen299,autogen300);
   APInt autogen308 = autogen307 ? autogen305 : autogen302 ;
   APInt autogen309 = autogen307 ? autogen306 : autogen303 ;
  llvm::KnownBits autogen310;
  autogen310.Zero = autogen308;
  autogen310.One = autogen309;
  return autogen310;
}
 llvm::KnownBits sub_partial_solution_13( llvm::KnownBits &autogen311, llvm::KnownBits &autogen312){
   llvm::KnownBits autogen313 = sub_partial_solution_13_body(autogen311,autogen312);
  return autogen313;
}
 llvm::KnownBits sub_partial_solution_14( llvm::KnownBits &autogen314, llvm::KnownBits &autogen315){
   llvm::KnownBits autogen316 = sub_partial_solution_14_body(autogen314,autogen315);
  return autogen316;
}
 llvm::KnownBits sub_partial_solution_15( llvm::KnownBits &autogen317, llvm::KnownBits &autogen318){
   llvm::KnownBits autogen319 = getTop(autogen317);
   APInt autogen320 = autogen319.Zero;
   APInt autogen321 = autogen319.One;
   llvm::KnownBits autogen322 = sub_partial_solution_15_body(autogen317,autogen318);
   APInt autogen323 = autogen322.Zero;
   APInt autogen324 = autogen322.One;
   APInt autogen325 = sub_partial_solution_15_cond(autogen317,autogen318);
   APInt autogen326 = autogen325 ? autogen323 : autogen320 ;
   APInt autogen327 = autogen325 ? autogen324 : autogen321 ;
  llvm::KnownBits autogen328;
  autogen328.Zero = autogen326;
  autogen328.One = autogen327;
  return autogen328;
}
 llvm::KnownBits sub_solution( llvm::KnownBits &autogen329, llvm::KnownBits &autogen330){
   llvm::KnownBits autogen331 = sub_partial_solution_0(autogen329,autogen330);
   llvm::KnownBits autogen332 = sub_partial_solution_1(autogen329,autogen330);
   llvm::KnownBits autogen333 = sub_partial_solution_2(autogen329,autogen330);
   llvm::KnownBits autogen334 = sub_partial_solution_3(autogen329,autogen330);
   llvm::KnownBits autogen335 = sub_partial_solution_4(autogen329,autogen330);
   llvm::KnownBits autogen336 = sub_partial_solution_5(autogen329,autogen330);
   llvm::KnownBits autogen337 = sub_partial_solution_6(autogen329,autogen330);
   llvm::KnownBits autogen338 = sub_partial_solution_7(autogen329,autogen330);
   llvm::KnownBits autogen339 = sub_partial_solution_8(autogen329,autogen330);
   llvm::KnownBits autogen340 = sub_partial_solution_9(autogen329,autogen330);
   llvm::KnownBits autogen341 = sub_partial_solution_10(autogen329,autogen330);
   llvm::KnownBits autogen342 = sub_partial_solution_11(autogen329,autogen330);
   llvm::KnownBits autogen343 = sub_partial_solution_12(autogen329,autogen330);
   llvm::KnownBits autogen344 = sub_partial_solution_13(autogen329,autogen330);
   llvm::KnownBits autogen345 = sub_partial_solution_14(autogen329,autogen330);
   llvm::KnownBits autogen346 = sub_partial_solution_15(autogen329,autogen330);
   llvm::KnownBits autogen347 = meet(autogen331,autogen332);
   llvm::KnownBits autogen348 = meet(autogen347,autogen333);
   llvm::KnownBits autogen349 = meet(autogen348,autogen334);
   llvm::KnownBits autogen350 = meet(autogen349,autogen335);
   llvm::KnownBits autogen351 = meet(autogen350,autogen336);
   llvm::KnownBits autogen352 = meet(autogen351,autogen337);
   llvm::KnownBits autogen353 = meet(autogen352,autogen338);
   llvm::KnownBits autogen354 = meet(autogen353,autogen339);
   llvm::KnownBits autogen355 = meet(autogen354,autogen340);
   llvm::KnownBits autogen356 = meet(autogen355,autogen341);
   llvm::KnownBits autogen357 = meet(autogen356,autogen342);
   llvm::KnownBits autogen358 = meet(autogen357,autogen343);
   llvm::KnownBits autogen359 = meet(autogen358,autogen344);
   llvm::KnownBits autogen360 = meet(autogen359,autogen345);
   llvm::KnownBits autogen361 = meet(autogen360,autogen346);
  return autogen361;
}