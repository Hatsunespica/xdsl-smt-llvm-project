extern "C" Vec<2> shl_nuw_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  int autogen5 = autogen4.ult(autogen2);
  unsigned autogen6_autocast = autogen1.countl_zero();
  APInt autogen6(autogen1.getBitWidth(),autogen6_autocast);
  APInt autogen7 = smin(autogen3,autogen1);
  APInt autogen8 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen8.clearLowBits(autogen6.getZExtValue());
  else
    autogen8.clearLowBits(autogen6.getBitWidth());
  APInt autogen9 = autogen5 ? autogen8 : autogen7 ;
  APInt autogen10 = autogen2;
  autogen10.clearSignBit();
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> shl_nuw_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  unsigned autogen4_autocast = autogen1.countr_one();
  APInt autogen4(autogen1.getBitWidth(),autogen4_autocast);
  APInt autogen5 = autogen3&autogen2;
  APInt autogen6 = autogen5;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen6.setLowBits(autogen4.getZExtValue());
  else
    autogen6.setLowBits(autogen4.getBitWidth());
  APInt autogen7;
  if (autogen1 == 0) {
    autogen7 = autogen1;
  } else {
    autogen7 = autogen1.urem(autogen1);
  }
  APInt autogen8 = autogen7+autogen6;
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> shl_nuw_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  unsigned autogen5_autocast = autogen3.countl_zero();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2-autogen3;
  APInt autogen7;
  if (autogen4.isMinSignedValue() && autogen6 == -1) {
    autogen7 = APInt::getSignedMinValue(autogen4.getBitWidth());
  } else if (autogen6 == 0 && autogen4.isNonNegative()) {
    autogen7 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen6 == 0 && autogen4.isNegative()) {
    autogen7 = APInt(autogen4.getBitWidth(), 1);
  } else {
    autogen7 = autogen4.sdiv(autogen6);
  }
  APInt autogen8;
  if (autogen7 == 0) {
    autogen8 = APInt::getAllOnes(autogen7.getBitWidth());
  } else {
    autogen8 = autogen7.udiv(autogen7);
  }
  APInt autogen9 = umax(autogen2,autogen8);
  APInt autogen10 = autogen1;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen10.clearLowBits(autogen5.getZExtValue());
  else
    autogen10.clearLowBits(autogen5.getBitWidth());
  APInt autogen11 = autogen9;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen11.clearHighBits(autogen5.getZExtValue());
  else
    autogen11.clearHighBits(autogen5.getBitWidth());
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> shl_nuw_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),1);
  int autogen7 = autogen4.ult(autogen3);
  unsigned autogen8_autocast = autogen2.countl_zero();
  APInt autogen8(autogen2.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umin(autogen5,autogen2);
  APInt autogen10 = smin(autogen2,autogen2);
  APInt autogen11 = autogen3;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen11.setHighBits(autogen6.getZExtValue());
  else
    autogen11.setHighBits(autogen6.getBitWidth());
  unsigned autogen12_autocast = autogen9.countl_one();
  APInt autogen12(autogen9.getBitWidth(),autogen12_autocast);
  APInt autogen13 = autogen11;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen13.clearLowBits(autogen8.getZExtValue());
  else
    autogen13.clearLowBits(autogen8.getBitWidth());
  APInt autogen14 = autogen7 ? autogen13 : autogen10 ;
  APInt autogen15;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen15 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen15 = autogen1.lshr(autogen12.getZExtValue());
  }
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" int shl_nuw_partial_solution_3_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7 = autogen6-autogen3;
  int autogen8 = autogen5.ule(autogen2);
  int autogen9 = autogen8|autogen8;
  int autogen10 = autogen8&autogen9;
  int autogen11 = autogen3.ule(autogen7);
  int autogen12 = autogen10^autogen11;
  int autogen13 = autogen12&autogen10;
  return autogen13;
}

extern "C" Vec<2> shl_nuw_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7(autogen3.getBitWidth(),1);
  int autogen8 = autogen7.ule(autogen7);
  APInt autogen9 = autogen7+autogen7;
  APInt autogen10;
  if (autogen5 == 0) {
    autogen10 = autogen2;
  } else {
    autogen10 = autogen2.urem(autogen5);
  }
  APInt autogen11 = autogen1|autogen10;
  unsigned autogen12_autocast = autogen11.countr_one();
  APInt autogen12(autogen11.getBitWidth(),autogen12_autocast);
  APInt autogen13 = umin(autogen9,autogen7);
  APInt autogen14;
  if (autogen13.uge(autogen13.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen14 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen13.uge(autogen13.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen14 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen14 = autogen2.ashr(autogen13.getZExtValue());
  }
  APInt autogen15 = umin(autogen7,autogen12);
  APInt autogen16 = autogen8 ? autogen6 : autogen14 ;
  APInt autogen17 = autogen3;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen17.clearHighBits(autogen7.getZExtValue());
  else
    autogen17.clearHighBits(autogen7.getBitWidth());
  APInt autogen18;
  if (autogen4.isMinSignedValue() && autogen16 == -1) {
    autogen18 = APInt::getSignedMinValue(autogen4.getBitWidth());
  } else if (autogen16 == 0 && autogen4.isNonNegative()) {
    autogen18 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen16 == 0 && autogen4.isNegative()) {
    autogen18 = APInt(autogen4.getBitWidth(), 1);
  } else {
    autogen18 = autogen4.sdiv(autogen16);
  }
  APInt autogen19;
  if (autogen15.uge(autogen15.getBitWidth())) {
    autogen19 = APInt(autogen17.getBitWidth(), 0);
  } else {
    autogen19 = autogen17.shl(autogen15.getZExtValue());
  }
  Vec<2> autogen20 = Vec<2>{autogen19,autogen18};
  return autogen20;
}

extern "C" Vec<2> shl_nuw_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[0];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4(autogen2.getBitWidth(),1);
  APInt autogen5;
  if (autogen3.isMinSignedValue() && autogen4 == -1) {
    autogen5 = APInt::getSignedMinValue(autogen3.getBitWidth());
  } else if (autogen4 == 0 && autogen3.isNonNegative()) {
    autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  } else if (autogen4 == 0 && autogen3.isNegative()) {
    autogen5 = APInt(autogen3.getBitWidth(), 1);
  } else {
    autogen5 = autogen3.sdiv(autogen4);
  }
  APInt autogen6;
  if (autogen2 == 0) {
    autogen6 = autogen1;
  } else {
    autogen6 = autogen1.urem(autogen2);
  }
  APInt autogen7;
  if (autogen3 == 0) {
    autogen7 = autogen6;
  } else {
    autogen7 = autogen6.urem(autogen3);
  }
  APInt autogen8 = autogen7;
  autogen8.clearSignBit();
  APInt autogen9 = autogen5&autogen1;
  APInt autogen10 = autogen8*autogen2;
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> shl_nuw_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),1);
  int autogen7 = autogen4.ult(autogen3);
  unsigned autogen8_autocast = autogen2.countl_zero();
  APInt autogen8(autogen2.getBitWidth(),autogen8_autocast);
  APInt autogen9 = umin(autogen5,autogen2);
  APInt autogen10 = smin(autogen2,autogen2);
  APInt autogen11 = autogen3;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen11.setHighBits(autogen6.getZExtValue());
  else
    autogen11.setHighBits(autogen6.getBitWidth());
  unsigned autogen12_autocast = autogen9.countl_one();
  APInt autogen12(autogen9.getBitWidth(),autogen12_autocast);
  APInt autogen13 = autogen11;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen13.clearLowBits(autogen8.getZExtValue());
  else
    autogen13.clearLowBits(autogen8.getBitWidth());
  APInt autogen14 = autogen7 ? autogen13 : autogen10 ;
  APInt autogen15;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen15 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen15 = autogen1.lshr(autogen12.getZExtValue());
  }
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" int shl_nuw_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6 = autogen2;
  if (autogen4.ule(autogen4.getBitWidth()))
    autogen6.setHighBits(autogen4.getZExtValue());
  else
    autogen6.setHighBits(autogen4.getBitWidth());
  APInt autogen7 = ~autogen6;
  APInt autogen8 = autogen7;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen8.setHighBits(autogen5.getZExtValue());
  else
    autogen8.setHighBits(autogen5.getBitWidth());
  int autogen9 = autogen6.eq(autogen8);
  return autogen9;
}

extern "C" Vec<2> shl_nuw_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = smax(autogen3,autogen1);
  APInt autogen7;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen6.isSignBitSet()) {
    autogen7 = APInt::getAllOnes(autogen6.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen6.isSignBitClear()) {
    autogen7 = APInt(autogen6.getBitWidth(), 0);
  } else {
    autogen7 = autogen6.ashr(autogen5.getZExtValue());
  }
  APInt autogen8;
  if (autogen7 == 0) {
    autogen8 = autogen4;
  } else {
    autogen8 = autogen4.urem(autogen7);
  }
  APInt autogen9;
  if (autogen8 == 0) {
    autogen9 = APInt::getAllOnes(autogen2.getBitWidth());
  } else {
    autogen9 = autogen2.udiv(autogen8);
  }
  APInt autogen10;
  if (autogen3 == 0) {
    autogen10 = APInt::getAllOnes(autogen9.getBitWidth());
  } else {
    autogen10 = autogen9.udiv(autogen3);
  }
  APInt autogen11;
  if (autogen10 == 0) {
    autogen11 = APInt::getAllOnes(autogen7.getBitWidth());
  } else {
    autogen11 = autogen7.udiv(autogen10);
  }
  APInt autogen12;
  if (autogen8 == 0) {
    autogen12 = autogen11;
  } else {
    autogen12 = autogen11.urem(autogen8);
  }
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> shl_nuw_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[1];
  APInt autogen3(autogen2.getBitWidth(),1);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5(autogen2.getBitWidth(),1);
  APInt autogen6;
  if (autogen3 == 0) {
    autogen6 = APInt::getAllOnes(autogen2.getBitWidth());
  } else {
    autogen6 = autogen2.udiv(autogen3);
  }
  APInt autogen7 = autogen1*autogen4;
  APInt autogen8 = autogen7*autogen6;
  APInt autogen9;
  if (autogen2 == 0) {
    autogen9 = autogen8;
  } else {
    autogen9 = autogen8.srem(autogen2);
  }
  APInt autogen10 = autogen9;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen10.clearHighBits(autogen5.getZExtValue());
  else
    autogen10.clearHighBits(autogen5.getBitWidth());
  APInt autogen11 = smax(autogen6,autogen4);
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> shl_nuw_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6(autogen4.getBitWidth(),0);
  APInt autogen7(autogen4.getBitWidth(),1);
  unsigned autogen8_autocast = autogen4.getBitWidth();
  APInt autogen8(autogen4.getBitWidth(),autogen8_autocast);
  APInt autogen9 = autogen4;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen9.clearHighBits(autogen7.getZExtValue());
  else
    autogen9.clearHighBits(autogen7.getBitWidth());
  int autogen10 = autogen5.ult(autogen9);
  APInt autogen11 = autogen10 ? autogen8 : autogen6 ;
  APInt autogen12 = autogen10 ? autogen3 : autogen1 ;
  unsigned autogen13_autocast = autogen9.countr_one();
  APInt autogen13(autogen9.getBitWidth(),autogen13_autocast);
  APInt autogen14;
  if (autogen13.uge(autogen13.getBitWidth())) {
    autogen14 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen14 = autogen2.shl(autogen13.getZExtValue());
  }
  APInt autogen15 = autogen12;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen15.setHighBits(autogen11.getZExtValue());
  else
    autogen15.setHighBits(autogen11.getBitWidth());
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" int shl_nuw_partial_solution_9_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = autogen2;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen6.setHighBits(autogen5.getZExtValue());
  else
    autogen6.setHighBits(autogen5.getBitWidth());
  int autogen7 = autogen6.eq(autogen4);
  int autogen8 = autogen7|autogen7;
  return autogen8;
}

extern "C" Vec<2> shl_nuw_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nuw_partial_solution_3_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nuw_partial_solution_3_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nuw_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_5_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nuw_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nuw_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nuw_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_8_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> shl_nuw_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = shl_nuw_partial_solution_9_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = shl_nuw_partial_solution_9_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> shl_nuw_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = shl_nuw_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = shl_nuw_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = shl_nuw_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = shl_nuw_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = shl_nuw_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = shl_nuw_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = shl_nuw_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = shl_nuw_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = shl_nuw_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = shl_nuw_partial_solution_9(autogen0,autogen1);
  Vec<2> autogen12 = meet(autogen2,autogen3);
  Vec<2> autogen13 = meet(autogen12,autogen4);
  Vec<2> autogen14 = meet(autogen13,autogen5);
  Vec<2> autogen15 = meet(autogen14,autogen6);
  Vec<2> autogen16 = meet(autogen15,autogen7);
  Vec<2> autogen17 = meet(autogen16,autogen8);
  Vec<2> autogen18 = meet(autogen17,autogen9);
  Vec<2> autogen19 = meet(autogen18,autogen10);
  Vec<2> autogen20 = meet(autogen19,autogen11);
  return autogen20;
}
