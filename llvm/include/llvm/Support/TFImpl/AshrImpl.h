extern "C" Vec<2> ashr_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = autogen0[1];
  APInt autogen2(autogen1.getBitWidth(),1);
  unsigned autogen3_autocast = autogen1.getBitWidth();
  APInt autogen3(autogen1.getBitWidth(),autogen3_autocast);
  APInt autogen4 = umin(autogen3,autogen2);
  APInt autogen5;
  if (autogen4.uge(autogen4.getBitWidth())) {
    autogen5 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen5 = autogen1.lshr(autogen4.getZExtValue());
  }
  unsigned autogen6_autocast = autogen5.countl_zero();
  APInt autogen6(autogen5.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen5;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen7.clearLowBits(autogen6.getZExtValue());
  else
    autogen7.clearLowBits(autogen6.getBitWidth());
  APInt autogen8 = umin(autogen7,autogen7);
  Vec<2> autogen9 = Vec<2>{autogen8,autogen7};
  return autogen9;
}

extern "C" Vec<2> ashr_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5;
  if (autogen2.isMinSignedValue() && autogen1 == -1) {
    autogen5 = APInt::getSignedMinValue(autogen2.getBitWidth());
  } else if (autogen1 == 0 && autogen2.isNonNegative()) {
    autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen1 == 0 && autogen2.isNegative()) {
    autogen5 = APInt(autogen2.getBitWidth(), 1);
  } else {
    autogen5 = autogen2.sdiv(autogen1);
  }
  APInt autogen6;
  if (autogen5 == 0) {
    autogen6 = APInt::getAllOnes(autogen1.getBitWidth());
  } else {
    autogen6 = autogen1.udiv(autogen5);
  }
  APInt autogen7;
  if (autogen4.uge(autogen4.getBitWidth())) {
    autogen7 = APInt(autogen3.getBitWidth(), 0);
  } else {
    autogen7 = autogen3.shl(autogen4.getZExtValue());
  }
  unsigned autogen8_autocast = autogen7.countl_zero();
  APInt autogen8(autogen7.getBitWidth(),autogen8_autocast);
  APInt autogen9 = ~autogen6;
  APInt autogen10 = autogen6;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen10.clearLowBits(autogen8.getZExtValue());
  else
    autogen10.clearLowBits(autogen8.getBitWidth());
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" int ashr_partial_solution_1_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4 = autogen3;
  autogen4.setSignBit();
  APInt autogen5;
  if (autogen4.isMinSignedValue() && autogen2 == -1) {
    autogen5 = APInt::getSignedMinValue(autogen4.getBitWidth());
  } else if (autogen2 == 0 && autogen4.isNonNegative()) {
    autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen2 == 0 && autogen4.isNegative()) {
    autogen5 = APInt(autogen4.getBitWidth(), 1);
  } else {
    autogen5 = autogen4.sdiv(autogen2);
  }
  int autogen6 = autogen5.ult(autogen2);
  return autogen6;
}

extern "C" Vec<2> ashr_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6(autogen3.getBitWidth(),0);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8;
  if (autogen3 == 0) {
    autogen8 = autogen3;
  } else {
    autogen8 = autogen3.srem(autogen3);
  }
  APInt autogen9;
  if (autogen5.isMinSignedValue() && autogen2 == -1) {
    autogen9 = APInt::getSignedMinValue(autogen5.getBitWidth());
  } else if (autogen2 == 0 && autogen5.isNonNegative()) {
    autogen9 = APInt::getAllOnes(autogen5.getBitWidth());
  } else if (autogen2 == 0 && autogen5.isNegative()) {
    autogen9 = APInt(autogen5.getBitWidth(), 1);
  } else {
    autogen9 = autogen5.sdiv(autogen2);
  }
  int autogen10 = autogen6.ult(autogen7);
  unsigned autogen11_autocast = autogen1.countl_one();
  APInt autogen11(autogen1.getBitWidth(),autogen11_autocast);
  APInt autogen12 = autogen9;
  autogen12.setSignBit();
  APInt autogen13 = autogen8;
  if (autogen11.ule(autogen11.getBitWidth()))
    autogen13.setHighBits(autogen11.getZExtValue());
  else
    autogen13.setHighBits(autogen11.getBitWidth());
  APInt autogen14;
  if (autogen7.uge(autogen7.getBitWidth()) && autogen12.isSignBitSet()) {
    autogen14 = APInt::getAllOnes(autogen12.getBitWidth());
  } else if (autogen7.uge(autogen7.getBitWidth()) && autogen12.isSignBitClear()) {
    autogen14 = APInt(autogen12.getBitWidth(), 0);
  } else {
    autogen14 = autogen12.ashr(autogen7.getZExtValue());
  }
  APInt autogen15 = autogen10 ? autogen5 : autogen4 ;
  APInt autogen16;
  if (autogen13.isMinSignedValue() && autogen15 == -1) {
    autogen16 = APInt::getSignedMinValue(autogen13.getBitWidth());
  } else if (autogen15 == 0 && autogen13.isNonNegative()) {
    autogen16 = APInt::getAllOnes(autogen13.getBitWidth());
  } else if (autogen15 == 0 && autogen13.isNegative()) {
    autogen16 = APInt(autogen13.getBitWidth(), 1);
  } else {
    autogen16 = autogen13.sdiv(autogen15);
  }
  APInt autogen17 = umin(autogen13,autogen14);
  APInt autogen18;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen18 = APInt(autogen16.getBitWidth(), 0);
  } else {
    autogen18 = autogen16.shl(autogen7.getZExtValue());
  }
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" Vec<2> ashr_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen1.countl_one();
  APInt autogen7(autogen1.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen4-autogen2;
  APInt autogen9 = smin(autogen5,autogen1);
  unsigned autogen10_autocast = autogen3.countl_zero();
  APInt autogen10(autogen3.getBitWidth(),autogen10_autocast);
  int autogen11 = autogen8.eq(autogen9);
  APInt autogen12 = autogen11 ? autogen6 : autogen10 ;
  APInt autogen13;
  if (autogen12.uge(autogen12.getBitWidth()) && autogen9.isSignBitSet()) {
    autogen13 = APInt::getAllOnes(autogen9.getBitWidth());
  } else if (autogen12.uge(autogen12.getBitWidth()) && autogen9.isSignBitClear()) {
    autogen13 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen13 = autogen9.ashr(autogen12.getZExtValue());
  }
  unsigned autogen14_autocast = autogen13.countr_one();
  APInt autogen14(autogen13.getBitWidth(),autogen14_autocast);
  APInt autogen15 = autogen14-autogen7;
  APInt autogen16 = autogen8;
  if (autogen12.ule(autogen12.getBitWidth()))
    autogen16.setLowBits(autogen12.getZExtValue());
  else
    autogen16.setLowBits(autogen12.getBitWidth());
  APInt autogen17;
  if (autogen16 == 0) {
    autogen17 = autogen5;
  } else {
    autogen17 = autogen5.srem(autogen16);
  }
  APInt autogen18 = autogen5;
  if (autogen15.ule(autogen15.getBitWidth()))
    autogen18.clearLowBits(autogen15.getZExtValue());
  else
    autogen18.clearLowBits(autogen15.getBitWidth());
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int ashr_partial_solution_3_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen1[1];
  APInt autogen3(autogen2.getBitWidth(),0);
  APInt autogen4 = APInt::getAllOnes(autogen2.getBitWidth());
  APInt autogen5;
  if (autogen2.isMinSignedValue() && autogen4 == -1) {
    autogen5 = APInt::getSignedMinValue(autogen2.getBitWidth());
  } else if (autogen4 == 0 && autogen2.isNonNegative()) {
    autogen5 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen4 == 0 && autogen2.isNegative()) {
    autogen5 = APInt(autogen2.getBitWidth(), 1);
  } else {
    autogen5 = autogen2.sdiv(autogen4);
  }
  int autogen6 = autogen5.ule(autogen3);
  return autogen6;
}

extern "C" Vec<2> ashr_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen5-autogen6;
  APInt autogen8 = autogen2^autogen1;
  APInt autogen9 = smax(autogen4,autogen2);
  unsigned autogen10_autocast = autogen2.countl_zero();
  APInt autogen10(autogen2.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen8;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen11.setLowBits(autogen7.getZExtValue());
  else
    autogen11.setLowBits(autogen7.getBitWidth());
  APInt autogen12 = umax(autogen5,autogen10);
  APInt autogen13 = umax(autogen12,autogen7);
  APInt autogen14;
  if (autogen10.uge(autogen10.getBitWidth())) {
    autogen14 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen14 = autogen2.lshr(autogen10.getZExtValue());
  }
  APInt autogen15;
  if (autogen13.uge(autogen13.getBitWidth()) && autogen14.isSignBitSet()) {
    autogen15 = APInt::getAllOnes(autogen14.getBitWidth());
  } else if (autogen13.uge(autogen13.getBitWidth()) && autogen14.isSignBitClear()) {
    autogen15 = APInt(autogen14.getBitWidth(), 0);
  } else {
    autogen15 = autogen14.ashr(autogen13.getZExtValue());
  }
  APInt autogen16;
  if (autogen9 == 0) {
    autogen16 = autogen11;
  } else {
    autogen16 = autogen11.srem(autogen9);
  }
  APInt autogen17 = umin(autogen16,autogen15);
  APInt autogen18 = ~autogen15;
  Vec<2> autogen19 = Vec<2>{autogen18,autogen17};
  return autogen19;
}

extern "C" int ashr_partial_solution_4_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = ~autogen3;
  int autogen5 = autogen4.ult(autogen2);
  return autogen5;
}

extern "C" Vec<2> ashr_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5 = APInt::getAllOnes(autogen4.getBitWidth());
  unsigned autogen6_autocast = autogen4.getBitWidth();
  APInt autogen6(autogen4.getBitWidth(),autogen6_autocast);
  APInt autogen7;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen7 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen7 = autogen1.lshr(autogen6.getZExtValue());
  }
  APInt autogen8;
  if (autogen2 == 0) {
    autogen8 = APInt::getAllOnes(autogen3.getBitWidth());
  } else {
    autogen8 = autogen3.udiv(autogen2);
  }
  APInt autogen9;
  if (autogen8.isMinSignedValue() && autogen4 == -1) {
    autogen9 = APInt::getSignedMinValue(autogen8.getBitWidth());
  } else if (autogen4 == 0 && autogen8.isNonNegative()) {
    autogen9 = APInt::getAllOnes(autogen8.getBitWidth());
  } else if (autogen4 == 0 && autogen8.isNegative()) {
    autogen9 = APInt(autogen8.getBitWidth(), 1);
  } else {
    autogen9 = autogen8.sdiv(autogen4);
  }
  APInt autogen10;
  if (autogen9 == 0) {
    autogen10 = autogen5;
  } else {
    autogen10 = autogen5.urem(autogen9);
  }
  APInt autogen11 = smin(autogen7,autogen1);
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" int ashr_partial_solution_5_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth()) && autogen2.isSignBitSet()) {
    autogen6 = APInt::getAllOnes(autogen2.getBitWidth());
  } else if (autogen5.uge(autogen5.getBitWidth()) && autogen2.isSignBitClear()) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.ashr(autogen5.getZExtValue());
  }
  int autogen7 = autogen4.ule(autogen6);
  return autogen7;
}

extern "C" Vec<2> ashr_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),0);
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  int autogen8 = autogen6.eq(autogen7);
  APInt autogen9 = autogen8 ? autogen5 : autogen7 ;
  APInt autogen10;
  if (autogen9.uge(autogen9.getBitWidth())) {
    autogen10 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen10 = autogen4.lshr(autogen9.getZExtValue());
  }
  APInt autogen11 = autogen2|autogen10;
  APInt autogen12;
  if (autogen4.isMinSignedValue() && autogen11 == -1) {
    autogen12 = APInt::getSignedMinValue(autogen4.getBitWidth());
  } else if (autogen11 == 0 && autogen4.isNonNegative()) {
    autogen12 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen11 == 0 && autogen4.isNegative()) {
    autogen12 = APInt(autogen4.getBitWidth(), 1);
  } else {
    autogen12 = autogen4.sdiv(autogen11);
  }
  APInt autogen13 = autogen12^autogen4;
  APInt autogen14;
  if (autogen12 == 0) {
    autogen14 = APInt::getAllOnes(autogen13.getBitWidth());
  } else {
    autogen14 = autogen13.udiv(autogen12);
  }
  APInt autogen15;
  if (autogen14 == 0) {
    autogen15 = autogen1;
  } else {
    autogen15 = autogen1.srem(autogen14);
  }
  Vec<2> autogen16 = Vec<2>{autogen15,autogen14};
  return autogen16;
}

extern "C" int ashr_partial_solution_6_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = smax(autogen5,autogen2);
  APInt autogen7 = ~autogen2;
  APInt autogen8;
  if (autogen7 == 0) {
    autogen8 = autogen6;
  } else {
    autogen8 = autogen6.urem(autogen7);
  }
  int autogen9 = autogen8.eq(autogen4);
  return autogen9;
}

extern "C" Vec<2> ashr_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_partial_solution_1_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_partial_solution_1_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> ashr_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_partial_solution_3_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_partial_solution_3_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_partial_solution_4_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_partial_solution_4_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_partial_solution_5_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_partial_solution_5_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = ashr_partial_solution_6_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = ashr_partial_solution_6_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> ashr_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = ashr_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = ashr_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = ashr_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = ashr_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = ashr_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = ashr_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = ashr_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = meet(autogen2,autogen3);
  Vec<2> autogen10 = meet(autogen9,autogen4);
  Vec<2> autogen11 = meet(autogen10,autogen5);
  Vec<2> autogen12 = meet(autogen11,autogen6);
  Vec<2> autogen13 = meet(autogen12,autogen7);
  Vec<2> autogen14 = meet(autogen13,autogen8);
  return autogen14;
}
