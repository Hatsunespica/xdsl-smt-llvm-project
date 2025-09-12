extern "C" Vec<2> shl_nsuw_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  unsigned autogen7_autocast = autogen1.countr_one();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
  unsigned autogen8_autocast = autogen2.countl_zero();
  APInt autogen8(autogen2.getBitWidth(),autogen8_autocast);
  APInt autogen9;
  if (autogen8.uge(autogen8.getBitWidth()) && autogen4.isSignBitSet()) {
    autogen9 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen8.uge(autogen8.getBitWidth()) && autogen4.isSignBitClear()) {
    autogen9 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen9 = autogen4.ashr(autogen8.getZExtValue());
  }
  APInt autogen10;
  if (autogen5 == 0) {
    autogen10 = APInt::getAllOnes(autogen3.getBitWidth());
  } else {
    autogen10 = autogen3.udiv(autogen5);
  }
  APInt autogen11;
  if (autogen6 == 0) {
    autogen11 = autogen9;
  } else {
    autogen11 = autogen9.urem(autogen6);
  }
  APInt autogen12 = umin(autogen10,autogen9);
  APInt autogen13 = autogen11;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen13.setLowBits(autogen7.getZExtValue());
  else
    autogen13.setLowBits(autogen7.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> shl_nsuw_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen4 = autogen2-autogen3;
  unsigned autogen5_autocast = autogen2.countl_zero();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen6 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.ashr(autogen5.getZExtValue());
  }
  APInt autogen7;
  if (autogen4 == 0) {
    autogen7 = autogen1;
  } else {
    autogen7 = autogen1.urem(autogen4);
  }
  APInt autogen8 = umax(autogen1,autogen7);
  APInt autogen9 = autogen7;
  autogen9.clearSignBit();
  APInt autogen10 = smin(autogen8,autogen6);
  APInt autogen11 = autogen9+autogen6;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> shl_nsuw_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  int autogen8 = autogen3.eq(autogen4);
  APInt autogen9 = autogen5&autogen1;
  APInt autogen10 = autogen3+autogen9;
  APInt autogen11 = autogen10;
  autogen11.setSignBit();
  APInt autogen12 = autogen8 ? autogen6 : autogen7 ;
  APInt autogen13 = smin(autogen11,autogen9);
  APInt autogen14 = autogen2;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen14.clearHighBits(autogen12.getZExtValue());
  else
    autogen14.clearHighBits(autogen12.getBitWidth());
  APInt autogen15 = autogen8 ? autogen1 : autogen13 ;
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" int shl_nsuw_partial_solution_2_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),0);
  APInt autogen5(autogen2.getBitWidth(),1);
  int autogen6 = autogen2.eq(autogen3);
  int autogen7 = autogen4.ult(autogen5);
  int autogen8 = autogen6&autogen7;
  int autogen9 = autogen8|autogen7;
  int autogen10 = autogen8^autogen9;
  return autogen10;
}

extern "C" Vec<2> shl_nsuw_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen1.countl_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen1^autogen1;
  APInt autogen8 = autogen3*autogen4;
  int autogen9 = autogen6.ult(autogen5);
  APInt autogen10;
  if (autogen8 == 0) {
    autogen10 = autogen3;
  } else {
    autogen10 = autogen3.srem(autogen8);
  }
  APInt autogen11 = autogen1&autogen2;
  APInt autogen12 = autogen10;
  autogen12.setSignBit();
  unsigned autogen13_autocast = autogen12.countl_one();
  APInt autogen13(autogen12.getBitWidth(),autogen13_autocast);
  APInt autogen14 = autogen11;
  autogen14.setSignBit();
  APInt autogen15;
  if (autogen13.uge(autogen13.getBitWidth())) {
    autogen15 = APInt(autogen7.getBitWidth(), 0);
  } else {
    autogen15 = autogen7.lshr(autogen13.getZExtValue());
  }
  APInt autogen16 = autogen9 ? autogen15 : autogen14 ;
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> shl_nsuw_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),0);
  APInt autogen3 = APInt::getAllOnes(autogen1.getBitWidth());
  APInt autogen4(autogen1.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.getBitWidth();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setLowBits(autogen5.getZExtValue());
  else
    autogen6.setLowBits(autogen5.getBitWidth());
  APInt autogen7 = autogen6;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen7.setLowBits(autogen4.getZExtValue());
  else
    autogen7.setLowBits(autogen4.getBitWidth());
  unsigned autogen8_autocast = autogen1.countl_zero();
  APInt autogen8(autogen1.getBitWidth(),autogen8_autocast);
  APInt autogen9 = ~autogen7;
  APInt autogen10 = autogen3;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen10.clearHighBits(autogen8.getZExtValue());
  else
    autogen10.clearHighBits(autogen8.getBitWidth());
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> shl_nsuw_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  unsigned autogen6_autocast = autogen1.countr_one();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen7 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen7 = autogen3.shl(autogen6.getZExtValue());
  }
  APInt autogen8;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.shl(autogen6.getZExtValue());
  }
  int autogen9 = autogen8.ule(autogen4);
  APInt autogen10 = autogen7^autogen7;
  APInt autogen11 = smin(autogen5,autogen2);
  APInt autogen12 = autogen9 ? autogen10 : autogen8 ;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nsuw_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6;
  if (autogen4 == 0) {
    autogen6 = APInt::getAllOnes(autogen5.getBitWidth());
  } else {
    autogen6 = autogen5.udiv(autogen4);
  }
  APInt autogen7;
  if (autogen3 == 0) {
    autogen7 = APInt::getAllOnes(autogen4.getBitWidth());
  } else {
    autogen7 = autogen4.udiv(autogen3);
  }
  APInt autogen8 = autogen3*autogen1;
  unsigned autogen9_autocast = autogen7.countl_zero();
  APInt autogen9(autogen7.getBitWidth(),autogen9_autocast);
  APInt autogen10 = autogen1+autogen8;
  APInt autogen11;
  if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen11 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen11 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen11 = autogen2.ashr(autogen9.getZExtValue());
  }
  APInt autogen12 = autogen10&autogen6;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" int shl_nsuw_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen1[0];
  APInt autogen5 = autogen1[1];
  APInt autogen6(autogen5.getBitWidth(),0);
  APInt autogen7(autogen5.getBitWidth(),0);
  APInt autogen8;
  if (autogen7.uge(autogen7.getBitWidth()) && autogen4.isSignBitSet()) {
    autogen8 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen7.uge(autogen7.getBitWidth()) && autogen4.isSignBitClear()) {
    autogen8 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen8 = autogen4.ashr(autogen7.getZExtValue());
  }
  int autogen9 = autogen4.eq(autogen6);
  APInt autogen10;
  if (autogen3.isMinSignedValue() && autogen8 == -1) {
    autogen10 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen8 == 0 && autogen3.isNonNegative()) {
    autogen10 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen8 == 0 && autogen3.isNegative()) {
    autogen10 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen10 = autogen3.sdiv(autogen8);
  }
  int autogen11 = autogen10.ult(autogen2);
  int autogen12 = autogen11&autogen9;
  return autogen12;
}

extern "C" Vec<2> shl_nsuw_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),1);
  APInt autogen3 = APInt::getAllOnes(autogen1.getBitWidth());
  APInt autogen4(autogen1.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.getBitWidth();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6 = umin(autogen4,autogen5);
  APInt autogen7;
  if (autogen1 == 0) {
    autogen7 = APInt::getAllOnes(autogen3.getBitWidth());
  } else {
    autogen7 = autogen3.udiv(autogen1);
  }
  int autogen8 = autogen1.ult(autogen7);
  APInt autogen9 = autogen8 ? autogen2 : autogen1 ;
  APInt autogen10 = autogen7;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen10.setHighBits(autogen6.getZExtValue());
  else
    autogen10.setHighBits(autogen6.getBitWidth());
  APInt autogen11;
  if (autogen9 == 0) {
    autogen11 = autogen10;
  } else {
    autogen11 = autogen10.srem(autogen9);
  }
  APInt autogen12 = umin(autogen11,autogen11);
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nsuw_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nsuw_partial_solution_2_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nsuw_partial_solution_2_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nsuw_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_5_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nsuw_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nsuw_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nsuw_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nsuw_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nsuw_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_nsuw_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_nsuw_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_nsuw_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_nsuw_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = shl_nsuw_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = shl_nsuw_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = shl_nsuw_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = meet(autogen2,autogen3);
  Vec<2> autogen11 = meet(autogen10,autogen4);
  Vec<2> autogen12 = meet(autogen11,autogen5);
  Vec<2> autogen13 = meet(autogen12,autogen6);
  Vec<2> autogen14 = meet(autogen13,autogen7);
  Vec<2> autogen15 = meet(autogen14,autogen8);
  Vec<2> autogen16 = meet(autogen15,autogen9);
  return autogen16;
}
