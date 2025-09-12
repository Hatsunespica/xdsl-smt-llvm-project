extern "C" Vec<2> lshrexact_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen6 = autogen5*autogen2;
  APInt autogen7 = umax(autogen4,autogen2);
  unsigned autogen8_autocast = autogen7.countl_zero();
  APInt autogen8(autogen7.getBitWidth(),autogen8_autocast);
  APInt autogen9;
  if (autogen3 == 0) {
    autogen9 = APInt::getAllOnes(autogen6.getBitWidth());
  } else {
    autogen9 = autogen6.udiv(autogen3);
  }
  APInt autogen10 = autogen1;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen10.clearHighBits(autogen8.getZExtValue());
  else
    autogen10.clearHighBits(autogen8.getBitWidth());
  unsigned autogen11_autocast = autogen2.countl_zero();
  APInt autogen11(autogen2.getBitWidth(),autogen11_autocast);
  APInt autogen12 = autogen9&autogen10;
  APInt autogen13 = autogen9;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen13.clearLowBits(autogen11.getZExtValue());
  else
    autogen13.clearLowBits(autogen11.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> lshrexact_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  int autogen7 = autogen4.ult(autogen3);
  APInt autogen8 = autogen3|autogen1;
  APInt autogen9 = autogen7 ? autogen8 : autogen5 ;
  APInt autogen10 = ~autogen9;
  APInt autogen11 = autogen3;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen11.clearHighBits(autogen6.getZExtValue());
  else
    autogen11.clearHighBits(autogen6.getBitWidth());
  APInt autogen12 = autogen2-autogen11;
  APInt autogen13 = autogen8^autogen10;
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" int lshrexact_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = autogen2;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen5.setLowBits(autogen4.getZExtValue());
  else
    autogen5.setLowBits(autogen4.getBitWidth());
  int autogen6 = autogen5.eq(autogen2);
  return autogen6;
}

extern "C" Vec<2> lshrexact_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen6_autocast = autogen1.countl_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen4 == 0) {
    autogen7 = autogen4;
  } else {
    autogen7 = autogen4.srem(autogen4);
  }
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen8 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen8 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen8 = autogen2.ashr(autogen6.getZExtValue());
  }
  APInt autogen9 = smin(autogen5,autogen4);
  unsigned autogen10_autocast = autogen1.countl_one();
  APInt autogen10(autogen1.getBitWidth(),autogen10_autocast);
  APInt autogen11;
  if (autogen9 == 0) {
    autogen11 = APInt::getAllOnes(autogen8.getBitWidth());
  } else {
    autogen11 = autogen8.udiv(autogen9);
  }
  APInt autogen12 = autogen7;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen12.setHighBits(autogen10.getZExtValue());
  else
    autogen12.setHighBits(autogen10.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> lshrexact_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6(autogen3.getBitWidth(),0);
  APInt autogen7(autogen3.getBitWidth(),1);
  unsigned autogen8_autocast = autogen3.getBitWidth();
  APInt autogen8(autogen3.getBitWidth(),autogen8_autocast);
  unsigned autogen9_autocast = autogen1.countr_one();
  APInt autogen9(autogen1.getBitWidth(),autogen9_autocast);
  APInt autogen10;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen10 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen10 = autogen3.shl(autogen7.getZExtValue());
  }
  APInt autogen11;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen11 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen11 = autogen2.shl(autogen8.getZExtValue());
  }
  int autogen12 = autogen5.ule(autogen4);
  APInt autogen13 = autogen10-autogen3;
  unsigned autogen14_autocast = autogen11.countl_zero();
  APInt autogen14(autogen11.getBitWidth(),autogen14_autocast);
  APInt autogen15 = autogen2;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen15.clearHighBits(autogen9.getZExtValue());
  else
    autogen15.clearHighBits(autogen9.getBitWidth());
  unsigned autogen16_autocast = autogen13.countl_zero();
  APInt autogen16(autogen13.getBitWidth(),autogen16_autocast);
  APInt autogen17 = autogen12 ? autogen14 : autogen6 ;
  APInt autogen18 = autogen17+autogen16;
  APInt autogen19;
  if (autogen18.uge(autogen18.getBitWidth())) {
    autogen19 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen19 = autogen2.shl(autogen18.getZExtValue());
  }
  APInt autogen20 = autogen12 ? autogen15 : autogen19 ;
  APInt autogen21 = autogen20;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen21.clearHighBits(autogen7.getZExtValue());
  else
    autogen21.clearHighBits(autogen7.getBitWidth());
  Vec<2> autogen22 = Vec<2>{autogen21,autogen20};
  return autogen22;
}

extern "C" Vec<2> lshrexact_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = umin(autogen1,autogen3);
  unsigned autogen6_autocast = autogen2.countl_zero();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3^autogen4;
  APInt autogen8 = umax(autogen4,autogen7);
  unsigned autogen9_autocast = autogen5.countr_one();
  APInt autogen9(autogen5.getBitWidth(),autogen9_autocast);
  unsigned autogen10_autocast = autogen3.countr_one();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  APInt autogen11;
  if (autogen2.isMinSignedValue() && autogen8 == -1) {
    autogen11 = APInt::getSignedMinValue(autogen2.getBitWidth());
  } else if (autogen8 == 0 && autogen2.isNonNegative()) {
    autogen11 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen8 == 0 && autogen2.isNegative()) {
    autogen11 = APInt(autogen2.getBitWidth(), 1);
  } else {
    autogen11 = autogen2.sdiv(autogen8);
  }
  APInt autogen12 = autogen9+autogen6;
  APInt autogen13 = autogen11;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen13.clearHighBits(autogen12.getZExtValue());
  else
    autogen13.clearHighBits(autogen12.getBitWidth());
  APInt autogen14;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen14 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen14 = autogen1.lshr(autogen10.getZExtValue());
  }
  Vec<2> autogen15 = Vec<2>{autogen14,autogen13};
  return autogen15;
}

extern "C" int lshrexact_solution_4_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6;
  if (autogen4 == 0) {
    autogen6 = autogen2;
  } else {
    autogen6 = autogen2.urem(autogen4);
  }
  APInt autogen7 = autogen6;
  autogen7.setSignBit();
  int autogen8 = autogen5.ule(autogen7);
  return autogen8;
}

extern "C" Vec<2> lshrexact_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshrexact_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshrexact_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshrexact_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshrexact_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshrexact_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshrexact_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshrexact_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshrexact_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshrexact_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshrexact_solution_4_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshrexact_solution_4_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshrexact_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshrexact_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = lshrexact_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = lshrexact_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = lshrexact_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = lshrexact_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = meet(autogen2,autogen3);
  Vec<2> autogen8 = meet(autogen7,autogen4);
  Vec<2> autogen9 = meet(autogen8,autogen5);
  Vec<2> autogen10 = meet(autogen9,autogen6);
  return autogen10;
}
