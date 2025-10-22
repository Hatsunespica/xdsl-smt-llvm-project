 llvm::KnownBits add_partial_solution_0_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen0){
   APInt autogen1 = arg0.Zero;
   APInt autogen2 = arg0.One;
   APInt autogen3 = autogen0.Zero;
   APInt autogen4 = autogen0.One;
   APInt autogen5(autogen4.getBitWidth(),1);
   APInt autogen6(autogen4.getBitWidth(),1);
   APInt autogen7 = autogen2&autogen3;
   APInt autogen8 = autogen1+autogen3;
   APInt autogen9 = autogen8+autogen5;
   APInt autogen10 = autogen4&autogen1;
   APInt autogen11 = autogen4&autogen2;
   APInt autogen12 = ~autogen9;
   APInt autogen13 = autogen7^autogen10;
   APInt autogen14 = autogen6&autogen9;
   APInt autogen15 = autogen12&autogen13;
   APInt autogen16 = autogen11&autogen14;
  llvm::KnownBits autogen17;
  autogen17.Zero = autogen16;
  autogen17.One = autogen15;
  return autogen17;
}
 llvm::KnownBits add_partial_solution_1_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen18){
   APInt autogen19 = arg0.Zero;
   APInt autogen20 = arg0.One;
   APInt autogen21 = autogen18.Zero;
   APInt autogen22 = autogen18.One;
   APInt autogen23 = APInt::getAllOnes(autogen22.getBitWidth());
   APInt autogen24(autogen22.getBitWidth(),1);
   APInt autogen25 = autogen21+autogen24;
   APInt autogen26 = autogen25+autogen19;
   APInt autogen27 = autogen23+autogen24;
   APInt autogen28 = ~autogen27;
   APInt autogen29 = autogen21|autogen20;
   APInt autogen30 = autogen20^autogen26;
   APInt autogen31 = autogen29&autogen30;
   APInt autogen32 = ~autogen28;
   APInt autogen33 = autogen31&autogen19;
  llvm::KnownBits autogen34;
  autogen34.Zero = autogen33;
  autogen34.One = autogen32;
  return autogen34;
}
 llvm::KnownBits add_partial_solution_2_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen35){
   APInt autogen36 = arg0.Zero;
   APInt autogen37 = arg0.One;
   APInt autogen38 = autogen35.Zero;
   APInt autogen39 = autogen35.One;
   APInt autogen40(autogen39.getBitWidth(),1);
   APInt autogen41 = autogen37+autogen39;
   APInt autogen42 = ~autogen37;
   APInt autogen43 = autogen38|autogen40;
   APInt autogen44 = autogen43&autogen36;
   APInt autogen45 = autogen42|autogen41;
   APInt autogen46 = ~autogen43;
   APInt autogen47 = autogen45|autogen46;
   APInt autogen48 = autogen44&autogen41;
   APInt autogen49 = ~autogen47;
  llvm::KnownBits autogen50;
  autogen50.Zero = autogen49;
  autogen50.One = autogen48;
  return autogen50;
}
 llvm::KnownBits add_partial_solution_3_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen51){
   APInt autogen52 = arg0.Zero;
   APInt autogen53 = arg0.One;
   APInt autogen54 = autogen51.One;
   APInt autogen55 = autogen54|autogen54;
   APInt autogen56 = autogen53+autogen55;
   APInt autogen57 = autogen56^autogen52;
   APInt autogen58 = autogen55&autogen57;
   APInt autogen59 = autogen52&autogen58;
   APInt autogen60 = autogen58&autogen53;
   APInt autogen61 = autogen57&autogen59;
  llvm::KnownBits autogen62;
  autogen62.Zero = autogen61;
  autogen62.One = autogen60;
  return autogen62;
}
 llvm::KnownBits add_partial_solution_4_body( llvm::KnownBits &arg0, llvm::KnownBits &autogen63){
   APInt autogen64 = arg0.Zero;
   APInt autogen65 = arg0.One;
   APInt autogen66 = autogen63.Zero;
   APInt autogen67 = autogen63.One;
   APInt autogen68(autogen67.getBitWidth(),1);
   APInt autogen69 = autogen64|autogen64;
   APInt autogen70 = autogen66+autogen68;
   APInt autogen71 = autogen70+autogen69;
   APInt autogen72 = autogen71&autogen67;
   APInt autogen73 = ~autogen68;
   APInt autogen74 = autogen68&autogen73;
   APInt autogen75 = autogen72&autogen65;
  llvm::KnownBits autogen76;
  autogen76.Zero = autogen75;
  autogen76.One = autogen74;
  return autogen76;
}
 llvm::KnownBits add_partial_solution_0( llvm::KnownBits &autogen77, llvm::KnownBits &autogen78){
   llvm::KnownBits autogen79 = add_partial_solution_0_body(autogen77,autogen78);
  return autogen79;
}
 llvm::KnownBits add_partial_solution_1( llvm::KnownBits &autogen80, llvm::KnownBits &autogen81){
   llvm::KnownBits autogen82 = add_partial_solution_1_body(autogen80,autogen81);
  return autogen82;
}
 llvm::KnownBits add_partial_solution_2( llvm::KnownBits &autogen83, llvm::KnownBits &autogen84){
   llvm::KnownBits autogen85 = add_partial_solution_2_body(autogen83,autogen84);
  return autogen85;
}
 llvm::KnownBits add_partial_solution_3( llvm::KnownBits &autogen86, llvm::KnownBits &autogen87){
   llvm::KnownBits autogen88 = add_partial_solution_3_body(autogen86,autogen87);
  return autogen88;
}
 llvm::KnownBits add_partial_solution_4( llvm::KnownBits &autogen89, llvm::KnownBits &autogen90){
   llvm::KnownBits autogen91 = add_partial_solution_4_body(autogen89,autogen90);
  return autogen91;
}
 llvm::KnownBits add_solution( llvm::KnownBits &autogen92, llvm::KnownBits &autogen93){
   llvm::KnownBits autogen94 = add_partial_solution_0(autogen92,autogen93);
   llvm::KnownBits autogen95 = add_partial_solution_1(autogen92,autogen93);
   llvm::KnownBits autogen96 = add_partial_solution_2(autogen92,autogen93);
   llvm::KnownBits autogen97 = add_partial_solution_3(autogen92,autogen93);
   llvm::KnownBits autogen98 = add_partial_solution_4(autogen92,autogen93);
   llvm::KnownBits autogen99 = meet(autogen94,autogen95);
   llvm::KnownBits autogen100 = meet(autogen99,autogen96);
   llvm::KnownBits autogen101 = meet(autogen100,autogen97);
   llvm::KnownBits autogen102 = meet(autogen101,autogen98);
  return autogen102;
}