extern "C" Vec<2> lshr_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),0);
  APInt autogen3 = APInt::getAllOnes(autogen1.getBitWidth());
  APInt autogen4(autogen1.getBitWidth(),1);
  unsigned autogen5_autocast = autogen1.getBitWidth();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  unsigned autogen6_autocast = autogen1.countl_zero();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen7.setHighBits(autogen5.getZExtValue());
  else
    autogen7.setHighBits(autogen5.getBitWidth());
  APInt autogen8 = autogen3;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen8.clearLowBits(autogen6.getZExtValue());
  else
    autogen8.clearLowBits(autogen6.getBitWidth());
  APInt autogen9 = autogen4+autogen4;
  APInt autogen10 = umax(autogen6,autogen9);
  APInt autogen11 = autogen9+autogen10;
  APInt autogen12 = smax(autogen7,autogen8);
  APInt autogen13 = autogen11-autogen4;
  APInt autogen14 = autogen8;
  if (autogen13.ule(autogen13.getBitWidth()))
    autogen14.clearHighBits(autogen13.getZExtValue());
  else
    autogen14.clearHighBits(autogen13.getBitWidth());
  APInt autogen15 = umin(autogen8,autogen12);
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" Vec<2> lshr_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen6(autogen2.getBitWidth(),1);
  unsigned autogen7_autocast = autogen2.getBitWidth();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  int autogen8 = autogen2.ule(autogen4);
  APInt autogen9 = autogen6+autogen6;
  APInt autogen10;
  if (autogen3 == 0) {
    autogen10 = autogen1;
  } else {
    autogen10 = autogen1.srem(autogen3);
  }
  APInt autogen11 = umax(autogen6,autogen7);
  APInt autogen12 = autogen8 ? autogen10 : autogen5 ;
  APInt autogen13;
  if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen13 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen9.uge(autogen9.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen13 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen13 = autogen2.ashr(autogen9.getZExtValue());
  }
  unsigned autogen14_autocast = autogen12.countl_one();
  APInt autogen14(autogen12.getBitWidth(),autogen14_autocast);
  APInt autogen15;
  if (autogen11.uge(autogen11.getBitWidth())) {
    autogen15 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen15 = autogen2.lshr(autogen11.getZExtValue());
  }
  APInt autogen16 = autogen13;
  if (autogen14.ule(autogen14.getBitWidth()))
    autogen16.setHighBits(autogen14.getZExtValue());
  else
    autogen16.setHighBits(autogen14.getBitWidth());
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" int lshr_partial_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  unsigned autogen4_autocast = autogen2.getBitWidth();
  APInt autogen4(autogen2.getBitWidth(),autogen4_autocast);
  APInt autogen5;
  if (autogen4.uge(autogen4.getBitWidth()) && autogen3.isSignBitSet()) {
    autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen4.uge(autogen4.getBitWidth()) && autogen3.isSignBitClear()) {
    autogen5 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen5 = autogen3.ashr(autogen4.getZExtValue());
  }
  int autogen6 = autogen5.eq(autogen2);
  return autogen6;
}

extern "C" Vec<2> lshr_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4(autogen2.getBitWidth(),0);
  unsigned autogen5_autocast = autogen2.getBitWidth();
  APInt autogen5(autogen2.getBitWidth(),autogen5_autocast);
  int autogen6 = autogen4.ult(autogen5);
  unsigned autogen7_autocast = autogen2.countl_zero();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  APInt autogen8;
  if (autogen7.uge(autogen7.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen8 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen7.uge(autogen7.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen8 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen8 = autogen2.ashr(autogen7.getZExtValue());
  }
  APInt autogen9 = autogen6 ? autogen5 : autogen5 ;
  APInt autogen10;
  if (autogen8 == 0) {
    autogen10 = APInt::getAllOnes(autogen3.getBitWidth());
  } else {
    autogen10 = autogen3.udiv(autogen8);
  }
  APInt autogen11;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen11 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen11 = autogen1.lshr(autogen9.getZExtValue());
  }
  APInt autogen12 = ~autogen10;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> lshr_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3 = APInt::getAllOnes(autogen2.getBitWidth());
  unsigned autogen4_autocast = autogen2.getBitWidth();
  APInt autogen4(autogen2.getBitWidth(),autogen4_autocast);
  unsigned autogen5_autocast = autogen1.countl_one();
  APInt autogen5(autogen1.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setLowBits(autogen5.getZExtValue());
  else
    autogen6.setLowBits(autogen5.getBitWidth());
  APInt autogen7;
  if (autogen6 == 0) {
    autogen7 = autogen3;
  } else {
    autogen7 = autogen3.srem(autogen6);
  }
  APInt autogen8 = autogen2;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen8.clearLowBits(autogen4.getZExtValue());
  else
    autogen8.clearLowBits(autogen4.getBitWidth());
  APInt autogen9 = smin(autogen8,autogen8);
  APInt autogen10 = autogen7;
  autogen10.setSignBit();
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" int lshr_partial_solution_3_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = ~autogen3;
  int autogen5 = autogen4.ule(autogen2);
  return autogen5;
}

extern "C" Vec<2> lshr_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen6(autogen2.getBitWidth(),0);
  unsigned autogen7_autocast = autogen2.getBitWidth();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen5*autogen2;
  APInt autogen9 = autogen4|autogen8;
  int autogen10 = autogen8.ule(autogen3);
  APInt autogen11 = autogen10 ? autogen6 : autogen7 ;
  APInt autogen12;
  if (autogen3.isMinSignedValue() && autogen9 == -1) {
    autogen12 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen9 == 0 && autogen3.isNonNegative()) {
    autogen12 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen9 == 0 && autogen3.isNegative()) {
    autogen12 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen12 = autogen3.sdiv(autogen9);
  }
  APInt autogen13 = autogen1;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen13.setLowBits(autogen11.getZExtValue());
  else
    autogen13.setLowBits(autogen11.getBitWidth());
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" int lshr_partial_solution_4_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  APInt autogen7 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.setHighBits(autogen6.getZExtValue());
  else
    autogen7.setHighBits(autogen6.getBitWidth());
  int autogen8 = autogen4.eq(autogen7);
  int autogen9 = autogen6.ule(autogen5);
  int autogen10 = autogen8^autogen9;
  return autogen10;
}

extern "C" Vec<2> lshr_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),1);
  int autogen8 = autogen3.eq(autogen4);
  APInt autogen9 = autogen5-autogen5;
  APInt autogen10 = autogen3*autogen2;
  APInt autogen11 = autogen5|autogen3;
  APInt autogen12 = smin(autogen10,autogen1);
  APInt autogen13;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen13 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen13 = autogen2.shl(autogen7.getZExtValue());
  }
  APInt autogen14 = smin(autogen12,autogen11);
  APInt autogen15 = autogen8 ? autogen14 : autogen6 ;
  APInt autogen16 = umin(autogen9,autogen13);
  APInt autogen17 = autogen15;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen17.setHighBits(autogen7.getZExtValue());
  else
    autogen17.setHighBits(autogen7.getBitWidth());
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int lshr_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = ~autogen2;
  APInt autogen6 = smax(autogen4,autogen2);
  APInt autogen7 = umin(autogen5,autogen6);
  int autogen8 = autogen5.eq(autogen7);
  return autogen8;
}

extern "C" Vec<2> lshr_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),0);
  APInt autogen8(autogen3.getBitWidth(),1);
  APInt autogen9;
  if (autogen7.uge(autogen7.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen9 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen7.uge(autogen7.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen9 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen9 = autogen2.ashr(autogen7.getZExtValue());
  }
  APInt autogen10;
  if (autogen4 == 0) {
    autogen10 = autogen3;
  } else {
    autogen10 = autogen3.srem(autogen4);
  }
  APInt autogen11;
  if (autogen8.uge(autogen8.getBitWidth())) {
    autogen11 = APInt(autogen10.getBitWidth(), 0);
  } else {
    autogen11 = autogen10.shl(autogen8.getZExtValue());
  }
  APInt autogen12 = autogen11;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen12.clearLowBits(autogen8.getZExtValue());
  else
    autogen12.clearLowBits(autogen8.getBitWidth());
  unsigned autogen13_autocast = autogen9.countr_one();
  APInt autogen13(autogen9.getBitWidth(),autogen13_autocast);
  int autogen14 = autogen10.eq(autogen12);
  APInt autogen15 = autogen13+autogen8;
  APInt autogen16;
  if (autogen15.uge(autogen15.getBitWidth())) {
    autogen16 = APInt(autogen5.getBitWidth(), 0);
  } else {
    autogen16 = autogen5.lshr(autogen15.getZExtValue());
  }
  APInt autogen17 = autogen14 ? autogen1 : autogen6 ;
  Vec<2> autogen18 = Vec<2>{autogen17,autogen16};
  return autogen18;
}

extern "C" int lshr_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  int autogen6 = autogen5.ule(autogen3);
  int autogen7 = autogen5.ule(autogen2);
  int autogen8 = autogen6|autogen7;
  return autogen8;
}

extern "C" Vec<2> lshr_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshr_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> lshr_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_3_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_3_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_4_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_4_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = lshr_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = lshr_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> lshr_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = lshr_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = lshr_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = lshr_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = lshr_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = lshr_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = lshr_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = lshr_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = meet(autogen2,autogen3);
  Vec<2> autogen10 = meet(autogen9,autogen4);
  Vec<2> autogen11 = meet(autogen10,autogen5);
  Vec<2> autogen12 = meet(autogen11,autogen6);
  Vec<2> autogen13 = meet(autogen12,autogen7);
  Vec<2> autogen14 = meet(autogen13,autogen8);
  return autogen14;
}
