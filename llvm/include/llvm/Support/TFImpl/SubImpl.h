extern "C" Vec<2> sub_partial_solution_0_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
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
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> sub_partial_solution_1_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6(autogen3.getBitWidth(),0);
  APInt autogen7(autogen3.getBitWidth(),1);
  int autogen8 = autogen7.eq(autogen6);
  APInt autogen9 = autogen5&autogen1;
  APInt autogen10 = autogen4;
  autogen10.setSignBit();
  APInt autogen11 = autogen8 ? autogen5 : autogen1 ;
  unsigned autogen12_autocast = autogen10.countr_zero();
  APInt autogen12(autogen10.getBitWidth(),autogen12_autocast);
  APInt autogen13 = autogen1|autogen9;
  APInt autogen14 = autogen13&autogen3;
  APInt autogen15 = autogen13+autogen3;
  APInt autogen16;
  if (autogen4 == 0) {
    autogen16 = autogen2;
  } else {
    autogen16 = autogen2.urem(autogen4);
  }
  APInt autogen17 = autogen16&autogen11;
  APInt autogen18 = autogen15&autogen13;
  APInt autogen19;
  if (autogen12.uge(autogen12.getBitWidth())) {
    autogen19 = APInt(autogen17.getBitWidth(), 0);
  } else {
    autogen19 = autogen17.shl(autogen12.getZExtValue());
  }
  APInt autogen20 = autogen14&autogen18;
  Vec<2> autogen21 = Vec<2>{autogen20,autogen19};
  return autogen21;
}

extern "C" Vec<2> sub_partial_solution_2_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = autogen3&autogen1;
  APInt autogen7 = autogen6;
  if (autogen5.ule(autogen5.getBitWidth()))
    autogen7.setLowBits(autogen5.getZExtValue());
  else
    autogen7.setLowBits(autogen5.getBitWidth());
  APInt autogen8 = autogen1^autogen7;
  APInt autogen9 = autogen2+autogen8;
  APInt autogen10;
  if (autogen4 == 0) {
    autogen10 = autogen4;
  } else {
    autogen10 = autogen4.srem(autogen4);
  }
  APInt autogen11 = autogen9&autogen6;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> sub_partial_solution_3_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = autogen2+autogen4;
  APInt autogen6 = umin(autogen3,autogen5);
  APInt autogen7 = autogen5&autogen3;
  APInt autogen8 = autogen7&autogen1;
  APInt autogen9 = autogen8;
  autogen9.clearSignBit();
  APInt autogen10;
  if (autogen6 == 0) {
    autogen10 = autogen6;
  } else {
    autogen10 = autogen6.urem(autogen6);
  }
  APInt autogen11 = autogen9|autogen8;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> sub_partial_solution_4_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen7 = autogen5+autogen2;
  APInt autogen8 = smin(autogen6,autogen5);
  APInt autogen9 = autogen3&autogen7;
  APInt autogen10 = smax(autogen6,autogen4);
  APInt autogen11 = umin(autogen1,autogen8);
  APInt autogen12 = autogen9&autogen11;
  APInt autogen13 = autogen10^autogen10;
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> sub_partial_solution_5_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6(autogen4.getBitWidth(),1);
  APInt autogen7 = autogen1&autogen4;
  APInt autogen8 = autogen3&autogen2;
  APInt autogen9;
  if (autogen6.uge(autogen6.getBitWidth())) {
    autogen9 = APInt(autogen8.getBitWidth(), 0);
  } else {
    autogen9 = autogen8.shl(autogen6.getZExtValue());
  }
  APInt autogen10 = autogen5;
  autogen10.setSignBit();
  APInt autogen11 = autogen7&autogen8;
  APInt autogen12 = autogen7&autogen9;
  APInt autogen13;
  if (autogen10 == 0) {
    autogen13 = autogen11;
  } else {
    autogen13 = autogen11.srem(autogen10);
  }
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> sub_partial_solution_6_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  unsigned autogen4_autocast = autogen3.getBitWidth();
  APInt autogen4(autogen3.getBitWidth(),autogen4_autocast);
  APInt autogen5 = autogen3&autogen2;
  unsigned autogen6_autocast = autogen2.countr_one();
  APInt autogen6(autogen2.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen3;
  autogen7.clearSignBit();
  APInt autogen8 = autogen4-autogen6;
  APInt autogen9 = autogen1;
  if (autogen8.ule(autogen8.getBitWidth()))
    autogen9.clearHighBits(autogen8.getZExtValue());
  else
    autogen9.clearHighBits(autogen8.getBitWidth());
  APInt autogen10 = autogen7*autogen5;
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> sub_partial_solution_7_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5(autogen3.getBitWidth(),1);
  unsigned autogen6_autocast = autogen3.getBitWidth();
  APInt autogen6(autogen3.getBitWidth(),autogen6_autocast);
  unsigned autogen7_autocast = autogen2.countr_one();
  APInt autogen7(autogen2.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen1|autogen5;
  APInt autogen9 = autogen6-autogen7;
  APInt autogen10;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen4.isSignBitSet()) {
    autogen10 = APInt::getAllOnes(autogen4.getBitWidth());
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen4.isSignBitClear()) {
    autogen10 = APInt(autogen4.getBitWidth(), 0);
  } else {
    autogen10 = autogen4.ashr(autogen6.getZExtValue());
  }
  APInt autogen11;
  if (autogen10.isMinSignedValue() && autogen8 == -1) {
    autogen11 = APInt::getSignedMinValue(autogen10.getBitWidth());
  } else if (autogen8 == 0 && autogen10.isNonNegative()) {
    autogen11 = APInt::getAllOnes(autogen10.getBitWidth());
  } else if (autogen8 == 0 && autogen10.isNegative()) {
    autogen11 = APInt(autogen10.getBitWidth(), 1);
  } else {
    autogen11 = autogen10.sdiv(autogen8);
  }
  APInt autogen12 = autogen1;
  if (autogen9.ule(autogen9.getBitWidth()))
    autogen12.clearHighBits(autogen9.getZExtValue());
  else
    autogen12.clearHighBits(autogen9.getBitWidth());
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" Vec<2> sub_partial_solution_8_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  APInt autogen7 = autogen2+autogen5;
  APInt autogen8;
  if (autogen4 == 0) {
    autogen8 = autogen5;
  } else {
    autogen8 = autogen5.urem(autogen4);
  }
  APInt autogen9 = autogen8+autogen6;
  APInt autogen10 = autogen3&autogen1;
  APInt autogen11 = smin(autogen8,autogen6);
  APInt autogen12 = autogen7&autogen10;
  APInt autogen13 = autogen8&autogen9;
  APInt autogen14 = autogen11&autogen12;
  Vec<2> autogen15 = Vec<2>{autogen14,autogen13};
  return autogen15;
}

extern "C" Vec<2> sub_partial_solution_9_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  unsigned autogen6_autocast = autogen4.getBitWidth();
  APInt autogen6(autogen4.getBitWidth(),autogen6_autocast);
  APInt autogen7 = autogen5;
  autogen7.clearSignBit();
  APInt autogen8 = autogen2;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen8.setHighBits(autogen6.getZExtValue());
  else
    autogen8.setHighBits(autogen6.getBitWidth());
  APInt autogen9 = autogen1&autogen4;
  APInt autogen10 = autogen7+autogen3;
  APInt autogen11 = umin(autogen8,autogen9);
  APInt autogen12 = autogen11&autogen10;
  APInt autogen13 = autogen3&autogen12;
  Vec<2> autogen14 = Vec<2>{autogen13,autogen12};
  return autogen14;
}

extern "C" Vec<2> sub_partial_solution_10_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = autogen4&autogen2;
  APInt autogen6 = autogen1&autogen3;
  APInt autogen7 = autogen5+autogen4;
  APInt autogen8 = autogen2;
  autogen8.clearSignBit();
  APInt autogen9 = autogen7&autogen3;
  APInt autogen10 = autogen8&autogen6;
  APInt autogen11 = autogen9&autogen8;
  Vec<2> autogen12 = Vec<2>{autogen11,autogen10};
  return autogen12;
}

extern "C" Vec<2> sub_partial_solution_11_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = arg0[1];
  APInt autogen3 = autogen0[0];
  APInt autogen4 = autogen0[1];
  APInt autogen5(autogen4.getBitWidth(),1);
  APInt autogen6 = APInt::getAllOnes(autogen4.getBitWidth());
  unsigned autogen7_autocast = autogen4.getBitWidth();
  APInt autogen7(autogen4.getBitWidth(),autogen7_autocast);
  APInt autogen8 = autogen1+autogen4;
  APInt autogen9 = autogen2;
  if (autogen7.ule(autogen7.getBitWidth()))
    autogen9.setHighBits(autogen7.getZExtValue());
  else
    autogen9.setHighBits(autogen7.getBitWidth());
  APInt autogen10;
  if (autogen8.isMinSignedValue() && autogen9 == -1) {
    autogen10 = APInt::getSignedMinValue(autogen8.getBitWidth());
  } else if (autogen9 == 0 && autogen8.isNonNegative()) {
    autogen10 = APInt::getAllOnes(autogen8.getBitWidth());
  } else if (autogen9 == 0 && autogen8.isNegative()) {
    autogen10 = APInt(autogen8.getBitWidth(), 1);
  } else {
    autogen10 = autogen8.sdiv(autogen9);
  }
  APInt autogen11 = smax(autogen10,autogen5);
  APInt autogen12 = autogen8&autogen3;
  APInt autogen13 = autogen2&autogen12;
  APInt autogen14 = autogen10&autogen5;
  APInt autogen15;
  if (autogen6 == 0) {
    autogen15 = autogen14;
  } else {
    autogen15 = autogen14.srem(autogen6);
  }
  APInt autogen16 = autogen11&autogen13;
  Vec<2> autogen17 = Vec<2>{autogen16,autogen15};
  return autogen17;
}

extern "C" Vec<2> sub_partial_solution_12_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6 = autogen1;
  autogen6.setSignBit();
  APInt autogen7 = autogen2+autogen5;
  APInt autogen8;
  if (autogen7 == 0) {
    autogen8 = autogen7;
  } else {
    autogen8 = autogen7.srem(autogen7);
  }
  APInt autogen9 = autogen8&autogen4;
  APInt autogen10 = autogen9&autogen6;
  APInt autogen11 = autogen3&autogen1;
  APInt autogen12 = autogen1&autogen10;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" int sub_partial_solution_12_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen1[1];
  APInt autogen4 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen5 = autogen2*autogen4;
  int autogen6 = autogen5.eq(autogen3);
  return autogen6;
}

extern "C" Vec<2> sub_partial_solution_13_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  APInt autogen6(autogen3.getBitWidth(),1);
  unsigned autogen7_autocast = autogen3.getBitWidth();
  APInt autogen7(autogen3.getBitWidth(),autogen7_autocast);
  APInt autogen8 = umin(autogen6,autogen7);
  APInt autogen9;
  if (autogen7.uge(autogen7.getBitWidth())) {
    autogen9 = APInt(autogen1.getBitWidth(), 0);
  } else {
    autogen9 = autogen1.lshr(autogen7.getZExtValue());
  }
  unsigned autogen10_autocast = autogen9.countl_one();
  APInt autogen10(autogen9.getBitWidth(),autogen10_autocast);
  APInt autogen11 = autogen9;
  if (autogen6.ule(autogen6.getBitWidth()))
    autogen11.clearLowBits(autogen6.getZExtValue());
  else
    autogen11.clearLowBits(autogen6.getBitWidth());
  APInt autogen12 = autogen4;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen12.setHighBits(autogen10.getZExtValue());
  else
    autogen12.setHighBits(autogen10.getBitWidth());
  APInt autogen13;
  if (autogen6.uge(autogen6.getBitWidth()) && autogen9.isSignBitSet()) {
    autogen13 = APInt(autogen9.getBitWidth(), -1);
  } else if (autogen6.uge(autogen6.getBitWidth()) && autogen9.isSignBitClear()) {
    autogen13 = APInt(autogen9.getBitWidth(), 0);
  } else {
    autogen13 = autogen9.ashr(autogen6.getZExtValue());
  }
  APInt autogen14 = umin(autogen8,autogen6);
  int autogen15 = autogen5.ule(autogen1);
  APInt autogen16 = autogen6+autogen6;
  APInt autogen17 = autogen12-autogen11;
  APInt autogen18 = autogen14-autogen7;
  int autogen19 = autogen16.eq(autogen18);
  APInt autogen20 = autogen19 ? autogen18 : autogen8 ;
  APInt autogen21 = autogen15 ? autogen2 : autogen17 ;
  APInt autogen22;
  if (autogen20.uge(autogen20.getBitWidth())) {
    autogen22 = APInt(autogen13.getBitWidth(), 0);
  } else {
    autogen22 = autogen13.lshr(autogen20.getZExtValue());
  }
  Vec<2> autogen23 = Vec<2>{autogen22,autogen21};
  return autogen23;
}

extern "C" Vec<2> sub_partial_solution_14_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[1];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),0);
  APInt autogen5 = APInt::getAllOnes(autogen3.getBitWidth());
  int autogen6 = autogen1.eq(autogen5);
  APInt autogen7;
  if (autogen4 == 0) {
    autogen7 = autogen4;
  } else {
    autogen7 = autogen4.urem(autogen4);
  }
  APInt autogen8 = autogen2+autogen7;
  APInt autogen9 = autogen8&autogen7;
  APInt autogen10 = autogen6 ? autogen3 : autogen9 ;
  Vec<2> autogen11 = Vec<2>{autogen10,autogen9};
  return autogen11;
}

extern "C" Vec<2> sub_partial_solution_15_body(Vec<2> arg0,Vec<2> autogen0){
  APInt autogen1 = arg0[0];
  APInt autogen2 = autogen0[0];
  APInt autogen3 = autogen0[1];
  APInt autogen4(autogen3.getBitWidth(),1);
  unsigned autogen5_autocast = autogen3.getBitWidth();
  APInt autogen5(autogen3.getBitWidth(),autogen5_autocast);
  APInt autogen6;
  if (autogen5.uge(autogen5.getBitWidth())) {
    autogen6 = APInt(autogen2.getBitWidth(), 0);
  } else {
    autogen6 = autogen2.lshr(autogen5.getZExtValue());
  }
  APInt autogen7 = umax(autogen4,autogen5);
  APInt autogen8 = autogen2;
  autogen8.clearSignBit();
  APInt autogen9 = umax(autogen4,autogen5);
  APInt autogen10 = autogen7-autogen9;
  APInt autogen11 = autogen6;
  if (autogen10.ule(autogen10.getBitWidth()))
    autogen11.setLowBits(autogen10.getZExtValue());
  else
    autogen11.setLowBits(autogen10.getBitWidth());
  APInt autogen12 = autogen1&autogen8;
  Vec<2> autogen13 = Vec<2>{autogen12,autogen11};
  return autogen13;
}

extern "C" int sub_partial_solution_15_cond(Vec<2> autogen0,Vec<2> autogen1){
  APInt autogen2 = autogen0[1];
  APInt autogen3 = autogen1[0];
  APInt autogen4 = autogen1[1];
  APInt autogen5(autogen4.getBitWidth(),0);
  APInt autogen6 = autogen3+autogen2;
  int autogen7 = autogen5.eq(autogen6);
  return autogen7;
}

extern "C" Vec<2> sub_partial_solution_0(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_0_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_1(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_1_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_2(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_2_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_3(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_3_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_4(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_4_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_5(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_5_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_6(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_6_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_7(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_7_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_8(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_8_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_9(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_9_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_10(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_10_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_11(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_11_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_12(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sub_partial_solution_12_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sub_partial_solution_12_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sub_partial_solution_13(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_13_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_14(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_14_body(autogen0,autogen1);
  return autogen2;
}

extern "C" Vec<2> sub_partial_solution_15(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = getTop(autogen0);
  APInt autogen3 = autogen2[0];
  APInt autogen4 = autogen2[1];
  Vec<2> autogen5 = sub_partial_solution_15_body(autogen0,autogen1);
  APInt autogen6 = autogen5[0];
  APInt autogen7 = autogen5[1];
  int autogen8 = sub_partial_solution_15_cond(autogen0,autogen1);
  APInt autogen9 = autogen8 ? autogen6 : autogen3 ;
  APInt autogen10 = autogen8 ? autogen7 : autogen4 ;
  Vec<2> autogen11 = Vec<2>{autogen9,autogen10};
  return autogen11;
}

extern "C" Vec<2> sub_solution(Vec<2> autogen0,Vec<2> autogen1){
  Vec<2> autogen2 = sub_partial_solution_0(autogen0,autogen1);
  Vec<2> autogen3 = sub_partial_solution_1(autogen0,autogen1);
  Vec<2> autogen4 = sub_partial_solution_2(autogen0,autogen1);
  Vec<2> autogen5 = sub_partial_solution_3(autogen0,autogen1);
  Vec<2> autogen6 = sub_partial_solution_4(autogen0,autogen1);
  Vec<2> autogen7 = sub_partial_solution_5(autogen0,autogen1);
  Vec<2> autogen8 = sub_partial_solution_6(autogen0,autogen1);
  Vec<2> autogen9 = sub_partial_solution_7(autogen0,autogen1);
  Vec<2> autogen10 = sub_partial_solution_8(autogen0,autogen1);
  Vec<2> autogen11 = sub_partial_solution_9(autogen0,autogen1);
  Vec<2> autogen12 = sub_partial_solution_10(autogen0,autogen1);
  Vec<2> autogen13 = sub_partial_solution_11(autogen0,autogen1);
  Vec<2> autogen14 = sub_partial_solution_12(autogen0,autogen1);
  Vec<2> autogen15 = sub_partial_solution_13(autogen0,autogen1);
  Vec<2> autogen16 = sub_partial_solution_14(autogen0,autogen1);
  Vec<2> autogen17 = sub_partial_solution_15(autogen0,autogen1);
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
