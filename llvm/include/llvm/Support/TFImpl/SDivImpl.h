extern "C" Vec<2> sdiv_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  unsigned autogen6_autocast = autogen2.getBitWidth();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen1.countl_zero();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen4^autogen2;
  unsigned autogen9_autocast = autogen8.countl_zero();
  APInt autogen9(autogen8.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen10 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen10 = autogen8.shl(autogen6.getZExtValue());
  }
  APInt autogen11;
  if (autogen3.isMinSignedValue() && autogen1 == -1) {
    autogen11 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen1 == 0 && autogen3.isNonNegative()) {
    autogen11 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen1 == 0 && autogen3.isNegative()) {
    autogen11 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen11 = autogen3.sdiv(autogen1);
  }
  APInt autogen12;
  if (autogen1.isMinSignedValue() && autogen10 == -1) {
    autogen12 = APInt::getSignedMinValue(autogen1.getBitWidth());
  } else if (autogen10 == 0 && autogen1.isNonNegative()) {
    autogen12 = APInt::getAllOnes(autogen1.getBitWidth());
  } else if (autogen10 == 0 && autogen1.isNegative()) {
    autogen12 = APInt(autogen1.getBitWidth(), 1);
  } else {
    autogen12 = autogen1.sdiv(autogen10);
  }
  APInt autogen13 = autogen11;
  autogen13.clearSignBit();
  APInt autogen14 = autogen7+autogen9;
  APInt autogen15;
  if (autogen13.isMinSignedValue() && autogen12 == -1) {
    autogen15 = APInt::getSignedMinValue(autogen13.getBitWidth());
  } else if (autogen12 == 0 && autogen13.isNonNegative()) {
    autogen15 = APInt::getAllOnes(autogen13.getBitWidth());
  } else if (autogen12 == 0 && autogen13.isNegative()) {
    autogen15 = APInt(autogen13.getBitWidth(), 1);
  } else {
    autogen15 = autogen13.sdiv(autogen12);
  }
  APInt autogen16 = autogen5;
  if (autogen14.ule(autogen14.getBitWidth()))
    autogen16.clearLowBits(autogen14.getZExtValue());
  else
    autogen16.clearLowBits(autogen14.getBitWidth());
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" int sdiv_partial_solution_0_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen6 = autogen5-autogen2;
  APInt autogen7 = umin(autogen2,autogen3);
  int autogen8 = autogen6.ult(autogen7);
  return autogen8;
}

extern "C" Vec<2> sdiv_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen1.ule(autogen2);
  APInt autogen8 = autogen4^autogen3;
  APInt autogen9 = ~autogen4;
  APInt autogen10 = ~autogen9;
  APInt autogen11 = autogen10*autogen2;
  APInt autogen12 = autogen7 ? autogen3 : autogen11 ;
  APInt autogen13 = autogen6+autogen5;
  APInt autogen14 = smin(autogen2,autogen12);
  APInt autogen15 = autogen8;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen15.setLowBits(autogen13.getZExtValue());
  else
    autogen15.setLowBits(autogen13.getBitWidth());
  unsigned autogen16_autocast = autogen12.countl_zero();
  APInt autogen16(autogen12.getBitWidth(),autogen16_autocast);
  APInt autogen17;
  if (autogen9 == 0) {
    autogen17 = APInt::getAllOnes(autogen14.getBitWidth());
  } else {
    autogen17 = autogen14.udiv(autogen9);
  }
  APInt autogen18;
  if (autogen16.uge(autogen16.getBitWidth())) {
    autogen18 = APInt(autogen15.getBitWidth(), 0);
  } else {
    autogen18 = autogen15.shl(autogen16.getZExtValue());
  }
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int sdiv_partial_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setHighBits(autogen5.getZExtValue());
  else
    autogen6.setHighBits(autogen5.getBitWidth());
  APInt autogen7;
  if (autogen6 == 0) {
    autogen7 = APInt::getAllOnes(autogen2.getBitWidth());
  } else {
    autogen7 = autogen2.udiv(autogen6);
  }
  APInt autogen8;
  if (autogen3.isMinSignedValue() && autogen4 == -1) {
    autogen8 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen4 == 0 && autogen3.isNonNegative()) {
    autogen8 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen4 == 0 && autogen3.isNegative()) {
    autogen8 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen8 = autogen3.sdiv(autogen4);
  }
  int autogen9 = autogen8.eq(autogen7);
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6 = ~autogen1;
  APInt autogen7 = umax(autogen5,autogen4);
  APInt autogen8;
  if (autogen2 == 0) {
    autogen8 = APInt::getAllOnes(autogen6.getBitWidth());
  } else {
    autogen8 = autogen6.udiv(autogen2);
  }
  APInt autogen9;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen9 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen9 = autogen2.shl(autogen7.getZExtValue());
  }
  unsigned autogen10_autocast = autogen8.countl_zero();
  APInt autogen10(autogen8.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen9;
  autogen11.setSignBit();
  APInt autogen12 = autogen9*autogen6;
  APInt autogen13 = autogen11;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen13.setHighBits(autogen10.getZExtValue());
  else
    autogen13.setHighBits(autogen10.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" int sdiv_partial_solution_2_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  APInt autogen7 = autogen4;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.clearHighBits(autogen6.getZExtValue());
  else
    autogen7.clearHighBits(autogen6.getBitWidth());
  int autogen8 = autogen5.ult(autogen6);
  APInt autogen9 = autogen8 ? autogen2 : autogen7 ;
  int autogen10 = autogen7.eq(autogen9);
  return autogen10;
}

extern "C" Vec<2> sdiv_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.getBitWidth();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.clearHighBits(autogen6.getZExtValue());
  else
    autogen7.clearHighBits(autogen6.getBitWidth());
  unsigned autogen8_autocast = autogen7.countr_one();
  APInt autogen8(autogen7.getBitWidth(),autogen8_autocast);
  APInt autogen9;
  if (autogen3.isMinSignedValue() && autogen3 == -1) {
    autogen9 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen3 == 0 && autogen3.isNonNegative()) {
    autogen9 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen3 == 0 && autogen3.isNegative()) {
    autogen9 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen9 = autogen3.sdiv(autogen3);
  }
  APInt autogen10 = umax(autogen1,autogen9);
  APInt autogen11 = autogen10;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen11.setLowBits(autogen8.getZExtValue());
  else
    autogen11.setLowBits(autogen8.getBitWidth());
  APInt autogen12 = autogen4+autogen3;
  unsigned autogen13_autocast = autogen10.countr_one();
  APInt autogen13(autogen10.getBitWidth(),autogen13_autocast);
  APInt autogen14;
  if (autogen13.uge(autogen13.getBitWidth())) {
    autogen14 = APInt(autogen11.getBitWidth(), 0);
  } else {
    autogen14 = autogen11.shl(autogen13.getZExtValue());
  }
  APInt autogen15;
  if (autogen4 == 0) {
    autogen15 = APInt::getAllOnes(autogen7.getBitWidth());
  } else {
    autogen15 = autogen7.udiv(autogen4);
  }
  APInt autogen16;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen16 = APInt(autogen15.getBitWidth(), 0);
  } else {
    autogen16 = autogen15.shl(autogen5.getZExtValue());
  }
  APInt autogen17;
  if (autogen14 == 0) {
    autogen17 = APInt::getAllOnes(autogen12.getBitWidth());
  } else {
    autogen17 = autogen12.udiv(autogen14);
  }
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" Vec<2> sdiv_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),0);
  unsigned autogen8_autocast = autogen3.getBitWidth();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  int autogen9 = autogen4.ule(autogen3);
  APInt autogen10 = autogen8-autogen8;
  APInt autogen11 = autogen6+autogen6;
  APInt autogen12 = autogen1+autogen5;
  APInt autogen13 = autogen9 ? autogen7 : autogen10 ;
  APInt autogen14 = autogen12;
  autogen14.setSignBit();
  APInt autogen15 = ~autogen11;
  unsigned autogen16_autocast = autogen14.countl_zero();
  APInt autogen16(autogen14.getBitWidth(),autogen16_autocast);
  unsigned autogen17_autocast = autogen2.countl_zero();
  APInt autogen17(autogen2.getBitWidth(),autogen17_autocast);
  APInt autogen18 = autogen15;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen18.setLowBits(autogen10.getZExtValue());
  else
    autogen18.setLowBits(autogen10.getBitWidth());
  APInt autogen19 = autogen13-autogen16;
  APInt autogen20 = autogen19+autogen17;
  APInt autogen21;
  if (autogen18 == 0) {
    autogen21 = autogen14;
  } else {
    autogen21 = autogen14.srem(autogen18);
  }
  APInt autogen22 = autogen11;
  if (autogen20.ule(autogen20.getBitWidth()))
    autogen22.clearLowBits(autogen20.getZExtValue());
  else
    autogen22.clearLowBits(autogen20.getBitWidth());
  Vec<2> autogen23 = Vec<2>{autogen22,autogen21};
  return autogen23;
}

extern "C" int sdiv_partial_solution_4_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6 = autogen5-autogen4;
  int autogen7 = autogen5.ule(autogen5);
  int autogen8 = autogen6.eq(autogen2);
  int autogen9 = autogen8&autogen7;
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  APInt autogen8;
  if (autogen4 == 0) {
    autogen8 = autogen6;
  } else {
    autogen8 = autogen6.srem(autogen4);
  }
  APInt autogen9;
  if (autogen5 == 0) {
    autogen9 = autogen1;
  } else {
    autogen9 = autogen1.srem(autogen5);
  }
  unsigned autogen10_autocast = autogen3.countl_zero();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  APInt autogen11 = umax(autogen10,autogen7);
  APInt autogen12 = umax(autogen11,autogen10);
  APInt autogen13 = autogen8;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.setLowBits(autogen12.getZExtValue());
  else
    autogen13.setLowBits(autogen12.getBitWidth());
  APInt autogen14 = ~autogen3;
  APInt autogen15 = umin(autogen9,autogen2);
  APInt autogen16;
  if (autogen14 == 0) {
    autogen16 = APInt::getAllOnes(autogen15.getBitWidth());
  } else {
    autogen16 = autogen15.udiv(autogen14);
  }
  APInt autogen17 = autogen13;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen17.clearLowBits(autogen11.getZExtValue());
  else
    autogen17.clearLowBits(autogen11.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int sdiv_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen1[1];
  APInt autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  int autogen6 = autogen5.ule(autogen3);
  int autogen7 = autogen2.ult(autogen4);
  int autogen8 = autogen6&autogen7;
  return autogen8;
}

extern "C" Vec<2> sdiv_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5(autogen2.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.getBitWidth();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen5.eq(autogen6);
  unsigned autogen8_autocast = autogen1.countr_zero();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umax(autogen4,autogen1);
  APInt autogen10 = umax(autogen5,autogen6);
  APInt autogen11 = autogen5-autogen8;
  APInt autogen12 = autogen7 ? autogen11 : autogen10 ;
  APInt autogen13 = umin(autogen9,autogen2);
  APInt autogen14 = autogen2;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen14.setHighBits(autogen12.getZExtValue());
  else
    autogen14.setHighBits(autogen12.getBitWidth());
  APInt autogen15;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen3.isSignBitSet()) {
    autogen15 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen3.isSignBitClear()) {
    autogen15 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen15 = autogen3.ashr(autogen6.getZExtValue());
  }
  unsigned autogen16_autocast = autogen13.countl_zero();
  APInt autogen16(autogen13.getBitWidth(),autogen16_autocast);
  APInt autogen17;
  if (autogen11.uge(autogen11.getBitWidth()) && autogen15.isSignBitSet()) {
    autogen17 = APInt::getAllOnes(autogen15.getBitWidth());
  } else if (autogen11.uge(autogen11.getBitWidth()) && autogen15.isSignBitClear()) {
    autogen17 = APInt(autogen15.getBitWidth(), 0);
  } else {
    autogen17 = autogen15.ashr(autogen11.getZExtValue());
  }
  APInt autogen18 = umin(autogen17,autogen1);
  APInt autogen19 = autogen14;
  if (autogen16.ule(autogen16.getBitWidth()))
    autogen19.clearLowBits(autogen16.getZExtValue());
  else
    autogen19.clearLowBits(autogen16.getBitWidth());
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" int sdiv_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = smin(autogen5,autogen2);
  int autogen7 = autogen4.ule(autogen6);
  APInt autogen8;
  if (autogen3 == 0) {
    autogen8 = APInt::getAllOnes(autogen2.getBitWidth());
  } else {
    autogen8 = autogen2.udiv(autogen3);
  }
  int autogen9 = autogen8.eq(autogen5);
  int autogen10 = autogen7&autogen9;
  return autogen10;
}

extern "C" Vec<2> sdiv_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  APInt autogen8;
  if (autogen4 == 0) {
    autogen8 = autogen6;
  } else {
    autogen8 = autogen6.srem(autogen4);
  }
  APInt autogen9;
  if (autogen5 == 0) {
    autogen9 = autogen1;
  } else {
    autogen9 = autogen1.srem(autogen5);
  }
  unsigned autogen10_autocast = autogen3.countl_zero();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  APInt autogen11 = umax(autogen10,autogen7);
  APInt autogen12 = umax(autogen11,autogen10);
  APInt autogen13 = autogen8;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.setLowBits(autogen12.getZExtValue());
  else
    autogen13.setLowBits(autogen12.getBitWidth());
  APInt autogen14 = ~autogen3;
  APInt autogen15 = umin(autogen9,autogen2);
  APInt autogen16;
  if (autogen14 == 0) {
    autogen16 = APInt::getAllOnes(autogen15.getBitWidth());
  } else {
    autogen16 = autogen15.udiv(autogen14);
  }
  APInt autogen17 = autogen13;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen17.clearLowBits(autogen11.getZExtValue());
  else
    autogen17.clearLowBits(autogen11.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int sdiv_partial_solution_7_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen6.eq(autogen5);
  APInt autogen8 = autogen4;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.clearHighBits(autogen5.getZExtValue());
  else
    autogen8.clearHighBits(autogen5.getBitWidth());
  int autogen9 = autogen2.eq(autogen8);
  int autogen10 = autogen7|autogen9;
  return autogen10;
}

extern "C" Vec<2> sdiv_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6 = ~autogen1;
  APInt autogen7 = umax(autogen5,autogen4);
  APInt autogen8;
  if (autogen2 == 0) {
    autogen8 = APInt::getAllOnes(autogen6.getBitWidth());
  } else {
    autogen8 = autogen6.udiv(autogen2);
  }
  APInt autogen9;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen9 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen9 = autogen2.shl(autogen7.getZExtValue());
  }
  unsigned autogen10_autocast = autogen8.countl_zero();
  APInt autogen10(autogen8.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen9;
  autogen11.setSignBit();
  APInt autogen12 = autogen9*autogen6;
  APInt autogen13 = autogen11;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen13.setHighBits(autogen10.getZExtValue());
  else
    autogen13.setHighBits(autogen10.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" int sdiv_partial_solution_8_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  int autogen7 = autogen6.eq(autogen2);
  int autogen8 = autogen3.eq(autogen5);
  int autogen9 = autogen8&autogen7;
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7 = smax(autogen3,autogen2);
  APInt autogen8;
  if (autogen4 == 0) {
    autogen8 = APInt::getAllOnes(autogen1.getBitWidth());
  } else {
    autogen8 = autogen1.udiv(autogen4);
  }
  APInt autogen9 = autogen1-autogen2;
  int autogen10 = autogen1.ule(autogen6);
  APInt autogen11 = autogen8|autogen9;
  unsigned autogen12_autocast = autogen7.countl_zero();
  APInt autogen12(autogen7.getBitWidth(),autogen12_autocast);
  APInt autogen13 = autogen10 ? autogen5 : autogen7 ;
  APInt autogen14;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen14 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen14 = autogen13.shl(autogen12.getZExtValue());
  }
  APInt autogen15 = ~autogen11;
  APInt autogen16 = autogen11*autogen14;
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" int sdiv_partial_solution_9_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6(autogen4.getBitWidth(),1);
  APInt autogen7 = autogen5;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.setHighBits(autogen6.getZExtValue());
  else
    autogen7.setHighBits(autogen6.getBitWidth());
  int autogen8 = autogen3.ule(autogen7);
  int autogen9 = autogen7.ult(autogen2);
  int autogen10 = autogen8|autogen9;
  int autogen11 = autogen10^autogen8;
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_10_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  unsigned autogen8_autocast = autogen4.getBitWidth();
  APInt autogen8(autogen4.getBitWidth(),autogen8_autocast);
  unsigned autogen9_autocast = autogen1.countl_zero();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen3^autogen1;
  APInt autogen11;
  if (autogen6 == 0) {
    autogen11 = APInt::getAllOnes(autogen10.getBitWidth());
  } else {
    autogen11 = autogen10.udiv(autogen6);
  }
  int autogen12 = autogen5.ule(autogen3);
  APInt autogen13 = autogen8+autogen7;
  APInt autogen14;
  if (autogen10 == 0) {
    autogen14 = autogen10;
  } else {
    autogen14 = autogen10.srem(autogen10);
  }
  int autogen15 = autogen14.ule(autogen3);
  unsigned autogen16_autocast = autogen4.countl_zero();
  APInt autogen16(autogen4.getBitWidth(),autogen16_autocast);
  APInt autogen17 = smin(autogen2,autogen3);
  APInt autogen18;
  if (autogen16.uge(autogen16.getBitWidth())) {
    autogen18 = APInt(autogen11.getBitWidth(), 0);
  } else {
    autogen18 = autogen11.lshr(autogen16.getZExtValue());
  }
  APInt autogen19 = autogen12 ? autogen13 : autogen9 ;
  APInt autogen20 = autogen15 ? autogen19 : autogen8 ;
  APInt autogen21 = smax(autogen18,autogen14);
  APInt autogen22;
  if (autogen20.uge(autogen20.getBitWidth())) {
    autogen22 = APInt(autogen17.getBitWidth(), 0);
  } else {
    autogen22 = autogen17.shl(autogen20.getZExtValue());
  }
  APInt autogen23 = autogen21&autogen2;
  Vec<2> autogen24 = Vec<2>{autogen23,autogen22};
  return autogen24;
}

extern "C" Vec<2> sdiv_partial_solution_11_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen3.countl_zero();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  APInt autogen9 = autogen5+autogen2;
  APInt autogen10 = smin(autogen6,autogen6);
  APInt autogen11 = umin(autogen10,autogen1);
  unsigned autogen12_autocast = autogen9.countl_zero();
  APInt autogen12(autogen9.getBitWidth(),autogen12_autocast);
  APInt autogen13;
  if (autogen1.isMinSignedValue() && autogen9 == -1) {
    autogen13 = APInt::getSignedMinValue(autogen1.getBitWidth());
  } else if (autogen9 == 0 && autogen1.isNonNegative()) {
    autogen13 = APInt::getAllOnes(autogen1.getBitWidth());
  } else if (autogen9 == 0 && autogen1.isNegative()) {
    autogen13 = APInt(autogen1.getBitWidth(), 1);
  } else {
    autogen13 = autogen1.sdiv(autogen9);
  }
  APInt autogen14 = smin(autogen4,autogen6);
  APInt autogen15 = autogen12+autogen8;
  APInt autogen16;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen16 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen16 = autogen13.shl(autogen7.getZExtValue());
  }
  APInt autogen17;
  if (autogen15.uge(autogen15.getBitWidth())) {
    autogen17 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen17 = autogen14.shl(autogen15.getZExtValue());
  }
  APInt autogen18 = autogen10&autogen16;
  APInt autogen19 = umax(autogen17,autogen11);
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" int sdiv_partial_solution_11_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen1[0];
  APInt autogen5 = autogen1[1];
  APInt autogen6(autogen5.getBitWidth(),1);
  APInt autogen7 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.setHighBits(autogen6.getZExtValue());
  else
    autogen7.setHighBits(autogen6.getBitWidth());
  int autogen8 = autogen3.eq(autogen7);
  int autogen9 = autogen4.eq(autogen2);
  int autogen10 = autogen9&autogen8;
  return autogen10;
}

extern "C" Vec<2> sdiv_partial_solution_12_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  APInt autogen8;
  if (autogen4 == 0) {
    autogen8 = autogen6;
  } else {
    autogen8 = autogen6.srem(autogen4);
  }
  APInt autogen9;
  if (autogen5 == 0) {
    autogen9 = autogen1;
  } else {
    autogen9 = autogen1.srem(autogen5);
  }
  unsigned autogen10_autocast = autogen3.countl_zero();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  APInt autogen11 = umax(autogen10,autogen7);
  APInt autogen12 = umax(autogen11,autogen10);
  APInt autogen13 = autogen8;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.setLowBits(autogen12.getZExtValue());
  else
    autogen13.setLowBits(autogen12.getBitWidth());
  APInt autogen14 = ~autogen3;
  APInt autogen15 = umin(autogen9,autogen2);
  APInt autogen16;
  if (autogen14 == 0) {
    autogen16 = APInt::getAllOnes(autogen15.getBitWidth());
  } else {
    autogen16 = autogen15.udiv(autogen14);
  }
  APInt autogen17 = autogen13;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen17.clearLowBits(autogen11.getZExtValue());
  else
    autogen17.clearLowBits(autogen11.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int sdiv_partial_solution_12_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6 = autogen2|autogen4;
  int autogen7 = autogen5.ule(autogen6);
  int autogen8 = autogen7^autogen7;
  int autogen9 = autogen8^autogen7;
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_13_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4(autogen2.getBitWidth(),1);
  unsigned autogen5_autocast = autogen2.getBitWidth();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen5+autogen5;
  APInt autogen7 = umin(autogen2,autogen1);
  APInt autogen8 = smax(autogen1,autogen3);
  APInt autogen9 = umax(autogen6,autogen4);
  APInt autogen10;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen10 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen10 = autogen8.shl(autogen9.getZExtValue());
  }
  unsigned autogen11_autocast = autogen7.countl_zero();
  APInt autogen11(autogen7.getBitWidth(),autogen11_autocast);
  APInt autogen12 = autogen10;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen12.setLowBits(autogen6.getZExtValue());
  else
    autogen12.setLowBits(autogen6.getBitWidth());
  unsigned autogen13_autocast = autogen1.countr_zero();
  APInt autogen13(autogen1.getBitWidth(),autogen13_autocast);
  APInt autogen14 = autogen10+autogen10;
  APInt autogen15 = umin(autogen11,autogen9);
  APInt autogen16 = autogen14;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen16.clearLowBits(autogen13.getZExtValue());
  else
    autogen16.clearLowBits(autogen13.getBitWidth());
  APInt autogen17 = autogen12;
  if (autogen15.ule(autogen15.getBitWidth()))
    autogen17.clearLowBits(autogen15.getZExtValue());
  else
    autogen17.clearLowBits(autogen15.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int sdiv_partial_solution_13_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6(autogen4.getBitWidth(),1);
  APInt autogen7 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen8 = autogen4+autogen2;
  int autogen9 = autogen5.eq(autogen6);
  APInt autogen10 = smax(autogen3,autogen8);
  int autogen11 = autogen7.ule(autogen10);
  int autogen12 = autogen9^autogen11;
  return autogen12;
}

extern "C" Vec<2> sdiv_partial_solution_14_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7(autogen4.getBitWidth(),1);
  unsigned autogen8_autocast = autogen4.getBitWidth();
  APInt autogen8(autogen4.getBitWidth(),autogen8_autocast);
  int autogen9 = autogen3.ule(autogen1);
  APInt autogen10 = autogen9 ? autogen8 : autogen7 ;
  APInt autogen11 = umin(autogen3,autogen4);
  APInt autogen12 = autogen10+autogen8;
  APInt autogen13;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen13 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen13 = autogen5.lshr(autogen12.getZExtValue());
  }
  unsigned autogen14_autocast = autogen11.countl_zero();
  APInt autogen14(autogen11.getBitWidth(),autogen14_autocast);
  APInt autogen15;
  if (autogen14.uge(autogen14.getBitWidth())) {
    autogen15 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen15 = autogen5.shl(autogen14.getZExtValue());
  }
  APInt autogen16 = autogen2&autogen13;
  APInt autogen17 = autogen6*autogen15;
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int sdiv_partial_solution_14_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),1);
  APInt autogen6 = autogen4-autogen2;
  int autogen7 = autogen5.ule(autogen5);
  int autogen8 = autogen3.ult(autogen6);
  int autogen9 = autogen8^autogen7;
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_15_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5(autogen2.getBitWidth(),1);
  unsigned autogen6_autocast = autogen2.getBitWidth();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen5.eq(autogen6);
  unsigned autogen8_autocast = autogen1.countr_zero();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umax(autogen4,autogen1);
  APInt autogen10 = umax(autogen5,autogen6);
  APInt autogen11 = autogen5-autogen8;
  APInt autogen12 = autogen7 ? autogen11 : autogen10 ;
  APInt autogen13 = umin(autogen9,autogen2);
  APInt autogen14 = autogen2;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen14.setHighBits(autogen12.getZExtValue());
  else
    autogen14.setHighBits(autogen12.getBitWidth());
  APInt autogen15;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen3.isSignBitSet()) {
    autogen15 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen3.isSignBitClear()) {
    autogen15 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen15 = autogen3.ashr(autogen6.getZExtValue());
  }
  unsigned autogen16_autocast = autogen13.countl_zero();
  APInt autogen16(autogen13.getBitWidth(),autogen16_autocast);
  APInt autogen17;
  if (autogen11.uge(autogen11.getBitWidth()) && autogen15.isSignBitSet()) {
    autogen17 = APInt::getAllOnes(autogen15.getBitWidth());
  } else if (autogen11.uge(autogen11.getBitWidth()) && autogen15.isSignBitClear()) {
    autogen17 = APInt(autogen15.getBitWidth(), 0);
  } else {
    autogen17 = autogen15.ashr(autogen11.getZExtValue());
  }
  APInt autogen18 = umin(autogen17,autogen1);
  APInt autogen19 = autogen14;
  if (autogen16.ule(autogen16.getBitWidth()))
    autogen19.clearLowBits(autogen16.getZExtValue());
  else
    autogen19.clearLowBits(autogen16.getBitWidth());
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" int sdiv_partial_solution_15_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  int autogen5 = autogen2.eq(autogen4);
  int autogen6 = autogen3.ult(autogen4);
  int autogen7 = autogen5&autogen6;
  int autogen8 = autogen5|autogen5;
  int autogen9 = autogen8^autogen7;
  return autogen9;
}

extern "C" Vec<2> sdiv_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_0_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_0_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_2_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_2_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sdiv_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sdiv_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_4_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_4_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_7_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_7_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_8_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_8_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_9_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_9_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_10(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sdiv_partial_solution_10_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sdiv_partial_solution_11(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_11_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_11_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_12(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_12_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_12_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_13(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_13_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_13_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_14(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_14_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_14_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_partial_solution_15(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sdiv_partial_solution_15_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sdiv_partial_solution_15_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sdiv_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sdiv_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = sdiv_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = sdiv_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = sdiv_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = sdiv_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = sdiv_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = sdiv_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = sdiv_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = sdiv_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = sdiv_partial_solution_9(autogen0,autogen1);
  Vec<2> autogen12 = sdiv_partial_solution_10(autogen0,autogen1);
  Vec<2> autogen13 = sdiv_partial_solution_11(autogen0,autogen1);
  Vec<2> autogen14 = sdiv_partial_solution_12(autogen0,autogen1);
  Vec<2> autogen15 = sdiv_partial_solution_13(autogen0,autogen1);
  Vec<2> autogen16 = sdiv_partial_solution_14(autogen0,autogen1);
  Vec<2> autogen17 = sdiv_partial_solution_15(autogen0,autogen1);
  Vec<2> autogen18 = meet(autogen2,autogen3);
  Vec<2> autogen19 = meet(autogen18,autogen4);
  Vec<2> autogen20 = meet(autogen19,autogen5);
  Vec<2> autogen21 = meet(autogen20,autogen6);
  Vec<2> autogen22 = meet(autogen21,autogen7);
  Vec<2> autogen23 = meet(autogen22,autogen8);
  Vec<2> autogen24 = meet(autogen23,autogen9);
  Vec<2> autogen25 = meet(autogen24,autogen10);
  Vec<2> autogen26 = meet(autogen25,autogen11);
  Vec<2> autogen27 = meet(autogen26,autogen12);
  Vec<2> autogen28 = meet(autogen27,autogen13);
  Vec<2> autogen29 = meet(autogen28,autogen14);
  Vec<2> autogen30 = meet(autogen29,autogen15);
  Vec<2> autogen31 = meet(autogen30,autogen16);
  Vec<2> autogen32 = meet(autogen31,autogen17);
  return autogen32;
}
